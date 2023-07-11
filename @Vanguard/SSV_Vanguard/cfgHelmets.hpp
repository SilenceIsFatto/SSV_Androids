	class SSV_Helmet_Vanguard_Worker : SSV_Helmet_Base
	{
		displayName = "Vanguard Helmet (Worker)";
		model = "SSV_Vanguard\worker.p3d";
		scope = 2;
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard\textures\worker\worker_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard\textures\worker\worker.rvmat"};

		class ItemInfo : HeadgearItem
		{
			mass = 50;
			hiddenSelections[] = {"camo"};
			uniformModel = "SSV_Vanguard\worker.p3d";
			modelSides[] = {3, 2, 1, 0};
		};
	};

	class SSV_Helmet_Vanguard_Miner : SSV_Helmet_Base
	{
		displayName = "Vanguard Helmet (Miner)";
		model = "SSV_Android\android_miner.p3d";
		scope = 2;
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";

		hiddenSelections[] = {"camo", "visor"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard\textures\miner\miner_co.paa", "SSV_Vanguard\textures\miner\miner_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard\textures\miner\miner.rvmat", "SSV_Vanguard\textures\miner\miner_emissive.rvmat"};

		class ItemInfo : HeadgearItem
		{
			mass = 50;
			hiddenSelections[] = {"camo", "visor"};
			uniformModel = "SSV_Android\android_miner.p3d";
			modelSides[] = {3, 2, 1, 0};
		};
	};

	class SSV_Helmet_Vanguard_QRF : SSV_Helmet_Base
	{
		displayName = "Vanguard Helmet (QRF)";
		model = "SSV_Vanguard\qrf.p3d";
		scope = 2;
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";

		hiddenSelections[] = {"qrf_visor", "qrf_helmet"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard\textures\qrf\qrf_visor_co.paa", "SSV_Vanguard\textures\qrf\qrf_helmet_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard\textures\qrf\qrf_visor.rvmat", "SSV_Vanguard\textures\qrf\qrf_helmet.rvmat"};

		class ItemInfo : HeadgearItem
		{
			mass = 50;
			hiddenSelections[] = {"qrf_visor", "qrf_helmet"};
			uniformModel = "SSV_Vanguard\qrf.p3d";
			modelSides[] = {3, 2, 1, 0};
		};
	};

	class SSV_Helmet_Vanguard_Drone : SSV_Helmet_Base
	{
		displayName = "Vanguard Helmet (Drone)";
		model = "SSV_Vanguard\drone.p3d";
		scope = 2;
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";

		hiddenSelections[] = {"drone", "drone_glass"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard\textures\drone\drone_ca.paa", "SSV_Vanguard\textures\drone\drone_glass_ca.paa"};
		//"SSV_Vanguard\textures\drone\drone_glass_ca.paa"
		hiddenSelectionsMaterials[] = {"SSV_Vanguard\textures\drone\drone.rvmat", "SSV_Vanguard\textures\drone\drone_glass.rvmat"};
		//"SSV_Vanguard\textures\drone\drone_glass.rvmat"

		class ItemInfo : HeadgearItem
		{
			mass = 50;
			hiddenSelections[] = {"drone", "drone_glass"};
			uniformModel = "SSV_Vanguard\drone.p3d";
			modelSides[] = {3, 2, 1, 0};
		};
	};

	class SSV_Helmet_Vanguard_Soldier : SSV_Helmet_Base
	{
		displayName = "Vanguard Helmet (Soldier)";
		model = "SSV_Vanguard\soldier.p3d";
		scope = 2;
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";

		hiddenSelections[] = {"soldier_visor", "soldier_acc", "soldier_helmet"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard\textures\soldier\soldier_visor_co.paa", "SSV_Vanguard\textures\soldier\soldier_acc_co.paa", "SSV_Vanguard\textures\soldier\soldier_helmet_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard\textures\soldier\soldier_visor.rvmat", "SSV_Vanguard\textures\soldier\soldier_acc.rvmat", "SSV_Vanguard\textures\soldier\soldier_helmet.rvmat"};

		class ItemInfo : HeadgearItem
		{
			mass = 50;
			hiddenSelections[] = {"soldier_visor", "soldier_acc", "soldier_helmet"};
			uniformModel = "SSV_Vanguard\soldier.p3d";
			modelSides[] = {3, 2, 1, 0};
		};
	};

	class SSV_Helmet_Vanguard_Stealth : SSV_Helmet_Base
	{
		displayName = "Vanguard Helmet (Stealth)";
		model = "SSV_Vanguard\stealth.p3d";
		scope = 2;
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";

		hiddenSelections[] = {"stealth_visor", "stealth_helmet"};
		hiddenSelectionsTextures[] = {"SSV_Vanguard\textures\stealth\stealth_visor_co.paa", "SSV_Vanguard\textures\stealth\stealth_helmet_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard\textures\stealth\stealth_visor.rvmat", "SSV_Vanguard\textures\stealth\stealth_helmet.rvmat"};

		class ItemInfo : HeadgearItem
		{
			mass = 50;
			hiddenSelections[] = {"stealth_visor", "stealth_helmet"};
			uniformModel = "SSV_Vanguard\stealth.p3d";
			modelSides[] = {3, 2, 1, 0};
		};
	};
	
	// JEFF stuff
	class JMSJEFF_Jeff_R2_helmet;
	class JMSJEFF_Jeff_R4_helmet;
	class JMSJEFF_Jeff_spec_helmet;
	
	class SSV_Helmet_Vanguard_R2 : JMSJEFF_Jeff_R2_helmet
	{
		displayName = "Vanguard Helmet (J13 2)";
		author = "SSV";
		scope = 2;
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";

		hiddenSelectionsTextures[] = {"SSV_Vanguard\textures\j13\r2_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard\textures\j13\r2.rvmat"};
	};

	class SSV_Helmet_Vanguard_R4 : JMSJEFF_Jeff_R4_helmet
	{
		displayName = "Vanguard Helmet (J13 4)";
		author = "SSV";
		scope = 2;
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";

		hiddenSelectionsTextures[] = {"SSV_Vanguard\textures\j13\r4_co.paa"};
		hiddenSelectionsMaterials[] = {"SSV_Vanguard\textures\j13\r4.rvmat"};
	};

	class SSV_Helmet_Vanguard_QRF_L : JMSJEFF_Jeff_spec_helmet
	{
		displayName = "Vanguard Helmet (J13 Technician)";
		author = "SSV";
		scope = 2;
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";

		hiddenSelectionsTextures[] = {"SSV_Vanguard\textures\j13\helmet_1_co.paa", "SSV_Vanguard\textures\j13\helmet_2_co.paa"};
		// hiddenSelectionsMaterials[] = {"SSV_Vanguard\textures\j13\r4.rvmat"};
	};