package com.epicgames.unreal;

import android.app.Application;
import android.content.Context;
import android.content.res.Configuration;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleObserver;
import androidx.lifecycle.OnLifecycleEvent;
import androidx.lifecycle.ProcessLifecycleOwner;

import java.lang.Thread;
import java.lang.Runnable;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

import com.epicgames.unreal.network.NetworkChangedManager;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;


public class GameApplication extends Application implements LifecycleObserver
{
	public static final boolean IS_SHIPPING_CONFIG = false;
	
	private static final Logger Log = new Logger("UE", "GameApp");

	private static boolean isForeground = false;

	private static Context context;

	protected static int MainThreadId;
	protected static int MainThreadPriority;

	private static Thread LoadLibrariesThread = null;
	private static boolean bLoadedLibraries = false;
	public static Lock ProcessSystemInfoLock = new ReentrantLock();

	public static boolean AndroidFileServer_Init(String filename)
	{
		File file = new File(filename);
		try
		{
			boolean bNeedsWrite = true;
			if (file.exists())
			{
				String Token = "";
				BufferedReader reader = null;
				try
				{
					reader = new BufferedReader(new FileReader(file));
					Token = reader.readLine();
					reader.close();
					if ("F8B12BF7402565E05FEBA9905253714E".equals(Token))
					{
						bNeedsWrite = false;
					}
				}
				catch (IOException ie)
				{
				}
			}
			if (bNeedsWrite)
			{

				FileWriter outputWriter = new FileWriter(file);
				outputWriter.write("F8B12BF7402565E05FEBA9905253714E");
				outputWriter.close();
			}
		}
		catch (IOException e)
		{
			return false;
		}
		return true;
	}

	public static boolean AndroidFileServer_Verify(String Token)
	{
		return ("F8B12BF7402565E05FEBA9905253714E".equals(Token));
	}


	@Override
	public void onCreate() {
		super.onCreate();
		GameApplication.context = getApplicationContext();
		GooglePlayGamesWrapper.Initialize(getApplicationContext());


		ProcessLifecycleOwner.get().getLifecycle().addObserver(this);

		// get the process name to see if we need network observer
		String processName = "unknown";
		if (android.os.Build.VERSION.SDK_INT >= 28)
		{
			processName = Application.getProcessName();
		}
		else
		{
			try
			{
				Class<?> activityThread = Class.forName("android.app.ActivityThread");
				processName = (String)activityThread.getDeclaredMethod("currentProcessName").invoke(null);
			}
			catch (Exception e)
			{
				// ignore
			}
		}
		
		if (!processName.contains("psoprogramservice"))
		{
			NetworkChangedManager.getInstance().initNetworkCallback(this);
		}
	}

	public static Context getAppContext() {
		return GameApplication.context;
	}

	@Override
	public void attachBaseContext(Context base) {
		super.attachBaseContext(base);

	}

	@Override
	public void onLowMemory() {
		super.onLowMemory();

	}

	@Override
	public void onTrimMemory(int level) {
		super.onTrimMemory(level);

	}

	@Override
	public void onConfigurationChanged (Configuration newConfig) {
		super.onConfigurationChanged(newConfig);

	}

	@OnLifecycleEvent(Lifecycle.Event.ON_START)
	void onEnterForeground() {
		Log.verbose("App in foreground");
		isForeground = true;
	}

	@OnLifecycleEvent(Lifecycle.Event.ON_STOP)
	void onEnterBackground() {
		Log.verbose("App in background");
		isForeground = false;
	}

	@SuppressWarnings("unused")
	public static boolean isAppInForeground() {
		return isForeground;
	}

	public static boolean isAppInBackground() {
		return !isForeground;
	}

	protected static void LoadLibraries(String CommandLine)
	{
		// We need to decide on enabling memory tracing before loading native code.
		// ignore for now
		try
		{
			System.loadLibrary("GLESv3");
			System.loadLibrary("EGL");
			ProcessSystemInfoLock.unlock();
			System.loadLibrary("android");
			System.loadLibrary("OpenSLES");
			System.loadLibrary("c");
			System.loadLibrary("dl");
			System.loadLibrary("log");
			System.loadLibrary("m");
			System.loadLibrary("z");
			System.loadLibrary("GPUCounters");
			System.loadLibrary("arcore_sdk_c");

		}
		catch (Exception e)
		{
			Log.debug(e.toString());
		}
	}

	public static void startLoadLibraries()
	{
		if (bLoadedLibraries)
		{
			return;
		}
		if (LoadLibrariesThread != null)
		{
			return;
		}

		MainThreadId = android.os.Process.myTid();
		MainThreadPriority = android.os.Process.getThreadPriority(MainThreadId);

		LoadLibrariesThread = new Thread(new Runnable() {
			public void run() {
				ProcessSystemInfoLock.lock();
				android.os.Process.setThreadPriority(android.os.Process.myTid(), MainThreadPriority);

				LoadLibraries("");

			}
		});
		LoadLibrariesThread.setName("LoadLibraries");
		LoadLibrariesThread.start();
	}

	public static boolean waitLoadLibraries()
	{
		if (bLoadedLibraries)
		{
			return true;
		}
		if (LoadLibrariesThread == null)
		{
			return true;
		}

		try
		{
			LoadLibrariesThread.join();
			bLoadedLibraries = true;
			return true;
		}
		catch (Exception e)
		{
			return false;
		}
	}
}
