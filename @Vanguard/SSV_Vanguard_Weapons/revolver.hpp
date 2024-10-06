	class SSV_Weapon_Vanguard_Revolver : WRS_Weapon_Revolver
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\revolver\vanguard\revolver_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\revolver\vanguard\revolver.rvmat"};
		displayName = "'Constrictor' Revolver (Vanguard)";
		BaseWeapon = "SSV_Weapon_Vanguard_Revolver";
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class SSV_Weapon_Vanguard_Expeditionary_Revolver : SSV_Weapon_Vanguard_Revolver
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\revolver\expeditionary\revolver_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\revolver\expeditionary\revolver.rvmat"};
		displayName = "'Constrictor' Revolver (Expeditionary)";
		BaseWeapon = "SSV_Weapon_Vanguard_Expeditionary_Revolver";
	};
	class SSV_Weapon_Android_Revolver : SSV_Weapon_Vanguard_Revolver
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\revolver\android\revolver_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\revolver\android\revolver.rvmat"};
		displayName = "'Constrictor' Revolver (Android)";
		BaseWeapon = "SSV_Weapon_Android_Revolver";
	};