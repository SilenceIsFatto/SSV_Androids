	class SSV_Weapon_Vanguard_Sniper_Bolt : WRS_Weapon_Sniper_Bolt
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\sniper_bolt\vanguard\sniper_bolt_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\sniper_bolt\vanguard\sniper_bolt.rvmat"};
		displayName = "'Boomslang' Sniper (Vanguard)";
		BaseWeapon = "SSV_Weapon_Vanguard_Sniper_Bolt";
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class SSV_Weapon_Vanguard_Expeditionary_Sniper_Bolt : SSV_Weapon_Vanguard_Sniper_Bolt
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\sniper_bolt\expeditionary\sniper_bolt_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\sniper_bolt\expeditionary\sniper_bolt.rvmat"};
		displayName = "'Boomslang' Sniper (Expeditionary)";
		BaseWeapon = "SSV_Weapon_Vanguard_Expeditionary_Sniper_Bolt";
	};
	class SSV_Weapon_Android_Sniper_Bolt : SSV_Weapon_Vanguard_Sniper_Bolt
	{
		hiddenSelectionsTextures[] = {"SSV_Vanguard_Weapons\textures\sniper_bolt\android\sniper_bolt_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard_Weapons\textures\sniper_bolt\android\sniper_bolt.rvmat"};
		displayName = "'Boomslang' Sniper (Android)";
		BaseWeapon = "SSV_Weapon_Android_Sniper_Bolt";
	};