	class arifle_ARX_hex_F;
	class arifle_MSBS65_black_F;

	class SSV_Weapon_Android_ARX : arifle_ARX_hex_F
	{
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SSV_Android_Weapons\textures\arx\military_rifle_1_co.paa", "SSV_Android_Weapons\textures\arx\military_rifle_2_co.paa"};
		displayName = "115 Light Rifle (Android)";
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
		displayName = "115 Light Rifle (Replika)";
		BaseWeapon = "SSV_Weapon_Android_ARX_Ruined";
	};

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