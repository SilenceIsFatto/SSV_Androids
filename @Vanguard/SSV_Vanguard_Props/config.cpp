class CfgPatches
{
	class SSV_Vanguard_Props
	{
		units[] =
		{
			""
		};
		weapons[] =
		{
			""
		};
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"SSV_Android_Props"};
		name = "Vanguard Props";
		author = "Crow Studios";
	};
};

class cfgVehicleClasses
{
	class SSV_Props_Storage_Vanguard
	{
		displayName = "Vanguard";
	};
};

class cfgVehicles
{
	class SSV_Prop_Base;

	class SSV_Prop_Shield : SSV_Prop_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "SSV_Props_Storage_Vanguard";
		model = "SSV_Vanguard_Props\shield";
		hiddenSelections[] = {"shield", "shield_transparent"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Props\textures\shield\shield_ca.paa", "SSV_Vanguard_Props\textures\shield\shield_transparent_ca.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Props\textures\shield\shield.rvmat", "SSV_Vanguard_Props\textures\shield\shield_transparent.rvmat"};
		displayName = "Ground Fortification";
	};
	class SSV_Prop_Wall_1 : SSV_Prop_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "SSV_Props_Storage_Vanguard";
		model = "SSV_Vanguard_Props\wall_1";
		hiddenSelections[] = {"wall_1"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Props\textures\wall_1\wall_1_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Props\textures\wall_1\wall_1.rvmat"};
		displayName = "Half Fortification 1";
	};
	class SSV_Prop_Wall_2 : SSV_Prop_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "SSV_Props_Storage_Vanguard";
		model = "SSV_Vanguard_Props\wall_2";
		hiddenSelections[] = {"wall_2"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Props\textures\wall_2\wall_2_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Props\textures\wall_2\wall_2.rvmat"};
		displayName = "Half Fortification 2";
	};
};