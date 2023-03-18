class CfgPatches
{
	class SSV_Android_Vehicles
	{
		units[] =
		{
			"SSV_Vehicle_Android_VTOL_Infantry",
			"SSV_Vehicle_Android_VTOL_Infantry_Ruined",

			"SSV_Vehicle_Android_VTOL_VIV",
			"SSV_Vehicle_Android_VTOL_VIV_Ruined",

			"SSV_Vehicle_Android_Ifrit",
			"SSV_Vehicle_Android_Strider_Ruined",

			"SSV_Vehicle_Android_Tank",
			"SSV_Vehicle_Android_Tank_Ruined",

			"SSV_Vehicle_Android_APC",
			"SSV_Vehicle_Android_APC_Ruined"
		}; 
		weapons[] =
		{
			""
		}; // ruined = replika
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"SSV_Android"};
		name = "SSV - Android Vehicles";
		author = "SSV";
	};
};

class cfgVehicles
{
	#include "cfgVehicles.hpp"
};