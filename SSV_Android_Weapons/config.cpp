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
			"SSV_Weapon_Android_Military",
			"SSV_Weapon_Android_Military_Ruined"
		}; // ruined = replika
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"SSV_Android"};
		name = "SSV - Android Weapons";
		author = "EHS";
	};
};

class cfgWeapons
{
	#include "cfgWeapons.hpp"
};