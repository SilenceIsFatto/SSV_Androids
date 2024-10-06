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
			"SSV_Weapon_Vanguard_LMG"
		}; // ruined = replika
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"SSV_Android_Weapons"};
		name = "Vanguard Weapons";
		author = "Silence";
	};
};

class cfgWeapons
{
	#include "cfgWeapons.hpp"
};