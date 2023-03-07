class CfgPatches
{
	class SSV_Android_Functions
	{
		units[] =
		{
			""
		};
		weapons[] =
		{
			""
		};
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"SSV_Android"};
		name = "SSV - Android Functions";
		author = "EHS";
	};
};

class CfgFunctions 
{
	
    class SSV_Android
    {
		
        class functions 
        {
			
            class android_init
            {
                file = "SSV_Android_Functions\functions\fn_android_init.sqf";
            };

            class android_setLock
            {
                file = "SSV_Android_Functions\functions\fn_android_setLock.sqf";
            };

            class android_weaponInit 
            {
                file = "SSV_Android_Functions\functions\fn_android_weaponInit.sqf";
            };

            class global_syncAnim 
            {
                file = "SSV_Android_Functions\functions\fn_global_syncAnim.sqf";
            };

            class global_syncChat
            {
                file = "SSV_Android_Functions\functions\fn_global_syncChat.sqf";
            };

            class postProcessing 
            {
                file = "SSV_Android_Functions\functions\fn_postProcessing.sqf";
            };
			
        };
		
    };
	
};