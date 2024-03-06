	class SSV_Mask_Base;
	
	class SSV_Mask_Vanguard_Bushi: SSV_Mask_Base
	{
		displayname = "Vanguard Mask (Bushi)";
		scope = 2;
		model = "\SSV_Android\android_bushi";
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ssv_vanguard\textures\bushi\bushi_co.paa"};
		hiddenSelectionsMaterials[] = {"ssv_vanguard\textures\bushi\bushi.rvmat"};
	};
	
	class SSV_Mask_Vanguard_Bushi_Expeditionary: SSV_Mask_Vanguard_Bushi
	{
		displayname = "Expeditionary Mask (Bushi)";
		hiddenSelectionsTextures[] = {"ssv_vanguard\textures\bushi\helldiver\bushi_co.paa"};
		hiddenSelectionsMaterials[] = {"ssv_vanguard\textures\bushi\helldiver\bushi.rvmat"};
	};
	
	class SSV_Mask_Vanguard_Shogun: SSV_Mask_Base
	{
		displayname = "Vanguard Mask (Shogun)";
		scope = 2;
		model = "\SSV_Vanguard\shogun";
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ssv_vanguard\textures\shogun\mask_co.paa"};
		hiddenSelectionsMaterials[] = {"ssv_vanguard\textures\shogun\mask.rvmat"};
	};

	class SSV_Mask_Vanguard_Shogun_Expeditionary: SSV_Mask_Vanguard_Shogun
	{
		displayname = "Expeditionary Mask (Shogun)";
		hiddenSelectionsTextures[] = {"ssv_vanguard\textures\shogun\helldiver\mask_co.paa"};
		hiddenSelectionsMaterials[] = {"ssv_vanguard\textures\shogun\helldiver\mask.rvmat"};
	};