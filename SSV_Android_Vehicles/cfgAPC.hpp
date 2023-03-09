    class O_APC_Wheeled_02_rcws_v2_F;
    class B_APC_Wheeled_01_cannon_F;

	class SSV_Vehicle_Android_APC_Base : B_APC_Wheeled_01_cannon_F
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

	class SSV_Vehicle_Android_APC_Ruined_Base : O_APC_Wheeled_02_rcws_v2_F
	{
		side=0;
		author="SSV";
		scope = 1;
	
		faction = "SSV_Aux_Replikas";
		crew="SSV_Unit_Android_Pilot_Ruined";
		typicalCargo[]=
		{
			"SSV_Unit_Android_Military_Ruined"
		};
	};

	class SSV_Vehicle_Android_APC : SSV_Vehicle_Android_APC_Base
	{
		displayName = "Android APC";
		scope = 2;

		hiddenSelectionsTextures[]=
		{
			"SSV_Android_Vehicles\textures\apc_1\apc_1_co.paa",
			"SSV_Android_Vehicles\textures\apc_1\apc_2_co.paa",
			"SSV_Android_Vehicles\textures\apc_1\apc_3_co.paa"
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
                    "SSV_Android_Vehicles\textures\apc_1\apc_1_co.paa",
                    "SSV_Android_Vehicles\textures\apc_1\apc_2_co.paa",
                    "SSV_Android_Vehicles\textures\apc_1\apc_3_co.paa"
				};
			};
		};

		textureList[]=
		{
			"Android",
			1
		};
	};

	class SSV_Vehicle_Android_APC_Ruined : SSV_Vehicle_Android_APC_Ruined_Base
	{
		displayName = "Replika APC";
		scope = 2;

		hiddenSelectionsTextures[]=
		{
			"SSV_Android_Vehicles\textures\apc_2\apc_1_co.paa",
			"SSV_Android_Vehicles\textures\apc_2\apc_2_co.paa",
			"SSV_Android_Vehicles\textures\apc_2\apc_3_co.paa"
		};

		class TextureSources
		{
			class Replika
			{
				displayName="Replika";
				author="SSV";
				factions[]=
				{
					"SSV_Aux_Replikas"
				};
				textures[]=
				{
                    "SSV_Android_Vehicles\textures\apc_2\apc_1_co.paa",
                    "SSV_Android_Vehicles\textures\apc_2\apc_2_co.paa",
                    "SSV_Android_Vehicles\textures\apc_2\apc_3_co.paa"
				};
			};
		};

		textureList[]=
		{
			"Replika",
			1
		};
	};

	class EHS_Vehicle_Android_APC 			: SSV_Vehicle_Android_APC {};
	class EHS_Vehicle_Android_APC_Ruined 	: SSV_Vehicle_Android_APC_Ruined {};