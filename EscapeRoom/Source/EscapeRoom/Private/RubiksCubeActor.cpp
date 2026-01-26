


#include "RubiksCubeActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/PrimitiveComponent.h"
#include "InputCoreTypes.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"


static UMaterialInterface* PickMatForNormal(const FVector& N,
	UMaterialInterface* MI_R, UMaterialInterface* MI_O,
	UMaterialInterface* MI_B, UMaterialInterface* MI_G,
	UMaterialInterface* MI_Y, UMaterialInterface* MI_W)
{
	
	const FVector AbsN = N.GetAbs();
	if (AbsN.X >= AbsN.Y && AbsN.X >= AbsN.Z)
		return (N.X > 0) ? MI_B : MI_G; 
	if (AbsN.Y >= AbsN.X && AbsN.Y >= AbsN.Z)
		return (N.Y > 0) ? MI_Y : MI_W; 
	return (N.Z > 0) ? MI_R : MI_O;     
}

ARubiksCubeActor::ARubiksCubeActor()
{
	PrimaryActorTick.bCanEverTick = false;

	
	CubeRoot = CreateDefaultSubobject<USceneComponent>(TEXT("CubeRoot"));
	SetRootComponent(CubeRoot);

	PinAnchor = CreateDefaultSubobject<USceneComponent>(TEXT("PinAnchor"));
	PinAnchor->SetupAttachment(CubeRoot);

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	Root->SetupAttachment(CubeRoot);


	Z_Pos = CreateDefaultSubobject<USceneComponent>(TEXT("Z_Pos"));
	Z_Pos->SetupAttachment(Root);
	Z_Mid = CreateDefaultSubobject<USceneComponent>(TEXT("Z_Mid"));
	Z_Mid->SetupAttachment(Root);
	Z_Neg = CreateDefaultSubobject<USceneComponent>(TEXT("Z_Neg"));
	Z_Neg->SetupAttachment(Root);

	X_Pos = CreateDefaultSubobject<USceneComponent>(TEXT("X_Pos"));
	X_Pos->SetupAttachment(Root);
	X_Mid = CreateDefaultSubobject<USceneComponent>(TEXT("X_Mid"));
	X_Mid->SetupAttachment(Root);
	X_Neg = CreateDefaultSubobject<USceneComponent>(TEXT("X_Neg"));
	X_Neg->SetupAttachment(Root);

	Y_Pos = CreateDefaultSubobject<USceneComponent>(TEXT("Y_Pos"));
	Y_Pos->SetupAttachment(Root);
	Y_Mid = CreateDefaultSubobject<USceneComponent>(TEXT("Y_Mid"));
	Y_Mid->SetupAttachment(Root);
	Y_Neg = CreateDefaultSubobject<USceneComponent>(TEXT("Y_Neg"));
	Y_Neg->SetupAttachment(Root);

	Pieces.Reserve(27);
	for (int32 i = 0; i < 27; ++i)
	{
		UStaticMeshComponent* Comp = CreateDefaultSubobject<UStaticMeshComponent>(*FString::Printf(TEXT("Piece_%02d"), i));
		Comp->SetupAttachment(Root);
		Comp->SetMobility(EComponentMobility::Movable);
		Comp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		Comp->SetGenerateOverlapEvents(false);
		Comp->OnClicked.AddDynamic(this, &ARubiksCubeActor::OnPieceClicked);

		Pieces.Add(Comp);


	}

}


void ARubiksCubeActor::OnConstruction(const FTransform& Transform)
{
	if (Z_Pos) Z_Pos->SetRelativeLocation(FVector(0, 0, +CubeletSize));
	if (Z_Mid) Z_Mid->SetRelativeLocation(FVector(0, 0, 0));
	if (Z_Neg) Z_Neg->SetRelativeLocation(FVector(0, 0, -CubeletSize));

	if (X_Pos) X_Pos->SetRelativeLocation(FVector(+CubeletSize, 0, 0));
	if (X_Mid) X_Mid->SetRelativeLocation(FVector(0, 0, 0));
	if (X_Neg) X_Neg->SetRelativeLocation(FVector(-CubeletSize, 0, 0));

	if (Y_Pos) Y_Pos->SetRelativeLocation(FVector(0, +CubeletSize, 0));
	if (Y_Mid) Y_Mid->SetRelativeLocation(FVector(0, 0, 0));
	if (Y_Neg) Y_Neg->SetRelativeLocation(FVector(0, -CubeletSize, 0));



	int32 idx = 0;
	for (int32 z = -1; z <= 1; ++z)
	{
		for (int32 y = -1; y <= 1; ++y)
		{
			for (int32 x = -1; x <= 1; ++x)
			{
				UStaticMeshComponent* Comp = Pieces[idx++];
				if (CubeMesh) Comp->SetStaticMesh(CubeMesh);

				const FVector Pos(
					x * CubeletSize,
					y * CubeletSize,
					z * CubeletSize
				);


				Comp->SetRelativeLocation(Pos);
				Comp->SetRelativeRotation(FRotator::ZeroRotator);
				Comp->SetRelativeScale3D(FVector(1.0f));
				Comp->SetCastShadow(true);
				Comp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
				Comp->SetCollisionObjectType(ECC_WorldDynamic);
				Comp->SetCollisionResponseToAllChannels(ECR_Block);



				if (StickerPlaneMesh)
				{
					const float FaceSize = FMath::Max(0.f, CubeletSize - 2.f * StickerGap);
					const float PlaneScale = FaceSize / 100.0f;  // Engine plane is 100x100


					const FVector C = Comp->GetRelativeLocation();
					const float S = CubeletSize;
					const float eps = Tolerance;

					auto AddSticker = [&](const FVector& Normal)
						{
							UStaticMeshComponent* Sticker = NewObject<UStaticMeshComponent>(this);
							Sticker->SetStaticMesh(StickerPlaneMesh);
							Sticker->SetMobility(EComponentMobility::Movable);
							Sticker->SetupAttachment(Comp);
							Sticker->RegisterComponent();

							const FVector Pos = Normal * (S * 0.5f + StickerInset);
							const FRotator Rot = UKismetMathLibrary::MakeRotFromZ(Normal); 
							Sticker->SetRelativeLocation(Pos);
							Sticker->SetRelativeRotation(Rot);
							Sticker->SetRelativeScale3D(FVector(PlaneScale, PlaneScale, 1.0f));

							if (UMaterialInterface* M = PickMatForNormal(Normal, MI_R, MI_O, MI_B, MI_G, MI_Y, MI_W))
							{
								Sticker->SetMaterial(0, M);
							}

							Sticker->SetCollisionEnabled(ECollisionEnabled::NoCollision);
							Sticker->SetCastShadow(false);
						};

					if (FMath::IsNearlyEqual(C.X, +S, eps)) AddSticker(FVector(+1, 0, 0));
					if (FMath::IsNearlyEqual(C.X, -S, eps)) AddSticker(FVector(-1, 0, 0));

					if (FMath::IsNearlyEqual(C.Y, +S, eps)) AddSticker(FVector(0, +1, 0));
					if (FMath::IsNearlyEqual(C.Y, -S, eps)) AddSticker(FVector(0, -1, 0));

					if (FMath::IsNearlyEqual(C.Z, +S, eps)) AddSticker(FVector(0, 0, +1));
					if (FMath::IsNearlyEqual(C.Z, -S, eps)) AddSticker(FVector(0, 0, -1));
				}
			}
		}
	}
}



void ARubiksCubeActor::TestRotateZPos()
{
	if (!Z_Pos) return;

	const float TargetZ = +CubeletSize;
	for (UStaticMeshComponent* Comp : Pieces)
	{
		const float Z = Comp->GetRelativeLocation().Z;
		if (FMath::IsNearlyEqual(Z, TargetZ, Tolerance))
		{
			Comp->AttachToComponent(Z_Pos, FAttachmentTransformRules::KeepWorldTransform);
		}
	}

	Z_Pos->AddLocalRotation(FRotator(0.f, 90.f, 0.f));

	for (UStaticMeshComponent* Comp : Pieces)
	{
		if (Comp->GetAttachParent() == Z_Pos)
		{
			Comp->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
		}
	}
}


void ARubiksCubeActor::BeginPlay()
{
	Super::BeginPlay();

	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		PC->bShowMouseCursor = true;
		PC->bEnableClickEvents = true;
	}

}

static int Sign01(float v, float eps = 0.1f)
{
	return (v > eps) ? +1 : (v < -eps) ? -1 : 0;
}

FVector ARubiksCubeActor::PickFaceNormal(UStaticMeshComponent* Comp) const
{
	const FVector C = Comp->GetRelativeLocation();
	const float S = CubeletSize;
	const float eps = Tolerance;

	TArray<FVector> candidates;
	if (FMath::IsNearlyEqual(C.X, +S, eps)) candidates.Add(FVector(+1, 0, 0));
	if (FMath::IsNearlyEqual(C.X, -S, eps)) candidates.Add(FVector(-1, 0, 0));
	if (FMath::IsNearlyEqual(C.Y, +S, eps)) candidates.Add(FVector(0, +1, 0));
	if (FMath::IsNearlyEqual(C.Y, -S, eps)) candidates.Add(FVector(0, -1, 0));
	if (FMath::IsNearlyEqual(C.Z, +S, eps)) candidates.Add(FVector(0, 0, +1));
	if (FMath::IsNearlyEqual(C.Z, -S, eps)) candidates.Add(FVector(0, 0, -1));

	if (candidates.Num() == 1) return candidates[0];

	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		const FVector CamLoc = PC->PlayerCameraManager->GetCameraLocation();
		const FVector ToCam = (CamLoc - Comp->GetComponentLocation()).GetSafeNormal();
		float bestDot = -1e9f;
		FVector bestN(0, 0, 1);
		for (const FVector& N : candidates)
		{
			const float d = FVector::DotProduct(N, ToCam);
			if (d > bestDot) { bestDot = d; bestN = N; }
		}
		return bestN;
	}

	return candidates.Num() ? candidates[0] : FVector(0, 0, 1);
}

void ARubiksCubeActor::RotateLayer(const FVector& Axis, int LayerSign, int Dir)
{
	USceneComponent* Pivot = nullptr;
	if (Axis.X != 0)      Pivot = (LayerSign > 0) ? X_Pos : (LayerSign < 0 ? X_Neg : X_Mid);
	else if (Axis.Y != 0) Pivot = (LayerSign > 0) ? Y_Pos : (LayerSign < 0 ? Y_Neg : Y_Mid);
	else                  Pivot = (LayerSign > 0) ? Z_Pos : (LayerSign < 0 ? Z_Neg : Z_Mid);
	if (!Pivot) return;

	const float S = CubeletSize;

	TArray<UStaticMeshComponent*> LayerPieces;
	LayerPieces.Reserve(9);
	for (UStaticMeshComponent* C : Pieces)
	{
		const FVector P = C->GetRelativeLocation();
		const float v = (Axis.X != 0) ? P.X : (Axis.Y != 0) ? P.Y : P.Z;
		const float target = (LayerSign > 0) ? +S : (LayerSign < 0 ? -S : 0.f);
		if (FMath::IsNearlyEqual(v, target, Tolerance))
		{
			C->AttachToComponent(Pivot, FAttachmentTransformRules::KeepWorldTransform);
			LayerPieces.Add(C);
		}
	}

	const float Angle = 90.f * float(Dir);
	FRotator R(0, 0, 0);
	if (Axis.Z != 0) R.Yaw = Angle;
	else if (Axis.Y != 0) R.Pitch = Angle; 
	else                  R.Roll = Angle; 

	Pivot->AddLocalRotation(R);

	for (UStaticMeshComponent* C : LayerPieces)
	{
		C->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	}
}


void ARubiksCubeActor::OnPieceClicked(UPrimitiveComponent* ClickedComp, FKey)
{
	if (bIsRotating) return;
	bIsRotating = true;

	UStaticMeshComponent* Comp = Cast<UStaticMeshComponent>(ClickedComp);
	if (!Comp) { bIsRotating = false; return; }

	const FVector N = PickFaceNormal(Comp);
	const FVector A = (FMath::Abs(N.X) > 0.5f) ? FVector(FMath::Sign(N.X), 0, 0)
		: (FMath::Abs(N.Y) > 0.5f) ? FVector(0, FMath::Sign(N.Y), 0)
		: FVector(0, 0, FMath::Sign(N.Z));

	const FVector P = Comp->GetRelativeLocation();
	const float S = CubeletSize;
	const float v = (A.X != 0) ? P.X : (A.Y != 0) ? P.Y : P.Z;
	const int layer = (v > S * 0.5f) ? +1 : (v < -S * 0.5f ? -1 : 0);

	RotateLayer(A.GetSignVector(), layer, +1);
	SnapToGrid();
	bIsRotating = false;
}

void ARubiksCubeActor::SnapToGrid()
{
	const float S = CubeletSize;
	for (UStaticMeshComponent* C : Pieces)
	{
		FVector L = C->GetRelativeLocation();
		auto snap = [S](float v)
			{
				const float t = v / S;           
				const float r = FMath::RoundToFloat(t);
				return r * S;
			};
		L.X = snap(L.X);
		L.Y = snap(L.Y);
		L.Z = snap(L.Z);
		C->SetRelativeLocation(L);
	}
}


void ARubiksCubeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

