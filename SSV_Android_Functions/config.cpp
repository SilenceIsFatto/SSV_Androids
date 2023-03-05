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
			
        };
		
    };
	
};