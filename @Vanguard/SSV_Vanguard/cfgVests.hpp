	// JEFF stuff
	
	class JMSJEFF_MArinerSMG_armor;
	class JMSJEFF_MArinerAs_armor;
	class JMSJEFF_FarmorAdvisor_armor_black;
	class JMSJEFF_FarmorM_armor_black;
	class JMSJEFF_FarmorSL_armor_black;
	class JMSJEFF_FarmorTroop_armor_black;

	class JMSJEFF_ChestVestS_armor_black;
	class JMSJEFF_ChestVestMark_armor_black;
	class JMSJEFF_ChestVestSL_armor_black;
    class SSV_Vest_Vanguard_SMG : JMSJEFF_MArinerSMG_armor
	{
		author = "SSV";
		displayName = "Vanguard Heavy Assault Vest";
		hiddenSelectionsTextures[] = {"SSV_Vanguard\textures\j13\vest_smg_co.paa"};
		// hiddenSelectionsMaterials[] = {"SSV_Vanguard\textures\j13\vest_smg.rvmat"};
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";
		icon = "\SSV_Common\SSV_logo_co.paa";
	};
    class SSV_Vest_Vanguard_Stealth : JMSJEFF_FarmorAdvisor_armor_black
	{
		author = "SSV";
		displayName = "Vanguard Light Stealth Vest";
		hiddenSelectionsTextures[] = {"SSV_Vanguard\textures\j13\vest_advisor_1_co.paa", "SSV_Vanguard\textures\j13\vest_advisor_2_co.paa"};
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";
		icon = "\SSV_Common\SSV_logo_co.paa";
	};
    class SSV_Vest_Vanguard_Marksman : JMSJEFF_FarmorM_armor_black
	{
		author = "SSV";
		displayName = "Vanguard Light Marksman Vest";
		hiddenSelectionsTextures[] = {"SSV_Vanguard\textures\j13\vest_advisor_1_co.paa", "SSV_Vanguard\textures\j13\vest_advisor_2_co.paa"};
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";
		icon = "\SSV_Common\SSV_logo_co.paa";
	};
    class SSV_Vest_Vanguard_SL : JMSJEFF_FarmorSL_armor_black
	{
		author = "SSV";
		displayName = "Vanguard Light SL Vest";
		hiddenSelectionsTextures[] = {"SSV_Vanguard\textures\j13\vest_advisor_1_co.paa", "SSV_Vanguard\textures\j13\vest_advisor_2_co.paa"};
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";
		icon = "\SSV_Common\SSV_logo_co.paa";
	};
    class SSV_Vest_Vanguard_QRF : JMSJEFF_ChestVestS_armor_black
	{
		author = "SSV";
		displayName = "Vanguard Medium QRF Vest";
		hiddenSelectionsTextures[] = {"SSV_Vanguard\textures\j13\vest_troop_1_co.paa", "SSV_Vanguard\textures\j13\vest_troop_2_co.paa"};
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";
		icon = "\SSV_Common\SSV_logo_co.paa";
	};
    class SSV_Vest_Vanguard_QRF_Marksman : JMSJEFF_ChestVestMark_armor_black
	{
		author = "SSV";
		displayName = "Vanguard Medium Marksman Vest";
		hiddenSelectionsTextures[] = {"SSV_Vanguard\textures\j13\vest_troop_1_co.paa", "SSV_Vanguard\textures\j13\vest_troop_2_co.paa"};
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";
		icon = "\SSV_Common\SSV_logo_co.paa";
	};
    class SSV_Vest_Vanguard_J13_SL : JMSJEFF_ChestVestSL_armor_black
	{
		author = "SSV";
		displayName = "Vanguard Medium J13 Vest";
		hiddenSelectionsTextures[] = {"SSV_Vanguard\textures\j13\vest_troop_1_co.paa", "SSV_Vanguard\textures\j13\vest_troop_2_co.paa"};
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";
		icon = "\SSV_Common\SSV_logo_co.paa";
	};
    // class SSV_Vest_Vanguard_Assault : JMSJEFF_MArinerAs_armor
	// {
	// 	author = "SSV";
	// 	displayName = "Vanguard Assault Vest";
	// 	hiddenSelectionsTextures[] = {"SSV_Vanguard\textures\j13\vest_1_co.paa", "SSV_Vanguard\textures\j13\vest_2_co.paa"};
	// 	// hiddenSelectionsMaterials[] = {"SSV_Vanguard\textures\j13\vest_1.rvmat", "SSV_Vanguard\textures\j13\vest_2.rvmat"};
	// 	picture = "\SSV_Common\SSV_logo_co.paa";
	// 	icon = "\SSV_Common\SSV_logo_co.paa";
	// };
	// has broken normals or smth, idk what happened