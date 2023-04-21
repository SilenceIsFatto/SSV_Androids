	class SSV_Mask_Base: None
	{
		author = "SSV";
		scope = 1;
		weaponPoolAvailable = 0;
		picture="\SSV_Common\ssv_logo_co.paa";
		mass = 4;
		identityTypes[] = {};
	};
	
	class SSV_Mask_Android_Bewildered_Ruined: SSV_Mask_Base
	{
		displayname = "Replika Mask (Bewildered)";
		scope = 2;
		model = "\SSV_Android\android_bewildered";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ssv_android\textures\bewildered\bewildered_co.paa"};
		hiddenSelectionsMaterials[] = {"ssv_android\textures\bewildered\bewildered.rvmat"};
	};
	
	class SSV_Mask_Android_Bushi: SSV_Mask_Base
	{
		displayname = "Android Mask (Bushi)";
		scope = 2;
		model = "\SSV_Android\android_bushi";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ssv_android\textures\bushi\bushi_co.paa"};
		hiddenSelectionsMaterials[] = {"ssv_android\textures\bushi\bushi.rvmat"};
	};
	
	class SSV_Mask_Android_Bushi_Ruined: SSV_Mask_Android_Bushi
	{
		displayname = "Replika Mask (Bushi)";
		hiddenSelectionsTextures[] = {"ssv_android\textures\bushi\ruined\bushi_co.paa"};
		hiddenSelectionsMaterials[] = {"ssv_android\textures\bushi\ruined\bushi.rvmat"};
	};
	
	class SSV_Mask_Android_Shogun: SSV_Mask_Base
	{
		displayname = "Android Mask (Shogun)";
		scope = 2;
		model = "\SSV_Android\android_shogun";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ssv_android\textures\shogun\shogun_co.paa"};
		hiddenSelectionsMaterials[] = {"ssv_android\textures\shogun\shogun.rvmat"};
	};

	class SSV_Mask_Android_Shogun_Ruined: SSV_Mask_Android_Shogun
	{
		displayname = "Replika Mask (Shogun)";
		hiddenSelectionsTextures[] = {"ssv_android\textures\shogun\ruined\shogun_co.paa"};
		hiddenSelectionsMaterials[] = {"ssv_android\textures\shogun\ruined\shogun.rvmat"};
	};