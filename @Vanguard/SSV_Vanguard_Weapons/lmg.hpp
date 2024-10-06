	class SSV_Weapon_Vanguard_LMG : WRS_Weapon_LMG
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\machinegun\vanguard\machinegun_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\machinegun\vanguard\machinegun.rvmat"};
		displayName = "'Elephant' LMG (Vanguard)";
		BaseWeapon = "SSV_Weapon_Vanguard_LMG";
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class SSV_Weapon_Vanguard_Expeditionary_LMG : SSV_Weapon_Vanguard_LMG
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\machinegun\expeditionary\machinegun_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\machinegun\expeditionary\machinegun.rvmat"};
		displayName = "'Elephant' LMG (Expeditionary)";
		BaseWeapon = "SSV_Weapon_Vanguard_Expeditionary_LMG";
	};
	class SSV_Weapon_Android_LMG : SSV_Weapon_Vanguard_LMG
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\machinegun\android\machinegun_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\machinegun\android\machinegun.rvmat"};
		displayName = "'Elephant' LMG (Android)";
		BaseWeapon = "SSV_Weapon_Android_LMG";
	};