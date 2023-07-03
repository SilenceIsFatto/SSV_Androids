	class SSV_Mask_Base;
	
	class SSV_Mask_Vanguard_Bushi: SSV_Mask_Base
	{
		displayname = "Vanguard Mask (Bushi)";
		scope = 2;
		model = "\SSV_Android\android_bushi";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ssv_vanguard\textures\bushi\bushi_co.paa"};
		hiddenSelectionsMaterials[] = {"ssv_vanguard\textures\bushi\bushi.rvmat"};
	};
	
	class SSV_Mask_Vanguard_Shogun: SSV_Mask_Base
	{
		displayname = "Vanguard Mask (Shogun)";
		scope = 2;
		model = "\SSV_Vanguard\shogun"; // has a model change, that's why we have 2 versions. And no, don't suggest adding a selection just for the part that got removed... why bother drawing the same model + transparency?
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ssv_vanguard\textures\shogun\mask_co.paa"};
		hiddenSelectionsMaterials[] = {"ssv_vanguard\textures\shogun\mask.rvmat"};
	};