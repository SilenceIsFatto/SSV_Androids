    class SSV_Unit_Android_Pilot_Ruined: SSV_Unit_Android_Base
	{
		_generalMacro="SSV_Unit_Android_Pilot_Ruined";
		scope=2;
		faction = "SSV_Aux_Replikas";
		displayName="Replika Pilot";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Android_Pilot_Ruined.jpg";
		uniformClass="SSV_Uniform_Android_Pilot";
		side=0;
		editorSubcategory="SSV_EditorSubcategory_Workers";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_android_head_01",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Android_Pilot_Ruined",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Android_Pilot_Ruined",
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

	class SSV_Unit_Android_Military_Ruined: SSV_Unit_Android_Military
	{
		_generalMacro="SSV_Unit_Android_Military_Ruined";
		displayName="Replika Police";
		uniformClass="SSV_Uniform_Android_Military_Ruined";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Android_Military_Ruined.jpg";
		faction = "SSV_Aux_Replikas";
		side = 0;
		nakeduniform="U_hal_synth_red_base";
		optic = "optic_holosight_blk_f";
		muzzle = "muzzle_snds_65_ti_blk_f";
		editorSubcategory="SSV_EditorSubcategory_Police";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_replika_head_1",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Android_Military_Ruined",
			"SSV_Vest_Android_Military_Ruined",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Android_Military_Ruined",
			"SSV_Vest_Android_Military_Ruined",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SSV_Weapon_Android_ARX_Ruined",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Android_ARX_Ruined",
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
			"10Rnd_50BW_Mag_F",
			"10Rnd_50BW_Mag_F",
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
			"10Rnd_50BW_Mag_F",
			"10Rnd_50BW_Mag_F",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		hiddenSelectionsTextures[] =
		{
			"SSV_Android\textures\military\ruined\military_uniform_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
            "SSV_Android\textures\military\ruined\military_uniform.rvmat"
        };
	};
	class SSV_Unit_Android_Military_Medic_Ruined: SSV_Unit_Android_Military_Medic
	{
		_generalMacro="SSV_Unit_Android_Military_Medic_Ruined";
		displayName="Replika Police Medic";
		uniformClass="SSV_Uniform_Android_Military_Ruined";
		faction = "SSV_Aux_Replikas";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Android_Military_Medic_Ruined.jpg";
		side = 0;
		nakeduniform="U_hal_synth_red_base";
		optic = "optic_holosight_blk_f";
		muzzle = "muzzle_snds_65_ti_blk_f";
		bipod = "";
		editorSubcategory="SSV_EditorSubcategory_Police";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_replika_head_1",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Android_Pilot_Ruined",
			"SSV_Vest_Android_Military_Ruined",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Android_Pilot_Ruined",
			"SSV_Vest_Android_Military_Ruined",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SSV_Weapon_Android_MX_SW_Ruined",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Android_MX_SW_Ruined",
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
		hiddenSelectionsTextures[] =
		{
			"SSV_Android\textures\military\ruined\military_uniform_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
            "SSV_Android\textures\military\ruined\military_uniform.rvmat"
        };
	};
	class SSV_Unit_Android_Military_SL_Ruined: SSV_Unit_Android_Military
	{
		_generalMacro="SSV_Unit_Android_Military_SL_Ruined";
		displayName="Replika Police Sergeant";
		uniformClass="SSV_Uniform_Android_Military_Ruined";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Android_Military_SL_Ruined.jpg";
		faction = "SSV_Aux_Replikas";
		side = 0;
		nakeduniform="U_hal_synth_red_base";
		optic = "optic_Hamr";
		muzzle = "muzzle_snds_B";
		editorSubcategory="SSV_EditorSubcategory_Police";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_replika_head_2",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Android_Miner_Ruined",
			"SSV_Vest_Android_Military_Ruined",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Android_Miner_Ruined",
			"SSV_Vest_Android_Military_Ruined",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SSV_Weapon_Android_AK_Ruined",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Android_AK_Ruined",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		hiddenSelectionsTextures[] =
		{
			"SSV_Android\textures\military\ruined\military_uniform_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
            "SSV_Android\textures\military\ruined\military_uniform.rvmat"
        };
	};

	class EHS_Unit_Android_Pilot_Ruined 			: SSV_Unit_Android_Pilot_Ruined {scope=1; scopeCurator=1};
	class EHS_Unit_Android_Military_Ruined 			: SSV_Unit_Android_Military_Ruined {scope=1; scopeCurator=1};
	class EHS_Unit_Android_Military_Medic_Ruined 	: SSV_Unit_Android_Military_Medic_Ruined {scope=1; scopeCurator=1};
	class EHS_Unit_Android_Military_SL_Ruined 		: SSV_Unit_Android_Military_SL_Ruined {scope=1; scopeCurator=1};

    // Assassin

    class SSV_Unit_Android_Assassin: SSV_Unit_Android_Pilot
	{
		_generalMacro="SSV_Unit_Android_Assassin";
		displayName="Replika Assassin";
		model = "\A3\Characters_F_Enoch\Uniforms\i_e_coveralls_01_f.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Redacted.jpg";
		faction = "SSV_Aux_Replikas";
		side = 0;
		uniformClass="SSV_Uniform_Android_Assassin";
		nakeduniform="U_hal_synth_red_base";
		optic = "optic_lrps";
		muzzle = "muzzle_snds93mmg";
		laser = "acc_pointer_ir";
		bipod = "bipod_03_f_blk";
		editorSubcategory="SSV_EditorSubcategory_Army";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_replika_head_1",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Android_Assassin",
			"V_RebreatherB",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Android_Assassin",
			"V_RebreatherB",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SSV_Weapon_Android_Cyrus_Ruined",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Android_Cyrus_Ruined",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] =
		{
			"SSV_Android\textures\assassin\assassin_uniform_1_co.paa",
			"SSV_Android\textures\assassin\assassin_uniform_2_co.paa",
			"SSV_Android\textures\assassin\assassin_uniform_3_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
			"SSV_Android\textures\assassin\assassin_uniform_1.rvmat",
			"SSV_Android\textures\assassin\assassin_uniform_2.rvmat",
			"SSV_Android\textures\assassin\assassin_uniform_3.rvmat"
        };
	};

    class SSV_Unit_Android_Assassin_Stealth: SSV_Unit_Android_Assassin
	{
		_generalMacro="SSV_Unit_Android_Assassin_Stealth";
		displayName="Replika Saboteur";
		model = "\A3\Characters_F_Enoch\Uniforms\gorka_01_f.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Redacted.jpg";
		uniformClass="SSV_Uniform_Android_Assassin_Stealth";
		nakeduniform="U_hal_synth_red_base";
		optic = "optic_aco";
		muzzle = "muzzle_snds_b";
		laser = "acc_pointer_ir";
		bipod = "";
		editorSubcategory="SSV_EditorSubcategory_Army";
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_replika_head_2",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Android_Assassin",
			"SSV_Vest_Android_Military_Ruined",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Android_Assassin",
			"SSV_Vest_Android_Military_Ruined",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SSV_Weapon_Android_AK_Ruined",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Android_AK_Ruined",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"30Rnd_762x39_AK12_Mag_F",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		hiddenSelections[] =
		{
			"camo_1",
		};
		hiddenSelectionsTextures[] =
		{
			"SSV_Android\textures\assassin\assassin_stealth_uniform_co.paa"
		};
        hiddenSelectionsMaterials[] =
        {
			"SSV_Android\textures\assassin\assassin_stealth_uniform.rvmat"
        };
	};