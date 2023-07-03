	class WRS_Weapon_AR; // Space M4

	class WRS_Weapon_AR_2; // Space MP5

	class WRS_Weapon_Revolver; // Space Python

	class WRS_Weapon_Aug; // Space Aug

	class WRS_Weapon_Sniper_Bolt; // Space Osiris

	class WRS_Weapon_ShockGun; // Space Railgun

	class WRS_Weapon_Sniper; // Space LMG but is actually a sniper

	class SSV_Weapon_Android_Greyhound : WRS_Weapon_AR
	{
		hiddenSelections[] = {"camo","neon"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\greyhound\military_wbk_rifle_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\greyhound\military_wbk_rifle.rvmat"};
		displayName = "'Greyhound' Assault Rifle (Android)";
		BaseWeapon = "SSV_Weapon_Android_Greyhound";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	class SSV_Weapon_Android_Raptor : WRS_Weapon_AR_2
	{
		hiddenSelections[] = {"camo","neon"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\raptor\military_wbk_smg_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\raptor\military_wbk_smg.rvmat"};
		displayName = "'Raptor' SMG (Android)";
		BaseWeapon = "SSV_Weapon_Android_Raptor";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	class SSV_Weapon_Android_Constrictor : WRS_Weapon_Revolver
	{
		hiddenSelections[] = {"camo","neon"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\constrictor\military_wbk_revolver_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\constrictor\military_wbk_revolver.rvmat"};
		displayName = "'Constrictor' Revolver (Android)";
		BaseWeapon = "SSV_Weapon_Android_Constrictor";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	class SSV_Weapon_Android_Bulldog : WRS_Weapon_Aug
	{
		hiddenSelections[] = {"camo","neon"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\bulldog\military_wbk_aug_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\bulldog\military_wbk_aug.rvmat"};
		displayName = "'Bulldog' Assault Rifle (Android)";
		BaseWeapon = "SSV_Weapon_Android_Bulldog";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	class SSV_Weapon_Android_Boomslang : WRS_Weapon_Sniper_Bolt
	{
		hiddenSelections[] = {"camo","neon"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\boomslang\military_wbk_sniper_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\boomslang\military_wbk_sniper.rvmat"};
		displayName = "'Boomslang' Sniper Rifle (Android)";
		BaseWeapon = "SSV_Weapon_Android_Boomslang";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	// Vanguard

	class SSV_Weapon_Vanguard_Greyhound : WRS_Weapon_AR
	{
		hiddenSelections[] = {"camo","neon"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\greyhound\vanguard\military_wbk_rifle_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\greyhound\vanguard\military_wbk_rifle.rvmat"};
		displayName = "'Greyhound' Assault Rifle (Vanguard)";
		BaseWeapon = "SSV_Weapon_Vanguard_Greyhound";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	class SSV_Weapon_Vanguard_Constrictor : WRS_Weapon_Revolver
	{
		hiddenSelections[] = {"camo","neon"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\constrictor\vanguard\military_wbk_revolver_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\constrictor\vanguard\military_wbk_revolver.rvmat"};
		displayName = "'Constrictor' Revolver (Vanguard)";
		BaseWeapon = "SSV_Weapon_Vanguard_Constrictor";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	class SSV_Weapon_Vanguard_Bulldog : WRS_Weapon_Aug
	{
		hiddenSelections[] = {"camo","neon"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\bulldog\vanguard\military_wbk_aug_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\bulldog\vanguard\military_wbk_aug.rvmat"};
		displayName = "'Bulldog' Assault Rifle (Vanguard)";
		BaseWeapon = "SSV_Weapon_Vanguard_Bulldog";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	class SSV_Weapon_Vanguard_Boomslang : WRS_Weapon_Sniper_Bolt
	{
		hiddenSelections[] = {"camo","neon"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\boomslang\vanguard\military_wbk_sniper_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\boomslang\vanguard\military_wbk_sniper.rvmat"};
		displayName = "'Boomslang' Sniper Rifle (Vanguard)";
		BaseWeapon = "SSV_Weapon_Vanguard_Boomslang";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	class SSV_Weapon_Vanguard_Pilum : WRS_Weapon_Sniper
	{
		hiddenSelections[] = {"camo","neon"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\pilum\military_wbk_lmg_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\pilum\military_wbk_lmg.rvmat"};
		displayName = "'Pilum' Sniper Rifle (Vanguard)";
		BaseWeapon = "SSV_Weapon_Vanguard_Pilum";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};

	class SSV_Weapon_Vanguard_Rhino : WRS_Weapon_ShockGun
	{
		hiddenSelections[] = {"camo","neon"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\rhino\military_wbk_shotgun_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\rhino\military_wbk_shotgun.rvmat"};
		displayName = "'Rhino' Railgun (Vanguard)";
		BaseWeapon = "SSV_Weapon_Vanguard_Rhino";
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};