class CfgPatches
{
	class SSV_Android_Vehicles
	{
		units[] =
		{
			"EHS_Vehicle_Android_VTOL_Infantry",
			"EHS_Vehicle_Android_VTOL_Infantry_Ruined",

			"EHS_Vehicle_Android_VTOL_VIV",
			"EHS_Vehicle_Android_VTOL_VIV_Ruined",

			"EHS_Vehicle_Android_Ifrit",
			"EHS_Vehicle_Android_Strider_Ruined",

			"EHS_Vehicle_Android_Tank",
			"EHS_Vehicle_Android_Tank_Ruined",

			"EHS_Vehicle_Android_APC",
			"EHS_Vehicle_Android_APC_Ruined"
		}; 
		weapons[] =
		{
			""
		}; // ruined = replika
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"SSV_Android"};
		name = "SSV - Android Vehicles";
		author = "EHS";
	};
};

class cfgVehicles
{
	#include "cfgVehicles.hpp"
};