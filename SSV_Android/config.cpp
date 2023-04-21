class CfgPatches
{
	class SSV_Android
	{
		units[] =
		{
			"SSV_Unit_Android_Pilot",
			"SSV_Unit_Android_Pilot_Ruined",
			"SSV_Unit_Android_Military",
			"SSV_Unit_Android_Military_Medic",
			"SSV_Unit_Android_Military_SL",
			"SSV_Unit_Android_Military_Ruined",
			"SSV_Unit_Android_Military_Medic_Ruined",
			"SSV_Unit_Android_Military_SL_Ruined",
			
			"SSV_Unit_Android_Army_SL",
			"SSV_Unit_Android_Army_Medic",
			"SSV_Unit_Android_Army",
		}; // ruined = replika
		weapons[] =
		{
			""
		};
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"SSV_Android_Common"};
		name = "SSV - Androids";
		author = "SSV";
	};
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

class cfgGroups
{
	#include "cfgGroups_West.hpp"
	#include "cfgGroups_East.hpp"
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