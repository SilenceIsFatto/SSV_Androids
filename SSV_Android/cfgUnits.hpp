	// cfgVehicles
    class B_Soldier_F;

	class SSV_Unit_Android_Base : B_Soldier_F
	{
		impactEffectsBlood="ImpactPlastic";
		canBleed=0;
		camouflage=1;
		nakeduniform="U_hal_synth_red_base";
		icon="iconManLeader";
		faction = "SSV_Aux_Androids";
		side=1;
		author="SSV";
		scope = 1;
		class Wounds
		{
			tex[]=
			{
				"hal_synths\data\hl_robo_01_co.paa",
				"hal_synths\data\hl_robo_01_co.paa"
			};
			mat[]=
			{
				"hal_synths\data\hl_robo_01.rvmat",
				"hal_synths\data\hl_robo_01_injury.rvmat"
			};
		};
		genericNames="VRMen";
		oxygenCapacity=200;
		class HitPoints
		{
			class HitFace
			{
				armor=6;
				material=-1;
				name="face_hub";
				passThrough=0.2;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=6;
				material=-1;
				name="neck";
				passThrough=0.2;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=10;
				material=-1;
				name="head";
				passThrough=0.2;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=12;
				material=-1;
				name="pelvis";
				passThrough=0.2;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=12;
				material=-1;
				name="spine1";
				passThrough=0.2;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=12;
				material=-1;
				name="spine2";
				passThrough=0.2;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=12;
				material=-1;
				name="spine3";
				passThrough=0.2;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=0.80000001;
				radius=0;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=0.5;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=0.5;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=0.5;
				radius=0.14;
				explosionShielding=0.30000001;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
	};

	class SSV_Unit_Android_Pilot: SSV_Unit_Android_Base
	{
		_generalMacro="SSV_Unit_Android_Pilot";
		scope=2;
		displayName="Android Pilot";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformClass="SSV_Uniform_Android_Pilot";
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

	class SSV_Unit_Android_Pilot_Ruined: SSV_Unit_Android_Base
	{
		_generalMacro="SSV_Unit_Android_Pilot_Ruined";
		scope=2;
		faction = "SSV_Aux_Replikas";
		displayName="Replika Pilot";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformClass="SSV_Uniform_Android_Pilot";
		side=0;
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

	class SSV_Unit_Android_Military: SSV_Unit_Android_Pilot
	{
		_generalMacro="SSV_Unit_Android_Military";
		displayName="Android Police";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		uniformClass="SSV_Uniform_Android_Military";
		nakeduniform="U_hal_synth_red_base";
		optic = "optic_holosight_smg_blk_f";
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

	class SSV_Unit_Android_Military_Medic: SSV_Unit_Android_Pilot
	{
		_generalMacro="SSV_Unit_Android_Military_Medic";
		displayName="Android Police Medic";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		uniformClass="SSV_Uniform_Android_Military";
		nakeduniform="U_hal_synth_red_base";
		backpack="B_hal_medic_ViperLightHarness_blk_F";
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
			"SSV_Weapon_Android_MSBS",
			"hgun_esd_01_F",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Android_MSBS",
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

	class SSV_Unit_Android_Military_SL: SSV_Unit_Android_Pilot
	{
		_generalMacro="SSV_Unit_Android_Military_SL";
		displayName="Android Police Sergeant";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		uniformClass="SSV_Uniform_Android_Military";
		nakeduniform="U_hal_synth_red_base";
		optic = "optic_hamr";
		muzzle = "";
		laser = "acc_flashlight";
		bipod = "";
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

	class EHS_Unit_Android_Pilot 			: SSV_Unit_Android_Pilot {};
	class EHS_Unit_Android_Military 		: SSV_Unit_Android_Military {};
	class EHS_Unit_Android_Military_Medic 	: SSV_Unit_Android_Military_Medic {};
	class EHS_Unit_Android_Military_SL 		: SSV_Unit_Android_Military_SL {};

	class SSV_Unit_Android_Military_Ruined: SSV_Unit_Android_Military
	{
		_generalMacro="SSV_Unit_Android_Military_Ruined";
		displayName="Replika Police";
		uniformClass="SSV_Uniform_Android_Military_Ruined";
		faction = "SSV_Aux_Replikas";
		side = 0;
		nakeduniform="U_hal_synth_red_base";
		optic = "optic_holosight_blk_f";
		muzzle = "muzzle_snds_65_ti_blk_f";
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
		side = 0;
		nakeduniform="U_hal_synth_red_base";
		optic = "optic_holosight_blk_f";
		muzzle = "muzzle_snds_65_ti_blk_f";
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
			"SSV_Weapon_Android_MSBS_Ruined",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Android_MSBS_Ruined",
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
		faction = "SSV_Aux_Replikas";
		side = 0;
		nakeduniform="U_hal_synth_red_base";
		optic = "optic_dms";
		muzzle = "muzzle_snds_65_ti_blk_f";
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
			"SSV_Weapon_Android_MSBS_Ruined",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"SSV_Weapon_Android_MSBS_Ruined",
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

	class EHS_Unit_Android_Pilot_Ruined 			: SSV_Unit_Android_Pilot_Ruined {};
	class EHS_Unit_Android_Military_Ruined 			: SSV_Unit_Android_Military_Ruined {};
	class EHS_Unit_Android_Military_Medic_Ruined 	: SSV_Unit_Android_Military_Medic_Ruined {};
	class EHS_Unit_Android_Military_SL_Ruined 		: SSV_Unit_Android_Military_SL_Ruined {};