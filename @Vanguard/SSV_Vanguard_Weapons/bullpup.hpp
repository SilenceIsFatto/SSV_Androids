	class SSV_Weapon_Vanguard_Bullpup : WRS_Weapon_Aug
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\bullpup\vanguard\bullpup_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\bullpup\vanguard\bullpup.rvmat"};
		displayName = "'Bulldog' Heavy Rifle (Vanguard)";
		BaseWeapon = "SSV_Weapon_Vanguard_Bullpup";
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class SSV_Weapon_Vanguard_Expeditionary_Bullpup : SSV_Weapon_Vanguard_Bullpup
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\bullpup\expeditionary\bullpup_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\bullpup\expeditionary\bullpup.rvmat"};
		displayName = "'Bulldog' Heavy Rifle (Expeditionary)";
		BaseWeapon = "SSV_Weapon_Vanguard_Expeditionary_Bullpup";
	};
	class SSV_Weapon_Android_Bullpup : SSV_Weapon_Vanguard_Bullpup
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\bullpup\android\bullpup_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\bullpup\android\bullpup.rvmat"};
		displayName = "'Bulldog' Heavy Rifle (Android)";
		BaseWeapon = "SSV_Weapon_Android_Bullpup";
	};