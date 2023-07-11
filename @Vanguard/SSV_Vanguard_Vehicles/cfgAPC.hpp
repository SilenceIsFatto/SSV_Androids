    class O_APC_Wheeled_02_rcws_v2_F;
    class B_APC_Wheeled_01_cannon_F;

	class SSV_Vehicle_Vanguard_APC_Base : B_APC_Wheeled_01_cannon_F
	{
		side=2;
		author="SSV";
		scope = 1;
	
		faction = "SSV_Aux_Vanguard";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Redacted.jpg";
		crew="SSV_Unit_Vanguard_Worker";
		typicalCargo[]=
		{
			"SSV_Unit_Vanguard_J13"
		};
	};

	class SSV_Vehicle_Vanguard_APC : SSV_Vehicle_Vanguard_APC_Base
	{
		displayName = "Vanguard APC";
		scope = 2;

		hiddenSelectionsTextures[]=
		{
			"SSV_Vanguard_Vehicles\textures\apc_1\apc_1_co.paa",
			"SSV_Vanguard_Vehicles\textures\apc_1\apc_2_co.paa",
			"SSV_Vanguard_Vehicles\textures\apc_1\apc_3_co.paa"
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
                    "SSV_Vanguard_Vehicles\textures\apc_1\apc_1_co.paa",
                    "SSV_Vanguard_Vehicles\textures\apc_1\apc_2_co.paa",
                    "SSV_Vanguard_Vehicles\textures\apc_1\apc_3_co.paa"
				};
			};
		};

		textureList[]=
		{
			"Vanguard",
			1
		};
	};