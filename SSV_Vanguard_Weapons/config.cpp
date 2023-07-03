class CfgPatches
{
	class SSV_Vanguard_Weapons
	{
		units[] =
		{
			""
		}; 
		weapons[] =
		{
			"SSV_Weapon_Android_Greyhound",
			"SSV_Weapon_Android_Raptor",
			"SSV_Weapon_Android_Constrictor",
			"SSV_Weapon_Android_Bulldog",
			"SSV_Weapon_Android_Boomslang",
			"SSV_Weapon_Vanguard_Greyhound",
			"SSV_Weapon_Vanguard_Constrictor",
			"SSV_Weapon_Vanguard_Bulldog",
			"SSV_Weapon_Vanguard_Boomslang",
			"SSV_Weapon_Vanguard_Pilum",
			"SSV_Weapon_Vanguard_Rhino"
		}; // ruined = replika
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"SSV_Android_Weapons"};
		name = "SSV - Vanguard Weapons";
		author = "SSV";
	};
};

class cfgWeapons
{
	#include "cfgWeapons.hpp"
};