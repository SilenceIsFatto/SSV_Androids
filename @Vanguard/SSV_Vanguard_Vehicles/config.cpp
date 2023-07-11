class CfgPatches
{
	class SSV_Vanguard_Vehicles
	{
		units[] =
		{
			"SSV_Vehicle_Vanguard_VTOL_Infantry",
			"SSV_Vehicle_Vanguard_VTOL_VIV",

			"SSV_Vehicle_Vanguard_Ifrit",
			"SSV_Vehicle_Vanguard_Tank",
			"SSV_Vehicle_Vanguard_APC",
		}; 
		weapons[] =
		{
			""
		}; // ruined = replika
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"SSV_Android_Vehicles"};
		name = "Vanguard Vehicles";
		author = "Crow Studios";
	};
};

class cfgVehicles
{
	#include "cfgVehicles.hpp"
};