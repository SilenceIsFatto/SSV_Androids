	class SSV_Weapon_Vanguard_AR : WRS_Weapon_AR
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\ar_1\vanguard\ar_1_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\ar_1\vanguard\ar_1.rvmat"};
		displayName = "'Greyhound' Assault Rifle (Vanguard)";
		BaseWeapon = "SSV_Weapon_Vanguard_AR";
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class SSV_Weapon_Vanguard_Expeditionary_AR : SSV_Weapon_Vanguard_AR
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\ar_1\expeditionary\ar_1_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\ar_1\expeditionary\ar_1.rvmat"};
		displayName = "'Greyhound' Assault Rifle (Expeditionary)";
		BaseWeapon = "SSV_Weapon_Vanguard_Expeditionary_AR";
	};
	class SSV_Weapon_Android_AR : SSV_Weapon_Vanguard_AR
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\ar_1\android\ar_1_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\ar_1\android\ar_1.rvmat"};
		displayName = "'Greyhound' Assault Rifle (Android)";
		BaseWeapon = "SSV_Weapon_Android_AR";
	};