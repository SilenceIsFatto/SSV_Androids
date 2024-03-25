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
		author = "Silence";
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
	// class SSV_Prop_Base_Static : SSV_Prop_Base
	// {
	// 	simulation = "thing";
	// };

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
	class SSV_Prop_Mineral_Box : SSV_Prop_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "SSV_Props_Storage_Vanguard";
		model = "SSV_Vanguard_Props\mineral_box";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Props\textures\mineral_box\mineral_box_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Props\textures\mineral_box\mineral_box.rvmat"};
		displayName = "Mineral Transport Box";
	};
	class SSV_Prop_Ore_Box : SSV_Prop_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "SSV_Props_Storage_Vanguard";
		model = "SSV_Vanguard_Props\ore_box";
		hiddenSelections[] = {"ore_box", "ore"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Props\textures\ore_box\ore_box_co.paa", "SSV_Vanguard_Props\textures\ore_box\ore_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Props\textures\ore_box\ore_box.rvmat", "SSV_Vanguard_Props\textures\ore_box\ore.rvmat"};
		displayName = "Ore Storage Box";
	};
	class SSV_Prop_Crystal : SSV_Prop_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "SSV_Props_Storage_Vanguard";
		model = "SSV_Vanguard_Props\crystal";
		hiddenSelections[] = {"canister_base", "canister_crystal", "canister_glass"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Props\textures\crystal\canister_base_co.paa", "SSV_Vanguard_Props\textures\crystal\canister_crystal_co.paa", "SSV_Vanguard_Props\textures\crystal\canister_glass_ca.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Props\textures\crystal\canister_base.rvmat", "SSV_Vanguard_Props\textures\crystal\canister_crystal.rvmat", "SSV_Vanguard_Props\textures\crystal\canister_glass.rvmat"};
		displayName = "Crystal Canister";
	};
	class SSV_Prop_Net : SSV_Prop_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "SSV_Props_Storage_Vanguard";
		model = "SSV_Vanguard_Props\net";
		simulation = "house";
		hiddenSelections[] = {"net_stand", "net"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Props\textures\net\net_stand_co.paa", "SSV_Vanguard_Props\textures\net\net_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Props\textures\net\net_stand.rvmat", "SSV_Vanguard_Props\textures\net\net.rvmat"};
		displayName = "Camo Net";
	};
	class SSV_Prop_Barricade : SSV_Prop_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "SSV_Props_Storage_Vanguard";
		model = "SSV_Vanguard_Props\barricade";
		simulation = "house";
		hiddenSelections[] = {"barricade", "barricade_sign"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Props\textures\barricade\barricade_co.paa", "SSV_Vanguard_Props\textures\barricade\barricade_sign_ca.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Props\textures\barricade\barricade.rvmat", "SSV_Vanguard_Props\textures\barricade\barricade_sign.rvmat"};
		displayName = "Road Barricade";
	};
	class SSV_Prop_Barricade_Metro : SSV_Prop_Barricade
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Props\textures\barricade\android\barricade_co.paa", "SSV_Vanguard_Props\textures\barricade\android\barricade_sign_ca.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Props\textures\barricade\android\barricade.rvmat", "SSV_Vanguard_Props\textures\barricade\android\barricade_sign.rvmat"};
		displayName = "Road Barricade (Metropolitan)";
	};
	class SSV_Prop_Trench_Straight : SSV_Prop_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "SSV_Props_Storage_Vanguard";
		model = "SSV_Vanguard_Props\trench";
		simulation = "house";
		hiddenSelections[] = {"trench_straight"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Props\textures\trench\trench_straight_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Props\textures\trench\trench_straight.rvmat"};
		displayName = "Trench (Straight)";
	};
};