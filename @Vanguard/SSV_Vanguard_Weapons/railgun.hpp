	class SSV_Weapon_Vanguard_Railgun : WRS_Weapon_ShockGun
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\railgun\vanguard\railgun_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\railgun\vanguard\railgun.rvmat"};
		displayName = "'Rhino' Heavy Experimental (Vanguard)";
		BaseWeapon = "SSV_Weapon_Vanguard_Railgun";
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class SSV_Weapon_Vanguard_Expeditionary_Railgun : SSV_Weapon_Vanguard_Railgun
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\railgun\expeditionary\railgun_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\railgun\expeditionary\railgun.rvmat"};
		displayName = "'Rhino' Heavy Experimental (Expeditionary)";
		BaseWeapon = "SSV_Weapon_Vanguard_Expeditionary_Railgun";
	};
	class SSV_Weapon_Android_Railgun : SSV_Weapon_Vanguard_Railgun
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\railgun\android\railgun_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\railgun\android\railgun.rvmat"};
		displayName = "'Rhino' Heavy Experimental (Android)";
		BaseWeapon = "SSV_Weapon_Android_Railgun";
	};