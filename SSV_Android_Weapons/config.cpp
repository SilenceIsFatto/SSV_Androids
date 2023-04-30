class CfgPatches
{
	class SSV_Android_Weapons
	{
		units[] =
		{
			""
		}; 
		weapons[] =
		{
			"SSV_Weapon_Android_ARX",
			"SSV_Weapon_Android_ARX_Ruined",
			"SSV_Weapon_Android_MSBS",
			"SSV_Weapon_Android_MSBS_Ruined",
			
			"SSV_Weapon_Android_AK_Ruined",
			"SSV_Weapon_Android_Cyrus_Ruined",
			"SSV_Weapon_Android_Katiba",
			"SSV_Weapon_Android_P90"
		}; // ruined = replika
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"SSV_Android"};
		name = "SSV - Android Weapons";
		author = "SSV";
	};
};

class cfgWeapons
{
	#include "cfgWeapons.hpp"
};