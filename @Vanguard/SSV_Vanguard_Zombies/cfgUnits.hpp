	// cfgVehicles
	class SSV_Unit_Android_Base;

	// class SSV_Unit_Android_Corrupted_Base;

	class JMSJEFF_yasher_war_warrior;

	class SSV_Unit_Vanguard_Xerthan: JMSJEFF_yasher_war_warrior
	{
		_generalMacro="SSV_Unit_Vanguard_Xerthan";
		scope=2;
		displayName="Xerthan";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Redacted.jpg";
		// editorSubcategory = "SSV_EditorSubcategory_Corrupted";

		// identity = "SSV_replika_identity_1";

		zombieType = 5;

		// identityTypes[]=
		// {
		// 	"LanguageENGVR_F",
		// 	"SSV_replika_head_1",
		// 	"NoGlasses"
		// };
		// linkedItems[]=
		// {
		// 	"SSV_Mask_Android_Shogun_Ruined",
		// 	"SSV_Vest_Android_Military_Heavy_Ruined",
		// 	"ItemMap",
		// 	"ItemCompass",
		// 	"ItemWatch",
		// 	"ItemRadio"
		// };
		// respawnLinkedItems[]=
		// {
		// 	"SSV_Mask_Android_Shogun_Ruined",
		// 	"SSV_Vest_Android_Military_Heavy_Ruined",
		// 	"ItemMap",
		// 	"ItemCompass",
		// 	"ItemWatch",
		// 	"ItemRadio"
		// };
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
		// magazines[]=
		// {
		// 	"Chemlight_green",
		// 	"Chemlight_green"
		// };
		// respawnMagazines[]=
		// {
		// 	"Chemlight_green",
		// 	"Chemlight_green"
		// };
		// hiddenSelections[] =
		// {
		// 	"camo"
		// };
		// hiddenSelectionsTextures[] =
		// {
		// 	"SSV_Android\textures\military\ruined\military_uniform_co.paa"
		// };
        // hiddenSelectionsMaterials[] =
        // {
        //     "SSV_Android\textures\military\ruined\military_uniform.rvmat"
        // };
	};

	class SSV_Unit_Vanguard_Xerthan_Melee: SSV_Unit_Vanguard_Xerthan
	{
		displayName="Xerthan Swordsman";

		// identity = "SSV_replika_identity_2";

		zombieType = 8;

		// identityTypes[]=
		// {
		// 	"LanguageENGVR_F",
		// 	"SSV_replika_head_2",
		// 	"NoGlasses"
		// };
		// linkedItems[]=
		// {
		// 	"SSV_Mask_Android_Bushi_Ruined",
		// 	"ItemMap",
		// 	"ItemCompass",
		// 	"ItemWatch",
		// 	"ItemRadio"
		// };
		// respawnLinkedItems[]=
		// {
		// 	"SSV_Mask_Android_Bushi_Ruined",
		// 	"ItemMap",
		// 	"ItemCompass",
		// 	"ItemWatch",
		// 	"ItemRadio"
		// };
		weapons[]=
		{
			"WBK_Katana",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"WBK_Katana",
			"Throw",
			"Put",
			"Binocular"
		};
	};