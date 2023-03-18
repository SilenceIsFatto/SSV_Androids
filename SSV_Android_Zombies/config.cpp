class CfgPatches
{
	class SSV_Android_Zombies
	{
		units[] =
		{
			"SSV_Unit_Android_Corrupted_SL",
			"SSV_Unit_Android_Corrupted",

			"SSV_Unit_Android_Corrupted_Dasher",
			"SSV_Unit_Android_Corrupted_Siren"
		};
		weapons[] =
		{
			""
		};
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"SSV_Android"};
		name = "SSV - Android Zombies";
		author = "SSV";
	};
};

#if __has_include("\WBK_Zombies\config.bin")
class cfgVehicles
{
	#include "cfgUnits.hpp"
};

class Extended_Init_EventHandlers 
{
	class SSV_Unit_Android_Corrupted_Base
	{
		class SSV_Android_Corrupted_Init
		{
			init = "[(_this select 0)] call SSV_Android_fnc_zombie_convertUnit";
		};
	};
	// class SSV_Unit_Android_Corrupted_Ticker
	// {
	// 	class SSV_Android_Ticker_Init
	// 	{
	// 		init = "[(_this select 0)] call SSV_Android_fnc_zombie_ticker";
	// 	};
	// };
	class SSV_Unit_Android_Corrupted_Dasher
	{
		class SSV_Android_Corrupted_Unique_Init
		{
			init = "[(_this select 0)] call SSV_Android_fnc_zombie_unique";
		};
	};
	class SSV_Unit_Android_Corrupted_Siren
	{
		class SSV_Android_Corrupted_Unique_Init
		{
			init = "[(_this select 0)] call SSV_Android_fnc_zombie_unique";
		};
	};
};
#endif

class CfgFunctions 
{
	
    class SSV_Android
    {
		
        class functions 
        {
			
            class zombie_convertUnit 
            {
                file = "\SSV_Android_Zombies\functions\fn_zombie_convertUnit.sqf";
            };

            class zombie_unique 
            {
                file = "\SSV_Android_Zombies\functions\fn_zombie_unique.sqf";
            };
			
			
        };
		
    };
	
};