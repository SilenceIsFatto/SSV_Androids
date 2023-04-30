class CfgPatches
{
	class SSV_Android_Props
	{
		units[] =
		{
			"SSV_Prop_Tablet",
			"SSV_Prop_SmallBox",
			"SSV_Prop_SmallBox_Metro",
			"SSV_Prop_LargeBox",
			"SSV_Prop_LargeBox_Metro",
			"SSV_Prop_MedicArm",
			"SSV_Prop_MedicArm_Metro",
			"SSV_Prop_MedicBox",
			"SSV_Prop_ArmorBox",
			"SSV_Prop_Crate",
			"SSV_Prop_Crate_Biohazard",
			"SSV_Prop_Barrel",
			"SSV_Prop_Barrel_Metro",
			"SSV_Prop_Barrel_Biohazard",
			"SSV_Prop_Fridge",
			"SSV_Prop_LabEquipment",
			"SSV_Drone_Cargo",
			"SSV_Drone_Cargo_Metro"
		};
		weapons[] =
		{
			""
		};
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"SSV_Android"};
		name = "SSV - Android Props";
		author = "SSV";
	};
};

class cfgVehicleClasses
{
	class SSV_Props_Storage
	{
		displayName = "Storage";
	};
};

class CfgEditorCategories
{
	class SSV_Props
	{
		displayName = "Android Ascension"; // Name visible in the list
	};
};

class CfgEditorSubcategories
{
	class SSV_Drones
	{
		displayName = "Drones";
	};
};

class cfgVehicles
{
	class Thing;
	class SSV_Prop_Base : Thing
	{
		destrType = "DestructNo";
		editorCategory = "SSV_Props";
		vehicleClass="SSV_Props_Storage";
	};

	class I_supplyCrate_F;
	class SSV_Prop_Cargo_Base : I_supplyCrate_F
	{
		scope = 0;
		destrType = "DestructNo";
		editorCategory = "SSV_Props";
		vehicleClass="SSV_Props_Storage";
		class TransportBackpacks {};
		class TransportItems {};
		class TransportMagazines {};
		class TransportWeapons {};
		// clear items
	};

	class B_UAV_01_F;
	class SSV_Drone_Base : B_UAV_01_F
	{
		scope = 0;
		faction = "SSV_Aux_Androids";
		editorSubcategory = "SSV_Drones";
		aileronSensitivity = 0.6; // 0.5 is blackfish default
		elevatorSensitivity = 0.6; // 0.5 is blackfish default
	};

	class SSV_Drone_Cargo : SSV_Drone_Base
	{
		scope = 2;
		scopeCurator = 2;
		model = "SSV_Android_Props\cargo_drone";
		hiddenSelections[] = {"drone_arms", "drone_head"};
		hiddenSelectionsTextures[] = {"SSV_Android_Props\textures\cargo_drone\cargo_drone_co.paa", "SSV_Android_Props\textures\cargo_drone\cargo_drone_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android_Props\textures\cargo_drone\cargo_drone.rvmat", "SSV_Android_Props\textures\cargo_drone\cargo_drone.rvmat"};
		displayName = "Cargo Drone";
	};

	class SSV_Drone_Cargo_Metro : SSV_Drone_Cargo
	{
		hiddenSelectionsTextures[] = {"SSV_Android_Props\textures\cargo_drone\metro\cargo_drone_co.paa", "SSV_Android_Props\textures\cargo_drone\metro\cargo_drone_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android_Props\textures\cargo_drone\metro\cargo_drone.rvmat", "SSV_Android_Props\textures\cargo_drone\metro\cargo_drone.rvmat"};
		displayName = "Cargo Drone (Metropolitan)";
	};

	class Land_Tablet_01_F;
	class SSV_Prop_Tablet : Land_Tablet_01_F
	{
		destrType = "DestructNo";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "SSV_Props";
		vehicleClass="SSV_Props_Storage";
		model = "SSV_Android_Props\data_pad";
		displayName = "Data Pad";
	};

	class SSV_Prop_MedicArm : SSV_Prop_Base
	{
		scope = 2;
		scopeCurator = 2;
		model = "SSV_Android_Props\medic_arm";
		hiddenSelections[] = {"med_arm"};
		hiddenSelectionsTextures[] = {"SSV_Android_Props\textures\medic_arm\med_arm_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android_Props\textures\medic_arm\med_arm.rvmat"};
		displayName = "Surgical Arm";
	};
	class SSV_Prop_MedicArm_Metro : SSV_Prop_MedicArm
	{
		hiddenSelectionsTextures[] = {"SSV_Android_Props\textures\medic_arm\metro\med_arm_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android_Props\textures\medic_arm\metro\med_arm.rvmat"};
		displayName = "Surgical Arm (Metropolitan)";
	};

	class SSV_Prop_Crate : SSV_Prop_Base
	{
		scope = 1;
		scopeCurator = 1;
		model = "SSV_Android_Props\crate";
		hiddenSelections[] = {"crate_bottom", "crate_top"};
		hiddenSelectionsTextures[] = {"SSV_Android_Props\textures\crate\crate_bottom_co.paa", "SSV_Android_Props\textures\crate\crate_top_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android_Props\textures\crate\crate_bottom.rvmat", "SSV_Android_Props\textures\crate\crate_top.rvmat"};
		displayName = "Crate";
	};
	class SSV_Prop_Crate_Biohazard : SSV_Prop_Crate
	{
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"SSV_Android_Props\textures\crate\biohazard\crate_bottom_co.paa", "SSV_Android_Props\textures\crate\biohazard\crate_top_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android_Props\textures\crate\biohazard\crate_bottom.rvmat", "SSV_Android_Props\textures\crate\biohazard\crate_top.rvmat"};
		displayName = "Crate (Biohazard)";
	};

	class SSV_Prop_Barrel : SSV_Prop_Base
	{
		scope = 2;
		scopeCurator = 2;
		model = "SSV_Android_Props\barrel";
		hiddenSelections[] = {"barrel"};
		hiddenSelectionsTextures[] = {"SSV_Android_Props\textures\barrel\barrel_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android_Props\textures\barrel\barrel.rvmat"};
		displayName = "Barrel";
	};
	class SSV_Prop_Barrel_Metro : SSV_Prop_Barrel
	{
		hiddenSelectionsTextures[] = {"SSV_Android_Props\textures\barrel\metro\barrel_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android_Props\textures\barrel\metro\barrel.rvmat"};
		displayName = "Barrel (Metropolitan)";
	};
	class SSV_Prop_Barrel_Biohazard : SSV_Prop_Barrel
	{
		hiddenSelectionsTextures[] = {"SSV_Android_Props\textures\barrel\biohazard\barrel_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android_Props\textures\barrel\biohazard\barrel.rvmat"};
		displayName = "Barrel (Biohazard)";
	};

	class SSV_Prop_SmallBox : SSV_Prop_Cargo_Base
	{
		scope = 2;
		scopeCurator = 2;
		model = "SSV_Android_Props\small_box";
		hiddenSelections[] = {"small_box"};
		hiddenSelectionsTextures[] = {"SSV_Android_Props\textures\small_box\small_box_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android_Props\textures\small_box\small_box.rvmat"};
		displayName = "Small Storage Box";
	};
	class SSV_Prop_SmallBox_Metro : SSV_Prop_SmallBox
	{
		hiddenSelectionsTextures[] = {"SSV_Android_Props\textures\small_box\metro\small_box_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android_Props\textures\small_box\metro\small_box.rvmat"};
		displayName = "Small Storage Box (Metropolitan)";
	};

	class SSV_Prop_LargeBox : SSV_Prop_Cargo_Base
	{
		scope = 2;
		scopeCurator = 2;
		model = "SSV_Android_Props\box";
		hiddenSelections[] = {"box"};
		hiddenSelectionsTextures[] = {"SSV_Android_Props\textures\box\box_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android_Props\textures\box\box.rvmat"};
		displayName = "Large Storage Box";
	};
	class SSV_Prop_LargeBox_Metro : SSV_Prop_LargeBox
	{
		hiddenSelectionsTextures[] = {"SSV_Android_Props\textures\box\metro\box_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android_Props\textures\box\metro\box.rvmat"};
		displayName = "Large Storage Box (Metropolitan)";
	};

	class SSV_Prop_Fridge : SSV_Prop_Base
	{
		scope = 2;
		scopeCurator = 2;
		model = "SSV_Android_Props\fridge";
		hiddenSelections[] = {"cloth", "fridge"};
		hiddenSelectionsTextures[] = {"SSV_Android_Props\textures\portable_fridge\cloth_co.paa", "SSV_Android_Props\textures\portable_fridge\fridge_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android_Props\textures\portable_fridge\cloth.rvmat", "SSV_Android_Props\textures\portable_fridge\fridge.rvmat"};
		displayName = "Portable Fridge";
	};

	class SSV_Prop_LabEquipment : SSV_Prop_Base
	{
		scope = 2;
		scopeCurator = 2;
		model = "SSV_Android_Props\lab_equipment";
		hiddenSelections[] = {"lab_equipment"};
		hiddenSelectionsTextures[] = {"SSV_Android_Props\textures\lab_equipment\lab_equipment_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android_Props\textures\lab_equipment\lab_equipment.rvmat"};
		displayName = "Lab Equipment";
	};

	class SSV_Prop_MedicBox : SSV_Prop_Cargo_Base
	{
		scope = 2;
		scopeCurator = 2;
		model = "SSV_Android_Props\medic_box";
		displayName = "Medical Box";
	};
	class SSV_Prop_ArmorBox : SSV_Prop_Cargo_Base
	{
		scope = 2;
		scopeCurator = 2;
		model = "SSV_Android_Props\armor_box";
		displayName = "Armor Box";
	};
};