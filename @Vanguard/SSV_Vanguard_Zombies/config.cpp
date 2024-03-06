class CfgPatches
{
	class SSV_Vanguard_Zombies
	{
		units[] =
		{
			"SSV_Unit_Vanguard_Xerthan",
			"SSV_Unit_Vanguard_Xerthan_Melee"
		};
		weapons[] =
		{
			""
		};
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"SSV_Android_Zombies", "WBK_ZombieCreatures"};
		name = "Vanguard Zombies";
		author = "Silence";
		skipWhenMissingDependencies = 1;
	};
};

class cfgVehicles
{
	#include "cfgUnits.hpp"
};

class Extended_Init_EventHandlers 
{
	class SSV_Unit_Vanguard_Xerthan
	{
		class SSV_Android_Corrupted_Init
		{
			init = "[(_this select 0), 0] call SSV_Android_fnc_zombie_convertUnit";
		};
	};
};