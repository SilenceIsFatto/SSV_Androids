	class V_CarrierRigKBT_01_light_Olive_F;
    class V_CarrierRigKBT_01_heavy_Olive_F;
    class SSV_Vest_Android_Military : V_CarrierRigKBT_01_light_Olive_F
	{
		author = "SSV";
		displayName = "Android Military Vest";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SSV_Android\textures\military\military_vest_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android\textures\military\military_vest.rvmat"};
		picture = "\SSV_Common\SSV_logo_co.paa";
		icon = "\SSV_Common\SSV_logo_co.paa";
	};
    class SSV_Vest_Android_Military_Heavy : V_CarrierRigKBT_01_heavy_Olive_F
	{
		author = "SSV";
		displayName = "Android Military Vest (Heavy)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SSV_Android\textures\military\military_vest_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android\textures\military\military_vest.rvmat"};
		picture = "\SSV_Common\SSV_logo_co.paa";
		icon = "\SSV_Common\SSV_logo_co.paa";
	};
    class SSV_Vest_Android_Military_Ruined : SSV_Vest_Android_Military
	{
		displayName = "Replika Military Vest";
		hiddenSelectionsTextures[] = {"SSV_Android\textures\military\ruined\military_vest_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android\textures\military\ruined\military_vest.rvmat"};
	};
    class SSV_Vest_Android_Military_Heavy_Ruined : SSV_Vest_Android_Military_Heavy
	{
		displayName = "Replika Military Vest (Heavy)";
		hiddenSelectionsTextures[] = {"SSV_Android\textures\military\ruined\military_vest_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Android\textures\military\ruined\military_vest.rvmat"};
	};

	class EHS_Vest_Android_Military 				: SSV_Vest_Android_Military {};
	class EHS_Vest_Android_Military_Heavy 			: SSV_Vest_Android_Military_Heavy {};
	class EHS_Vest_Android_Military_Ruined 			: SSV_Vest_Android_Military_Ruined {};
	class EHS_Vest_Android_Military_Heavy_Ruined 	: SSV_Vest_Android_Military_Heavy_Ruined {};