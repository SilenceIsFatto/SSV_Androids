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

			"SSV_Unit_Android_Assassin",
			"SSV_Unit_Android_Assassin_Stealth"
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

	class SSV_Helmet_Android_Assault : SSV_Helmet_Base
	{
		displayName = "Android Helmet (Assault)";
		model = "SSV_Android\android_assault.p3d";
		scope = 2;

		hiddenSelections[] = {"camo", "visor"};
		hiddenSelectionsTextures[] = {"SSV_Android\textures\assault\assault_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android\textures\assault\assault.rvmat"};

		class ItemInfo : HeadgearItem
		{
			mass = 50;
			hiddenSelections[] = {"camo", "visor"};
			uniformModel = "SSV_Android\android_assault.p3d";
			modelSides[] = {"TWest"};
		};
	};

	class SSV_Helmet_Android_Assault_Ruined : SSV_Helmet_Android_Assault
	{
		displayName = "Replika Helmet (Assault)";

		hiddenSelectionsTextures[] = {"SSV_Android\textures\assault\ruined\assault_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android\textures\assault\ruined\assault.rvmat"};
	};

	class SSV_Helmet_Android_Worker : SSV_Helmet_Android_Assault
	{
		displayName = "Android Helmet (Worker)";

		hiddenSelectionsTextures[] = {"SSV_Android\textures\worker\worker_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android\textures\worker\worker.rvmat"};
	};

	class SSV_Helmet_Android_Military : SSV_Helmet_Base
	{ // don't mind the fact that it's referenced in files as military, we really mean police
		displayName = "Android Helmet (Police)";
		model = "SSV_Android\android_military.p3d";
		scope = 2;

		hiddenSelections[] = {"camo", "visor"};
		hiddenSelectionsTextures[] = {"SSV_Android\textures\military\military_co.paa", "SSV_Android\textures\military\military_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android\textures\military\military.rvmat", "SSV_Android\textures\military\military_emissive.rvmat"};

		class ItemInfo : HeadgearItem
		{
			mass = 50;
			hiddenSelections[] = {"camo", "visor"};
			uniformModel = "SSV_Android\android_military.p3d";
			modelSides[] = {"TWest"};
		};
	};

	class SSV_Helmet_Android_Military_Ruined : SSV_Helmet_Android_Military
	{ // don't mind the fact that it's referenced in files as military, we really mean police
		displayName = "Replika Helmet (Police)";

		hiddenSelectionsTextures[] = {"SSV_Android\textures\military\ruined\military_co.paa", "SSV_Android\textures\military\ruined\military_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android\textures\military\ruined\military.rvmat", "SSV_Android\textures\military\military_emissive.rvmat"};
	};

	class SSV_Helmet_Android_Miner : SSV_Helmet_Base
	{
		displayName = "Android Helmet (Miner)";
		model = "SSV_Android\android_miner.p3d";
		scope = 2;

		hiddenSelections[] = {"camo", "visor"};
		hiddenSelectionsTextures[] = {"SSV_Android\textures\miner\miner_co.paa", "SSV_Android\textures\miner\miner_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android\textures\miner\miner.rvmat", "SSV_Android\textures\miner\miner_emissive.rvmat"};

		class ItemInfo : HeadgearItem
		{
			mass = 50;
			hiddenSelections[] = {"camo", "visor"};
			uniformModel = "SSV_Android\android_miner.p3d";
			modelSides[] = {"TWest"};
		};
	};

	class SSV_Helmet_Android_Miner_Ruined : SSV_Helmet_Android_Miner
	{
		displayName = "Replika Helmet (Miner)";

		hiddenSelectionsTextures[] = {"SSV_Android\textures\miner\ruined\miner_co.paa", "SSV_Android\textures\miner\ruined\miner_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android\textures\miner\ruined\miner.rvmat", "SSV_Android\textures\miner\miner_emissive.rvmat"};
	};

	class SSV_Helmet_Android_Pilot : SSV_Helmet_Base
	{
		displayName = "Android Helmet (Pilot)";
		model = "SSV_Android\android_pilot.p3d";
		scope = 2;

		hiddenSelections[] = {"camo", "visor"};
		hiddenSelectionsTextures[] = {"SSV_Android\textures\pilot\pilot_co.paa", "SSV_Android\textures\pilot\pilot_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android\textures\pilot\pilot.rvmat", "SSV_Android\textures\pilot\pilot_emissive.rvmat"};

		class ItemInfo : HeadgearItem
		{
			mass = 50;
			hiddenSelections[] = {"camo", "visor"};
			uniformModel = "SSV_Android\android_pilot.p3d";
			modelSides[] = {"TWest"};
		};
	};

	class SSV_Helmet_Android_Pilot_Ruined : SSV_Helmet_Android_Pilot
	{
		displayName = "Replika Helmet (Pilot)";

		hiddenSelectionsTextures[] = {"SSV_Android\textures\pilot\ruined\pilot_co.paa", "SSV_Android\textures\pilot\ruined\pilot_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android\textures\pilot\ruined\pilot.rvmat", "SSV_Android\textures\pilot\pilot_emissive.rvmat"};
	};
};

class cfgVehicles
{
	#include "cfgUnits.hpp"
	#include "cfgUnitsEast.hpp"
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