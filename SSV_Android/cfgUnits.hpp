	// cfgVehicles
	class SSV_Unit_Android_Base;

	class SSV_Unit_Android_Pilot: SSV_Unit_Android_Base
	{
		_generalMacro="SSV_Unit_Android_Pilot";
		scope=2;
		displayName="Android Pilot";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Android_Pilot.jpg";
		uniformClass="SSV_Uniform_Android_Pilot";
		editorSubcategory="SSV_EditorSubcategory_Workers";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_android_head_01",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Android_Pilot",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Android_Pilot",
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
			"SSV_Android\textures\pilot\pilot_uniform_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
            "SSV_Android\textures\pilot\pilot_uniform.rvmat"
        };
	};

	class SSV_Unit_Android_Worker: SSV_Unit_Android_Base
	{
		_generalMacro="SSV_Unit_Android_Worker";
		scope=2;
		displayName="Android Worker";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Android_Worker.jpg";
		uniformClass="SSV_Uniform_Android_Worker";
		editorSubcategory="SSV_EditorSubcategory_Workers";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_android_head_01",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Android_Worker",
			"SSV_Vest_Android_Military",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Android_Worker",
			"SSV_Vest_Android_Military",
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
			"SSV_Android\textures\worker\worker_uniform_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
            "SSV_Android\textures\worker\worker_uniform.rvmat"
        };
	};

	class SSV_Unit_Android_Army: SSV_Unit_Android_Base
	{
		_generalMacro="SSV_Unit_Android_Army";
		displayName="Android Soldier";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Android_Army.jpg";
		uniformClass="SSV_Uniform_Android_Military";
		nakeduniform="U_hal_synth_red_base";
		optic = "optic_ico_01_black_f";
		muzzle = "";
		laser = "acc_pointer_ir";
		bipod = "";
		editorSubcategory="SSV_EditorSubcategory_Army";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_android_head_02",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Android_Army",
			"SSV_Vest_Android_Military_Heavy",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Android_Army",
			"SSV_Vest_Android_Military_Heavy",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SSV_Weapon_Android_MSBS",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Android_MSBS",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
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
			"SSV_Android\textures\military\military_uniform_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
            "SSV_Android\textures\military\military_uniform.rvmat"
        };
	};

	class SSV_Unit_Android_Army_Medic: SSV_Unit_Android_Army
	{
		_generalMacro="SSV_Unit_Android_Army_Medic";
		displayName="Android Medic";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Android_Army_Medic.jpg";
		uniformClass="SSV_Uniform_Android_Military";
		nakeduniform="U_hal_synth_red_base";
		backpack="B_Messenger_Black_F";
		optic = "";
		muzzle = "";
		laser = "acc_pointer_ir";
		bipod = "";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_android_head_01",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Android_Army",
			"SSV_Vest_Android_Military",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Android_Army",
			"SSV_Vest_Android_Military",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SSV_Weapon_Android_ARX",
			"hgun_esd_01_F",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Android_ARX",
			"hgun_esd_01_F",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		picture="pictureHeal";
		icon="iconManMedic";
		role="CombatLifeSaver";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"SSV_Android\textures\military\military_uniform_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
            "SSV_Android\textures\military\military_uniform.rvmat"
        };
	};

	class SSV_Unit_Android_Army_SL: SSV_Unit_Android_Army
	{
		_generalMacro="SSV_Unit_Android_Army_SL";
		displayName="Android Sergeant";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Android_Army_SL.jpg";
		uniformClass="SSV_Uniform_Android_Military";
		nakeduniform="U_hal_synth_red_base";
		optic = "optic_hamr";
		muzzle = "";
		laser = "acc_pointer_ir";
		bipod = "";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_android_head_01",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Android_Assault",
			"SSV_Vest_Android_Military_Heavy",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Android_Assault",
			"SSV_Vest_Android_Military_Heavy",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SSV_Weapon_Android_MSBS",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Android_MSBS",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"HandGrenade",
			"HandGrenade",
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
			"SSV_Android\textures\military\military_uniform_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
            "SSV_Android\textures\military\military_uniform.rvmat"
        };
	};

	class SSV_Unit_Android_Military: SSV_Unit_Android_Base
	{
		_generalMacro="SSV_Unit_Android_Military";
		displayName="Android Police";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Android_Military.jpg";
		uniformClass="SSV_Uniform_Android_Military";
		nakeduniform="U_hal_synth_red_base";
		optic = "optic_holosight_smg_blk_f";
		muzzle = "";
		laser = "";
		bipod = "";
		editorSubcategory="SSV_EditorSubcategory_Police";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_android_head_02",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Android_Military",
			"SSV_Vest_Android_Military",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Android_Military",
			"SSV_Vest_Android_Military",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SSV_Weapon_Android_ARX",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Android_ARX",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
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
			"SSV_Android\textures\military\military_uniform_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
            "SSV_Android\textures\military\military_uniform.rvmat"
        };
	};

	class SSV_Unit_Android_Military_Medic: SSV_Unit_Android_Base
	{
		_generalMacro="SSV_Unit_Android_Military_Medic";
		displayName="Android Police Medic";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Android_Military_Medic.jpg";
		uniformClass="SSV_Uniform_Android_Military";
		nakeduniform="U_hal_synth_red_base";
		backpack="B_hal_medic_ViperLightHarness_blk_F";
		editorSubcategory="SSV_EditorSubcategory_Police";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_android_head_01",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Android_Military",
			"SSV_Vest_Android_Military",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Android_Military",
			"SSV_Vest_Android_Military",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SSV_Weapon_Android_Katiba",
			"hgun_esd_01_F",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Android_Katiba",
			"hgun_esd_01_F",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		picture="pictureHeal";
		icon="iconManMedic";
		role="CombatLifeSaver";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"SSV_Android\textures\military\military_uniform_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
            "SSV_Android\textures\military\military_uniform.rvmat"
        };
	};

	class SSV_Unit_Android_Military_SL: SSV_Unit_Android_Base
	{
		_generalMacro="SSV_Unit_Android_Military_SL";
		displayName="Android Police Sergeant";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Android_Military_SL.jpg";
		uniformClass="SSV_Uniform_Android_Military";
		nakeduniform="U_hal_synth_red_base";
		optic = "optic_Arco_blk_F";
		muzzle = "";
		laser = "acc_pointer_IR";
		bipod = "";
		editorSubcategory="SSV_EditorSubcategory_Police";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_android_head_01",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Android_Miner",
			"SSV_Vest_Android_Military",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Android_Miner",
			"SSV_Vest_Android_Military",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SSV_Weapon_Android_MX",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Android_MX",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag",
			"30Rnd_65x39_caseless_black_mag",
			"30Rnd_65x39_caseless_black_mag",
			"30Rnd_65x39_caseless_black_mag",
			"30Rnd_65x39_caseless_black_mag",
			"30Rnd_65x39_caseless_black_mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_black_mag",
			"30Rnd_65x39_caseless_black_mag",
			"30Rnd_65x39_caseless_black_mag",
			"30Rnd_65x39_caseless_black_mag",
			"30Rnd_65x39_caseless_black_mag",
			"30Rnd_65x39_caseless_black_mag",
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
			"SSV_Android\textures\military\military_uniform_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
            "SSV_Android\textures\military\military_uniform.rvmat"
        };
	};

	class EHS_Unit_Android_Pilot 			: SSV_Unit_Android_Pilot {scope=1; scopeCurator=1};
	class EHS_Unit_Android_Military 		: SSV_Unit_Android_Military {scope=1; scopeCurator=1};
	class EHS_Unit_Android_Military_Medic 	: SSV_Unit_Android_Military_Medic {scope=1; scopeCurator=1};
	class EHS_Unit_Android_Military_SL 		: SSV_Unit_Android_Military_SL {scope=1; scopeCurator=1};