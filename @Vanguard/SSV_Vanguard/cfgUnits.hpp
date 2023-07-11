	// cfgVehicles
	class SSV_Unit_Android_Base;

	class SSV_Unit_Vanguard_Base : SSV_Unit_Android_Base {}; // Literally just a copy so only vanguard units can use vanguard tech

	class SSV_Unit_Vanguard_J13: SSV_Unit_Vanguard_Base
	{
		_generalMacro="SSV_Unit_Vanguard_J13";
		scope=2;
		displayName = "Vanguard J13";
		model = "\JMSJEFF_inf\uniform_j13.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Redacted.jpg";
		uniformClass="SSV_Uniform_Vanguard_J13";
		editorSubcategory="SSV_EditorSubcategory_Army";
		faction = "SSV_Aux_Vanguard";
		side=2;
		backpack = "JMSJEFF_d2_backpack";
		optic = "optic_erco_blk_f";
		muzzle = "";
		laser = "";
		bipod = "";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_android_head_01",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Vanguard_R4",
			"SSV_Vest_Vanguard_SMG",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Vanguard_R4",
			"SSV_Vest_Vanguard_SMG",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SSV_Weapon_Vanguard_Bulldog",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Vanguard_Bulldog",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"WRS_Ar1_Magazine",
			"WRS_Ar1_Magazine",
			"WRS_Ar1_Magazine",
			"WRS_Ar1_Magazine",
			"WRS_Ar1_Magazine",
			"WRS_Ar1_Magazine",
			"SSV_Vanguard_Mag_OrganicGrenade",
			"SSV_Vanguard_Mag_OrganicGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"WRS_Ar1_Magazine",
			"WRS_Ar1_Magazine",
			"WRS_Ar1_Magazine",
			"WRS_Ar1_Magazine",
			"WRS_Ar1_Magazine",
			"WRS_Ar1_Magazine",
			"SSV_Vanguard_Mag_OrganicGrenade",
			"SSV_Vanguard_Mag_OrganicGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[] =
		{
			"SSV_Vanguard\textures\j13\j13_1_co.paa",
			"SSV_Vanguard\textures\j13\j13_2_co.paa",
			"SSV_Vanguard\textures\j13\j13_3_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
            "SSV_Vanguard\textures\j13\j13_1.rvmat",
            "SSV_Vanguard\textures\j13\j13_2.rvmat",
            "SSV_Vanguard\textures\j13\j13_3.rvmat"
        };
		hideProxySelections[]=
		{
			"legs_hide"
		};
	};

	class SSV_Unit_Vanguard_J13_Technician: SSV_Unit_Vanguard_J13
	{
		_generalMacro="SSV_Unit_Vanguard_J13_Technician";
		scope=2;
		displayName = "Vanguard J13 Technician";
		backpack = "JMSJEFF_d2_backpack";
		optic = "";
		muzzle = "";
		laser = "";
		bipod = "";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_android_head_01",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Vanguard_QRF_L",
			"SSV_Vest_Vanguard_J13_SL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Vanguard_QRF_L",
			"SSV_Vest_Vanguard_J13_SL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SSV_Weapon_Vanguard_Rhino",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Vanguard_Rhino",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"WRS_Shockgun_Magazine",
			"WRS_Shockgun_Magazine",
			"WRS_Shockgun_Magazine",
			"SSV_Vanguard_Mag_OrganicGrenade",
			"SSV_Vanguard_Mag_OrganicGrenade",
			"SSV_Vanguard_Mag_OrganicGrenade",
		};
		respawnMagazines[]=
		{
			"WRS_Shockgun_Magazine",
			"WRS_Shockgun_Magazine",
			"WRS_Shockgun_Magazine",
			"SSV_Vanguard_Mag_OrganicGrenade",
			"SSV_Vanguard_Mag_OrganicGrenade",
			"SSV_Vanguard_Mag_OrganicGrenade",
		};
	};

	class SSV_Unit_Vanguard_Stealth: SSV_Unit_Vanguard_Base
	{
		_generalMacro="SSV_Unit_Vanguard_Stealth";
		scope=2;
		displayName = "Vanguard Stealth";
		model="\JMSJEFF_inf\uniform_j3.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Redacted.jpg";
		uniformClass="SSV_Uniform_Vanguard_Stealth";
		editorSubcategory="SSV_EditorSubcategory_Army";
		faction = "SSV_Aux_Vanguard";
		side=2;
		optic = "optic_dms";
		muzzle = "";
		laser = "";
		bipod = "";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_android_head_02",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Vanguard_Stealth",
			"SSV_Vest_Vanguard_SL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Vanguard_Stealth",
			"SSV_Vest_Vanguard_SL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SSV_Weapon_Vanguard_Boomslang",
			"SSV_Weapon_Vanguard_Constrictor",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Vanguard_Boomslang",
			"SSV_Weapon_Vanguard_Constrictor",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"WRS_Boomslang_Magazine",
			"WRS_Boomslang_Magazine",
			"WRS_Boomslang_Magazine",
			"WRS_Boomslang_Magazine",
			"WRS_Boomslang_Magazine",
			"WRS_Boomslang_Magazine",
			"WRS_Revolver_Magazine",
			"WRS_Revolver_Magazine",
			"WRS_Revolver_Magazine",
			"WRS_Revolver_Magazine",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"WRS_Boomslang_Magazine",
			"WRS_Boomslang_Magazine",
			"WRS_Boomslang_Magazine",
			"WRS_Boomslang_Magazine",
			"WRS_Boomslang_Magazine",
			"WRS_Boomslang_Magazine",
			"WRS_Revolver_Magazine",
			"WRS_Revolver_Magazine",
			"WRS_Revolver_Magazine",
			"WRS_Revolver_Magazine",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		hiddenSelections[] =
		{
			"Camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"SSV_Vanguard\textures\stealth\stealth_uniform_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
            "SSV_Vanguard\textures\stealth\stealth_uniform.rvmat"
        };
	};

	class SSV_Unit_Vanguard_QRF: SSV_Unit_Vanguard_Base
	{
		_generalMacro="SSV_Unit_Vanguard_QRF";
		scope=2;
		displayName = "Vanguard QRF";
		model="\JMSJEFF_inf\uniform_j3_short.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Redacted.jpg";
		uniformClass="SSV_Uniform_Vanguard_QRF";
		editorSubcategory="SSV_EditorSubcategory_Army";
		faction = "SSV_Aux_Vanguard";
		side=2;
		optic = "optic_holosight_blk_f";
		muzzle = "";
		laser = "";
		bipod = "";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_android_head_03",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Vanguard_QRF",
			"SSV_Vest_Vanguard_QRF",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Vanguard_QRF",
			"SSV_Vest_Vanguard_QRF",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SSV_Weapon_Vanguard_Greyhound",
			"SSV_Weapon_Vanguard_Constrictor",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Vanguard_Greyhound",
			"SSV_Weapon_Vanguard_Constrictor",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"WRS_Revolver_Magazine",
			"WRS_Revolver_Magazine",
			"WRS_Revolver_Magazine",
			"WRS_Revolver_Magazine",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"WRS_Revolver_Magazine",
			"WRS_Revolver_Magazine",
			"WRS_Revolver_Magazine",
			"WRS_Revolver_Magazine",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		hiddenSelections[] =
		{
			"Camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"SSV_Vanguard\textures\qrf\qrf_uniform_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
            "SSV_Vanguard\textures\qrf\qrf_uniform.rvmat"
        };
		hideProxySelections[]=
		{
			"arms_hide"
		};
	};

	class SSV_Unit_Vanguard_Worker: SSV_Unit_Vanguard_Base
	{
		_generalMacro="SSV_Unit_Vanguard_Worker";
		scope=2;
		displayName="Vanguard Worker";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Redacted.jpg";
		uniformClass="SSV_Uniform_Vanguard_Worker";
		editorSubcategory="SSV_EditorSubcategory_Workers";
		faction = "SSV_Aux_Vanguard";
		side=2;
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_android_head_02",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Vanguard_Worker",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Vanguard_Worker",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"SSV_Vanguard\textures\worker\worker_uniform_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
            "SSV_Vanguard\textures\worker\worker_uniform.rvmat"
        };
	};

	class SSV_Unit_Vanguard_Drone: SSV_Unit_Vanguard_Worker
	{
		_generalMacro="SSV_Unit_Vanguard_Drone";
		scope=2;
		displayName="Vanguard Drone";
		model = "\JMSJEFF_inf\uniform_j13.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Redacted.jpg";
		uniformClass="SSV_Uniform_Vanguard_J13";
		editorSubcategory="SSV_EditorSubcategory_Army";
		faction = "SSV_Aux_Vanguard";
		side=2;
		backpack = "JMSJEFF_d2_backpack";
		optic = "optic_erco_blk_f";
		muzzle = "";
		laser = "";
		bipod = "";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_android_head_03",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Vanguard_Drone",
			"SSV_Vest_Vanguard_QRF_Marksman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Vanguard_Drone",
			"SSV_Vest_Vanguard_QRF_Marksman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[] =
		{
			"SSV_Vanguard\textures\j13\j13_1_co.paa",
			"SSV_Vanguard\textures\j13\j13_2_co.paa",
			"SSV_Vanguard\textures\j13\j13_3_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
            "SSV_Vanguard\textures\j13\j13_1.rvmat",
            "SSV_Vanguard\textures\j13\j13_2.rvmat",
            "SSV_Vanguard\textures\j13\j13_3.rvmat"
        };
	};

	class SSV_Unit_Vanguard_Soldier: SSV_Unit_Vanguard_Worker
	{
		_generalMacro="SSV_Unit_Vanguard_Soldier";
		displayName="Vanguard Soldier";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Redacted.jpg";
		uniformClass="SSV_Uniform_Vanguard_Soldier";
		nakeduniform="U_hal_synth_red_base";
		optic = "";
		muzzle = "";
		laser = "";
		bipod = "";
		editorSubcategory="SSV_EditorSubcategory_Army";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_android_head_01",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Vanguard_Soldier",
			"SSV_Vest_Vanguard_SMG",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Vanguard_Soldier",
			"SSV_Vest_Vanguard_SMG",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SSV_Weapon_Vanguard_Greyhound",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Vanguard_Greyhound",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"WRS_Ar_Magazine",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"SSV_Vanguard\textures\soldier\soldier_uniform_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
            "SSV_Vanguard\textures\soldier\soldier_uniform.rvmat"
        };
	};