

#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "GameFramework/Actor.h"
#include "RubiksCubeActor.generated.h"


class USceneComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UPrimitiveComponent;                  
class UMaterialInterface;

UCLASS()
class ESCAPEROOM_API ARubiksCubeActor : public AActor
{
	GENERATED_BODY()
public:
	ARubiksCubeActor();
	virtual void OnConstruction(const FTransform& Transform) override;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(CallInEditor, Category = "Rubiks")
	void TestRotateZPos();

	UFUNCTION()
	void OnPieceClicked(UPrimitiveComponent* ClickedComp, FKey Button);


	
	void RotateLayer(const FVector& Axis, int LayerSign, int Dir);
	FVector PickFaceNormal(UStaticMeshComponent* Comp) const;

	bool bIsRotating = false;
	void SnapToGrid();



private:
	UPROPERTY() USceneComponent* Root = nullptr;

	UPROPERTY(EditAnywhere, Category = "Rubiks")
	UStaticMesh* CubeMesh = nullptr;

	UPROPERTY(EditAnywhere, Category = "Rubiks|Stickers")
	float StickerGap = 0.02f;

	UPROPERTY(EditAnywhere, Category = "Rubiks")
	float CubeletSize = 10.f;

	UPROPERTY(EditAnywhere, Category = "Rubiks")
	float Tolerance = 0.05f;

	UPROPERTY() TArray<UStaticMeshComponent*> Pieces;

	UPROPERTY() USceneComponent* Z_Pos;
	UPROPERTY() USceneComponent* Z_Mid;
	UPROPERTY() USceneComponent* Z_Neg;

	UPROPERTY() USceneComponent* X_Pos;
	UPROPERTY() USceneComponent* X_Mid;
	UPROPERTY() USceneComponent* X_Neg;

	UPROPERTY() USceneComponent* Y_Pos;
	UPROPERTY() USceneComponent* Y_Mid;
	UPROPERTY() USceneComponent* Y_Neg;

	UPROPERTY(EditAnywhere, Category = "Rubiks|Stickers")
	UStaticMesh* StickerPlaneMesh = nullptr;

	UPROPERTY(EditAnywhere, Category = "Rubiks|Stickers")
	float StickerInset = 0.01f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Rubiks|Hierarchy", meta = (AllowPrivateAccess = "true"))
	USceneComponent* PinAnchor = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Rubiks|Hierarchy", meta = (AllowPrivateAccess = "true"))
	USceneComponent* CubeRoot = nullptr;


	UPROPERTY(EditAnywhere, Category = "Rubiks|Stickers") UMaterialInterface* MI_R = nullptr;
	UPROPERTY(EditAnywhere, Category = "Rubiks|Stickers") UMaterialInterface* MI_G = nullptr;
	UPROPERTY(EditAnywhere, Category = "Rubiks|Stickers") UMaterialInterface* MI_B = nullptr;
	UPROPERTY(EditAnywhere, Category = "Rubiks|Stickers") UMaterialInterface* MI_O = nullptr;
	UPROPERTY(EditAnywhere, Category = "Rubiks|Stickers") UMaterialInterface* MI_Y = nullptr;
	UPROPERTY(EditAnywhere, Category = "Rubiks|Stickers") UMaterialInterface* MI_W = nullptr;



};
