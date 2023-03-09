	class O_T_VTOL_02_infantry_F;
	class O_T_VTOL_02_vehicle_F;

	class SSV_Vehicle_Android_VTOL_Infantry_Base : O_T_VTOL_02_infantry_F
	{
		side=1;
		author="SSV";
		scope = 1;
	
		faction = "SSV_Aux_Androids";
		crew="SSV_Unit_Android_Pilot";
		typicalCargo[]=
		{
			"SSV_Unit_Android_Military"
		};
	};

	class SSV_Vehicle_Android_VTOL_VIV_Base : O_T_VTOL_02_vehicle_F
	{
		side=1;
		author="SSV";
		scope = 1;
	
		faction = "SSV_Aux_Androids";
		crew="SSV_Unit_Android_Pilot";
		typicalCargo[]=
		{
			"SSV_Unit_Android_Military"
		};
	};

	class SSV_Vehicle_Android_VTOL_Infantry : SSV_Vehicle_Android_VTOL_Infantry_Base
	{
		displayName = "Android Type 2 VTOL";
		scope = 2;
		scopeCurator = 2;

		hiddenSelectionsTextures[]=
		{
			"SSV_Android_Vehicles\textures\vtol\vtol_1_co.paa",
			"SSV_Android_Vehicles\textures\vtol\vtol_2_co.paa",
			"SSV_Android_Vehicles\textures\vtol\vtol_3_co.paa",
			"SSV_Android_Vehicles\textures\vtol\vtol_4_co.paa"
		};

		class TextureSources
		{
			class Android
			{
				displayName="Android";
				author="SSV";
				factions[]=
				{
					"SSV_Aux_Androids"
				};
				textures[]=
				{
					"SSV_Android_Vehicles\textures\vtol\vtol_1_co.paa",
					"SSV_Android_Vehicles\textures\vtol\vtol_2_co.paa",
					"SSV_Android_Vehicles\textures\vtol\vtol_3_co.paa",
					"SSV_Android_Vehicles\textures\vtol\vtol_4_co.paa"
				};
			};
		};

		textureList[]=
		{
			"Android",
			1
		};
	};

	class SSV_Vehicle_Android_VTOL_Infantry_Ruined : SSV_Vehicle_Android_VTOL_Infantry_Base
	{
		displayName = "Replika Type 2 VTOL";
		scope = 2;
		scopeCurator = 2;
		faction = "SSV_Aux_Replikas";
		side = 0;

		hiddenSelectionsTextures[]=
		{
			"SSV_Android_Vehicles\textures\vtol\ruined\vtol_1_co.paa",
			"SSV_Android_Vehicles\textures\vtol\ruined\vtol_2_co.paa",
			"SSV_Android_Vehicles\textures\vtol\ruined\vtol_3_co.paa",
			"SSV_Android_Vehicles\textures\vtol\ruined\vtol_4_co.paa"
		};

		class TextureSources
		{
			class Replika
			{
				displayName="Replika";
				author="SSV";
				factions[]=
				{
					"SSV_Aux_Replika"
				};
				textures[]=
				{
					"SSV_Android_Vehicles\textures\vtol\ruined\vtol_1_co.paa",
					"SSV_Android_Vehicles\textures\vtol\ruined\vtol_2_co.paa",
					"SSV_Android_Vehicles\textures\vtol\ruined\vtol_3_co.paa",
					"SSV_Android_Vehicles\textures\vtol\ruined\vtol_4_co.paa"
				};
			};
		};

		textureList[]=
		{
			"Replika",
			1
		};

		crew="SSV_Unit_Android_Pilot_Ruined";
		typicalCargo[]=
		{
			"SSV_Unit_Android_Military_Ruined"
		};
	};

	class SSV_Vehicle_Android_VTOL_VIV : SSV_Vehicle_Android_VTOL_VIV_Base
	{
		displayName = "Android Type 3 VTOL";
		scope = 2;
		scopeCurator = 2;

		hiddenSelectionsTextures[]=
		{
			"SSV_Android_Vehicles\textures\vtol\vtol_1_co.paa",
			"SSV_Android_Vehicles\textures\vtol\vtol_2_co.paa",
			"SSV_Android_Vehicles\textures\vtol\vtol_3_co.paa",
			"SSV_Android_Vehicles\textures\vtol\vtol_4_co.paa"
		};

		class TextureSources
		{
			class Android
			{
				displayName="Android";
				author="SSV";
				factions[]=
				{
					"SSV_Aux_Androids"
				};
				textures[]=
				{
					"SSV_Android_Vehicles\textures\vtol\vtol_1_co.paa",
					"SSV_Android_Vehicles\textures\vtol\vtol_2_co.paa",
					"SSV_Android_Vehicles\textures\vtol\vtol_3_co.paa",
					"SSV_Android_Vehicles\textures\vtol\vtol_4_co.paa"
				};
			};
		};

		textureList[]=
		{
			"Android",
			1
		};
	};

	class SSV_Vehicle_Android_VTOL_VIV_Ruined : SSV_Vehicle_Android_VTOL_VIV_Base
	{
		displayName = "Replika Type 3 VTOL";
		scope = 2;
		scopeCurator = 2;
		faction = "SSV_Aux_Replikas";
		side = 0;

		hiddenSelectionsTextures[]=
		{
			"SSV_Android_Vehicles\textures\vtol\ruined\vtol_1_co.paa",
			"SSV_Android_Vehicles\textures\vtol\ruined\vtol_2_co.paa",
			"SSV_Android_Vehicles\textures\vtol\ruined\vtol_3_co.paa",
			"SSV_Android_Vehicles\textures\vtol\ruined\vtol_4_co.paa"
		};

		class TextureSources
		{
			class Replika
			{
				displayName="Replika";
				author="SSV";
				factions[]=
				{
					"SSV_Aux_Replika"
				};
				textures[]=
				{
					"SSV_Android_Vehicles\textures\vtol\ruined\vtol_1_co.paa",
					"SSV_Android_Vehicles\textures\vtol\ruined\vtol_2_co.paa",
					"SSV_Android_Vehicles\textures\vtol\ruined\vtol_3_co.paa",
					"SSV_Android_Vehicles\textures\vtol\ruined\vtol_4_co.paa"
				};
			};
		};

		textureList[]=
		{
			"Replika",
			1
		};

		crew="SSV_Unit_Android_Pilot_Ruined";
		typicalCargo[]=
		{
			"SSV_Unit_Android_Military_Ruined"
		};
	};

	class EHS_Vehicle_Android_VTOL_Infantry : SSV_Vehicle_Android_VTOL_Infantry {};
	class EHS_Vehicle_Android_VTOL_Infantry_Ruined : SSV_Vehicle_Android_VTOL_Infantry_Ruined {};

	class EHS_Vehicle_Android_VTOL_VIV : SSV_Vehicle_Android_VTOL_VIV {};
	class EHS_Vehicle_Android_VTOL_VIV_Ruined : SSV_Vehicle_Android_VTOL_VIV_Ruined {};