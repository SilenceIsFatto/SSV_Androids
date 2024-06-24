class CfgPatches
{
	class SSV_Vanguard_Vehicles
	{
		units[] =
		{
			"SSV_Vehicle_Vanguard_VTOL_Infantry",
			"SSV_Vehicle_Vanguard_VTOL_VIV",
			"SSV_Vehicle_Vanguard_Futura_Tank",
			"SSV_Vehicle_Vanguard_Ifrit",
			"SSV_Vehicle_Vanguard_Ifrit_HMG",
			"SSV_Vehicle_Vanguard_Tank",
			"SSV_Vehicle_Vanguard_APC"
		}; 
		weapons[] =
		{
			""
		};
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"SSV_Android_Vehicles"};
		name = "Vanguard Vehicles";
		author = "Silence";
	};
};

#define QUOTE(var1) #var1

#define CREW QUOTE(SSV_Unit_Vanguard_Drone)

#define TYPICAL_CREW CREW
// ^ might aswell be the same for now

class cfgVehicles
{
	#include "cfgVehicles.hpp"
};