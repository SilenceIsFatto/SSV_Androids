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
		name = "Android Functions";
		author = "Crow Studios";
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

            class android_setIdentity
            {
                file = "SSV_Android_Functions\functions\fn_android_setIdentity.sqf";
            };

            class android_setLock
            {
                file = "SSV_Android_Functions\functions\fn_android_setLock.sqf";
            };

            class android_weaponInit 
            {
                file = "SSV_Android_Functions\functions\fn_android_weaponInit.sqf";
            };

            class canUseAbility 
            {
                file = "SSV_Android_Functions\functions\fn_canUseAbility.sqf";
            };

            class global_syncAnim 
            {
                file = "SSV_Android_Functions\functions\fn_global_syncAnim.sqf";
            };

            class global_syncChat
            {
                file = "SSV_Android_Functions\functions\fn_global_syncChat.sqf";
            };

            class isAndroid 
            {
                file = "SSV_Android_Functions\functions\fn_isAndroid.sqf";
            };

            class isUsingAbility 
            {
                file = "SSV_Android_Functions\functions\fn_isUsingAbility.sqf";
            };

            class postProcessing 
            {
                file = "SSV_Android_Functions\functions\fn_postProcessing.sqf";
            };
			
        };
		
    };
	
};