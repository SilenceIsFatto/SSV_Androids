	class O_T_VTOL_02_infantry_F;
	class O_T_VTOL_02_vehicle_F;

	class SSV_Vehicle_Vanguard_VTOL_Infantry_Base : O_T_VTOL_02_infantry_F
	{
		side=2;
		author="SSV";
		scope = 1;
	
		faction = "SSV_Aux_Vanguard";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Redacted.jpg";
		crew=CREW;
		typicalCargo[]=
		{
			TYPICAL_CREW
		};
	};

	class SSV_Vehicle_Vanguard_VTOL_VIV_Base : O_T_VTOL_02_vehicle_F
	{
		side=2;
		author="SSV";
		scope = 1;
	
		faction = "SSV_Aux_Vanguard";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Redacted.jpg";
		crew=CREW;
		typicalCargo[]=
		{
			TYPICAL_CREW
		};
	};

	class SSV_Vehicle_Vanguard_VTOL_Infantry : SSV_Vehicle_Vanguard_VTOL_Infantry_Base
	{
		displayName = "Vanguard Type 2 VTOL";
		scope = 2;
		scopeCurator = 2;

		hiddenSelectionsTextures[]=
		{
			"SSV_Vanguard_Vehicles\textures\vtol\vtol_1_co.paa",
			"SSV_Vanguard_Vehicles\textures\vtol\vtol_2_co.paa",
			"SSV_Vanguard_Vehicles\textures\vtol\vtol_3_co.paa",
			"SSV_Vanguard_Vehicles\textures\vtol\vtol_4_co.paa"
		};

		class TextureSources
		{
			class Vanguard
			{
				displayName="Vanguard";
				author="SSV";
				factions[]=
				{
					"SSV_Aux_Vanguard"
				};
				textures[]=
				{
					"SSV_Vanguard_Vehicles\textures\vtol\vtol_1_co.paa",
					"SSV_Vanguard_Vehicles\textures\vtol\vtol_2_co.paa",
					"SSV_Vanguard_Vehicles\textures\vtol\vtol_3_co.paa",
					"SSV_Vanguard_Vehicles\textures\vtol\vtol_4_co.paa"
				};
			};
		};

		textureList[]=
		{
			"Vanguard",
			1
		};
	};

	class SSV_Vehicle_Vanguard_VTOL_VIV : SSV_Vehicle_Vanguard_VTOL_VIV_Base
	{
		displayName = "Vanguard Type 3 VTOL";
		scope = 2;
		scopeCurator = 2;

		hiddenSelectionsTextures[]=
		{
			"SSV_Vanguard_Vehicles\textures\vtol\vtol_1_co.paa",
			"SSV_Vanguard_Vehicles\textures\vtol\vtol_2_co.paa",
			"SSV_Vanguard_Vehicles\textures\vtol\vtol_3_co.paa",
			"SSV_Vanguard_Vehicles\textures\vtol\vtol_4_co.paa"
		};

		class TextureSources
		{
			class Vanguard
			{
				displayName="Vanguard";
				author="SSV";
				factions[]=
				{
					"SSV_Aux_Vanguard"
				};
				textures[]=
				{
					"SSV_Vanguard_Vehicles\textures\vtol\vtol_1_co.paa",
					"SSV_Vanguard_Vehicles\textures\vtol\vtol_2_co.paa",
					"SSV_Vanguard_Vehicles\textures\vtol\vtol_3_co.paa",
					"SSV_Vanguard_Vehicles\textures\vtol\vtol_4_co.paa"
				};
			};
		};

		textureList[]=
		{
			"Vanguard",
			1
		};
	};