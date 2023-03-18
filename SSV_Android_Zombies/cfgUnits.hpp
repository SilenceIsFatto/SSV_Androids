	// cfgVehicles
	class SSV_Unit_Android_Base;

	class SSV_Unit_Android_Corrupted_Base : SSV_Unit_Android_Base
	{
		faction = "SSV_Aux_Corrupted";
		side=0;
	};

	class SSV_Unit_Android_Corrupted_SL: SSV_Unit_Android_Corrupted_Base
	{
		_generalMacro="SSV_Unit_Android_Corrupted_SL";
		scope=2;
		displayName="Corrupted Leader";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Android_Pilot.jpg";
		uniformClass="SSV_Uniform_Android_Military_Ruined";
		backpack = "";

		identity = "SSV_replika_identity_1";

		zombieType = 2;

		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_replika_head_1",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Vest_Android_Military_Heavy_Ruined",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Vest_Android_Military_Heavy_Ruined",
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
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"Chemlight_green",
			"Chemlight_green"
		};
		hiddenSelections[] =
		{
			"camo"
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

	class SSV_Unit_Android_Corrupted: SSV_Unit_Android_Corrupted_SL
	{
		displayName="Corrupted Grunt";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Android_Pilot.jpg";

		identity = "SSV_replika_identity_2";

		zombieType = 3;

		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_replika_head_2",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};

	// class Zombie_Special_OPFOR_Boomer;

	// class SSV_Unit_Android_Corrupted_Ticker: Zombie_Special_OPFOR_Boomer
	// {
	// 	side=0;
	// 	scope=2;
	// 	faction = "SSV_Aux_Corrupted";
	// 	displayName="Corrupted Ticker";
	// 	model = "\A3\Characters_F\Common\coveralls.p3d";
	// 	editorPreview = "\SSV_Android\previews\units\SSV_Unit_Android_Pilot_Ruined.jpg";
	// 	uniformClass="SSV_Uniform_Android_Pilot";
	// 	nakeduniform="U_hal_synth_red_base";

	// 	identity = "SSV_replika_identity_1";

	// 	uniform = "SSV_Uniform_Android_Pilot";

	// uniqueZombie = 1;

	// 	identityTypes[]=
	// 	{
	// 		"LanguageENGVR_F",
	// 		"SSV_replika_head_2",
	// 		"NoGlasses"
	// 	};
	// 	hiddenSelections[] =
	// 	{
	// 		"camo"
	// 	};
	// 	hiddenSelectionsTextures[] =
	// 	{
	// 		"SSV_Android\textures\pilot\pilot_uniform_co.paa"
	// 	};
    //     hiddenSelectionsMaterials[] =
    //     {
    //         "SSV_Android\textures\pilot\pilot_uniform.rvmat"
    //     };
	// 	linkedItems[]=
	// 	{
	// 		"SSV_Vest_Android_Military_Heavy_Ruined",
	// 		"ItemMap",
	// 		"ItemCompass",
	// 		"ItemWatch",
	// 		"ItemRadio"
	// 	};
	// 	respawnLinkedItems[]=
	// 	{
	// 		"SSV_Vest_Android_Military_Heavy_Ruined",
	// 		"ItemMap",
	// 		"ItemCompass",
	// 		"ItemWatch",
	// 		"ItemRadio"
	// 	};
	// };

	class Zombie_Special_OPFOR_Leaper_1;

	class SSV_Unit_Android_Corrupted_Dasher: Zombie_Special_OPFOR_Leaper_1
	{
		side=0;
		scope=2;
		faction = "SSV_Aux_Corrupted";
		displayName="Corrupted Dasher";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Android_Pilot_Ruined.jpg";
		uniformClass="SSV_Uniform_Android_Pilot";
		nakeduniform="U_hal_synth_red_base";

		identity = "SSV_replika_identity_1";

		uniform = "SSV_Uniform_Android_Pilot";

		uniqueZombie = 1;

		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_replika_head_2",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SSV_Helmet_Android_Military_Ruined",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SSV_Helmet_Android_Military_Ruined",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
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

	class Zombie_Special_OPFOR_Screamer;

	class SSV_Unit_Android_Corrupted_Siren: Zombie_Special_OPFOR_Screamer
	{
		side=0;
		scope=2;
		faction = "SSV_Aux_Corrupted";
		displayName="Corrupted Siren";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Android_Pilot.jpg";
		uniformClass="SSV_Uniform_Android_Military_Ruined";
		nakeduniform="U_hal_synth_red_base";

		identity = "SSV_replika_identity_1";

		uniform = "SSV_Uniform_Android_Military_Ruined";

		uniqueZombie = 1;

		identityTypes[]=
		{
			"LanguageENGVR_F",
			"SSV_replika_head_1",
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
		hiddenSelections[] =
		{
			"camo"
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