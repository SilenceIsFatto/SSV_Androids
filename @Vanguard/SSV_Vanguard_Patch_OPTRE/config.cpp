class CfgPatches
{
	class SSV_Vanguard_Patch_OPTRE
	{
		units[] =
		{
			// Units
			"SSV_Unit_Vanguard_J13_Expeditionary",
			"SSV_Unit_Vanguard_QRF_Expeditionary",
			"SSV_Unit_Vanguard_Medic_Expeditionary",
			"SSV_Unit_Vanguard_Engineer_Expeditionary",
			"SSV_Unit_Vanguard_Breacher_Expeditionary",
			"SSV_Unit_Vanguard_Sniper_Expeditionary",
			"SSV_Unit_Vanguard_Drone_Expeditionary",
			"SSV_Unit_Vanguard_Stealth_Expeditionary",

			// Vehicles
			"ssv_vanguard_vehicle_blackfish_blue",

			"ssv_vanguard_vehicle_m875_black",
			"ssv_vanguard_vehicle_m494_black",

			"ssv_vanguard_vehicle_m808b_black",
			"ssv_vanguard_vehicle_m808b2a1_black",

			"ssv_vanguard_vehicle_m411_black",
			"ssv_vanguard_vehicle_m412_black",
			"ssv_vanguard_vehicle_m413_black",

			"ssv_vanguard_vehicle_catfish_black",
			"ssv_vanguard_vehicle_catfish_mg_black",
			"ssv_vanguard_vehicle_catfish_aa_black",

			"ssv_vanguard_vehicle_m12_black",
			"ssv_vanguard_vehicle_m12_mg_black",
			"ssv_vanguard_vehicle_m813_black",
			"ssv_vanguard_vehicle_m914_black",

			"ssv_vanguard_vehicle_m313_black",

			"ssv_vanguard_vehicle_falcon_black",
			"ssv_vanguard_vehicle_falcon_armed_black",

			"ssv_vanguard_vehicle_hornet_CAS_black",

			"ssv_vanguard_vehicle_pelican_unarmed_black",

			"ssv_vanguard_vehicle_yss_naval",

			"ssv_vanguard_vehicle_wombat",
			"ssv_vanguard_vehicle_wombat_b",

			"ssv_vanguard_static_m247h_shielded",
			"ssv_vanguard_static_m247t",
			"ssv_vanguard_static_scythe",
			"ssv_vanguard_static_lance"
		};
		weapons[] =
		{
			""
		};
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"SSV_Android", "SSV_Vanguard", "OPTRE_Core", "PhoenixSystems_Exosuits"};
		name = "Vanguard Patch (Operation Trebuchet)";
		author = "Silence";
		skipWhenMissingDependencies = 1;
	};
	// this patch adds stuff from OPTRE (+ EPSM) to the Vanguard roster, if loaded
};

#define QUOTE(var1) #var1

#define CREW QUOTE(SSV_Unit_Vanguard_Drone_Expeditionary)

#define TYPICAL_CREW CREW

#define FACTION_PREVIEW editorPreview = "\SSV_Android\previews\units\SSV_Unit_Redacted.jpg"

class cfgVehicles
{
	#include "CfgStatics.hpp"
	#include "CfgUnits.hpp"
	#include "CfgVehicles.hpp"
};

class cfgWeapons
{
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

	#include "CfgUniforms.hpp"
};

class cfgGroups
{
	#include "cfgGroups_Indep.hpp"
};