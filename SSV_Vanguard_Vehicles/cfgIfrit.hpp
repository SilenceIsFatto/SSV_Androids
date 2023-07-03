    class O_MRAP_02_F;

	class SSV_Vehicle_Vanguard_Ifrit_Base : O_MRAP_02_F
	{
		side=2;
		author="SSV";
		scope = 1;
	
		faction = "SSV_Aux_Vanguard";
		editorPreview = "\SSV_Vanguard\previews\vehicles\SSV_Vehicle_Vanguard_Ifrit.jpg";
		crew="SSV_Unit_Vanguard_Worker";
		typicalCargo[]=
		{
			"SSV_Unit_Vanguard_J13"
		};
	};

	class SSV_Vehicle_Vanguard_Ifrit : SSV_Vehicle_Vanguard_Ifrit_Base
	{
		displayName = "Vanguard MRAP";
		scope = 2;

		hiddenSelectionsTextures[]=
		{
			"SSV_Vanguard_Vehicles\textures\ifrit\ifrit_1_co.paa",
			"SSV_Vanguard_Vehicles\textures\ifrit\ifrit_2_co.paa"
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
                    "SSV_Vanguard_Vehicles\textures\ifrit\ifrit_1_co.paa",
                    "SSV_Vanguard_Vehicles\textures\ifrit\ifrit_2_co.paa"
				};
			};
		};

		textureList[]=
		{
			"Vanguard",
			1
		};
	};