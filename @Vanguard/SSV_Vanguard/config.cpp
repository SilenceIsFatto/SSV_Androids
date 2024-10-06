class CfgPatches
{
	class SSV_Vanguard
	{
		units[] =
		{
			"SSV_Unit_Vanguard_J13",
			"SSV_Unit_Vanguard_J13_Technician",
			"SSV_Unit_Vanguard_Stealth",
			"SSV_Unit_Vanguard_QRF",
			"SSV_Unit_Vanguard_QRF_Medic",
			"SSV_Unit_Vanguard_Worker",
			"SSV_Unit_Vanguard_Soldier",
			"SSV_Unit_Vanguard_Drone",
			"SSV_Unit_Vanguard_Engineer",
			"SSV_Unit_Vanguard_Heavy"
		}; // ruined = replika
		weapons[] =
		{
			""
		};
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"SSV_Android"};
		name = "Vanguard";
		author = "Silence";
	};
};

class CfgFactionClasses
{
	class SSV_Aux_Vanguard
	{
		displayName = "Vanguard";
		author = "SSV";
		picture = "\SSV_Common\SSV_logo_co.paa";
		priority = 19;
		side = 2; // GREENFOR
	};
	class SSV_Aux_Vanguard_SpecOps : SSV_Aux_Vanguard
	{
		displayName = "Vanguard Special Ops";
		priority = 20;
		side = 2; // GREENFOR
	};
};

class cfgGroups
{
	#include "cfgGroups_Indep.hpp"
};

class cfgWeapons
{
	class HeadgearItem;

    class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem: InventoryItem_Base_F
	{
		type=801;
	};
	class Uniform_Base: ItemCore
	{
		scope=0;
		allowedSlots[]={901};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Soldier_F";
			containerClass="Supply0";
			mass=0;
		};
	};

	#include "cfgUniforms.hpp"
	#include "cfgVests.hpp"

	class SSV_Helmet_Base;

	#include "cfgHelmets.hpp"
};

class cfgGlasses
{
	class None;
	#include "cfgMasks.hpp"
};

class cfgVehicles
{
	#include "cfgUnits.hpp"
};

class Extended_Init_EventHandlers 
{
	class SSV_Unit_Android_Base
	{
		class SSV_weaponInit
		{
			init = "[(_this select 0)] call SSV_Android_fnc_android_init";
		};
	};
};