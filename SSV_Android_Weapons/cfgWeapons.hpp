	class arifle_ARX_hex_F;
	class arifle_MSBS65_black_F;
	class arifle_MX_SW_F;
	class arifle_MX_F;
	class arifle_MXM_F;
	class arifle_AK12U_F;
	class arifle_Katiba_F;

	class srifle_EBR_F;
	class srifle_DMR_05_blk_f;

	class SMG_03_black;

	/*
		Weapon numbers taken:
		101
		109
		117
		107
		106
		105
		120
		115
		112
	*/

	// MX

	class SSV_Weapon_Android_MXM : arifle_MXM_F
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"SSV_Android_Weapons\textures\military_mx\military_mxm_co.paa"};
		displayName = "107 Medium Marksman Rifle (Android)";
		BaseWeapon = "SSV_Weapon_Android_MXM";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	class SSV_Weapon_Android_MX_SW : arifle_MX_SW_F
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"SSV_Android_Weapons\textures\military_mx\military_mxsw_co.paa"};
		displayName = "106 Medium Rifle (Android)";
		BaseWeapon = "SSV_Weapon_Android_MX_SW";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	class SSV_Weapon_Android_MX : arifle_MX_F
	{
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SSV_Android_Weapons\textures\military_mx\military_mx_1_co.paa", "SSV_Android_Weapons\textures\military_mx\military_mx_2_co.paa"};
		displayName = "105 Light Rifle (Android)";
		BaseWeapon = "SSV_Weapon_Android_MX";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	class SSV_Weapon_Android_MXM_Ruined : SSV_Weapon_Android_MXM
	{
		hiddenSelectionsTextures[] = {"SSV_Android_Weapons\textures\military_mx\ruined\military_mxm_co.paa"};
		displayName = "107 Medium Marksman Rifle (Replika)";
		BaseWeapon = "SSV_Weapon_Android_MXM_Ruined";
	};

	class SSV_Weapon_Android_MX_SW_Ruined : SSV_Weapon_Android_MX_SW
	{
		hiddenSelectionsTextures[] = {"SSV_Android_Weapons\textures\military_mx\ruined\military_mxsw_co.paa"};
		displayName = "106 Medium Rifle (Replika)";
		BaseWeapon = "SSV_Weapon_Android_MX_SW_Ruined";
	};

	class SSV_Weapon_Android_MX_Ruined : SSV_Weapon_Android_MX
	{
		hiddenSelectionsTextures[] = {"SSV_Android_Weapons\textures\military_mx\ruined\military_mx_1_co.paa", "SSV_Android_Weapons\textures\military_mx\ruined\military_mx_2_co.paa"};
		displayName = "105 Light Rifle (Replika)";
		BaseWeapon = "SSV_Weapon_Android_MX_Ruined";
	};

	// AK

	class SSV_Weapon_Android_AK_Ruined : arifle_AK12U_F
	{
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SSV_Android_Weapons\textures\military_ak\military_ak_1_co.paa", "SSV_Android_Weapons\textures\military_ak\military_ak_2_co.paa"};
		displayName = "109 Hybrid Rifle (Replika)";
		BaseWeapon = "SSV_Weapon_Android_AK_Ruined";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	// Katiba

	class SSV_Weapon_Android_Katiba : arifle_Katiba_F
	{
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"SSV_Android_Weapons\textures\military_katiba\military_katiba_1_co.paa", "SSV_Android_Weapons\textures\military_katiba\military_katiba_2_co.paa"};
		displayName = "117 Hybrid Rifle (Android)";
		BaseWeapon = "SSV_Weapon_Android_Katiba";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	// P90

	class SSV_Weapon_Android_P90 : SMG_03_black
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SSV_Android_Weapons\textures\military_p90\military_p90_co.paa"};
		displayName = "101 Light SMG (Android)";
		BaseWeapon = "SSV_Weapon_Android_P90";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	// Cyrus

	class SSV_Weapon_Android_Cyrus_Ruined : srifle_DMR_05_blk_f
	{
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SSV_Android_Weapons\textures\military_sniper\military_sniper_1_co.paa", "SSV_Android_Weapons\textures\military_sniper\military_sniper_2_co.paa"};
		displayName = "120 Heavy Sniper Rifle (Replika)";
		BaseWeapon = "SSV_Weapon_Android_Cyrus_Ruined";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	// Type 115

	class SSV_Weapon_Android_ARX : arifle_ARX_hex_F
	{
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SSV_Android_Weapons\textures\arx\military_rifle_1_co.paa", "SSV_Android_Weapons\textures\arx\military_rifle_2_co.paa"};
		displayName = "115 Medium Rifle (Android)";
		BaseWeapon = "SSV_Weapon_Android_ARX";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	class SSV_Weapon_Android_ARX_Ruined : SSV_Weapon_Android_ARX
	{
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SSV_Android_Weapons\textures\arx\ruined\military_rifle_1_co.paa", "SSV_Android_Weapons\textures\arx\ruined\military_rifle_2_co.paa"};
		displayName = "115 Medium Rifle (Replika)";
		BaseWeapon = "SSV_Weapon_Android_ARX_Ruined";
	};

	// MSBS

	class SSV_Weapon_Android_MSBS : arifle_MSBS65_black_F
	{
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SSV_Android_Weapons\textures\msbs\military_msbs_1_co.paa", "SSV_Android_Weapons\textures\msbs\military_msbs_2_co.paa"};
		displayName = "112 Heavy Rifle (Android)";
		BaseWeapon = "SSV_Weapon_Android_MSBS";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	class SSV_Weapon_Android_MSBS_Ruined : SSV_Weapon_Android_MSBS
	{
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SSV_Android_Weapons\textures\msbs\ruined\military_msbs_1_co.paa", "SSV_Android_Weapons\textures\msbs\ruined\military_msbs_2_co.paa"};
		displayName = "112 Heavy Rifle (Replika)";
		BaseWeapon = "SSV_Weapon_Android_MSBS_Ruined";
	};

	class EHS_Weapon_Android_ARX : SSV_Weapon_Android_ARX {};
	class EHS_Weapon_Android_ARX_Ruined : SSV_Weapon_Android_ARX_Ruined {};
	class EHS_Weapon_Android_MSBS : SSV_Weapon_Android_MSBS {};
	class EHS_Weapon_Android_MSBS_Ruined : SSV_Weapon_Android_MSBS_Ruined {};