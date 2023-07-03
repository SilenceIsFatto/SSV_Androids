    class I_MBT_03_cannon_F;

	class SSV_Vehicle_Vanguard_Tank_Base : I_MBT_03_cannon_F
	{
		side=2;
		author="SSV";
		scope = 1;
	
		faction = "SSV_Aux_Vanguard";
		editorPreview = "\SSV_Vanguard\previews\vehicles\SSV_Vehicle_Vanguard_Tank.jpg";
		crew="SSV_Unit_Vanguard_Worker";
		typicalCargo[]=
		{
			"SSV_Unit_Vanguard_J13"
		};
	};

	class SSV_Vehicle_Vanguard_Tank : SSV_Vehicle_Vanguard_Tank_Base
	{
		displayName = "Vanguard Tank";
		scope = 2;

		hiddenSelectionsTextures[]=
		{
			"SSV_Vanguard_Vehicles\textures\mbt\tank_1_co.paa",
			"SSV_Vanguard_Vehicles\textures\mbt\tank_2_co.paa",
			"SSV_Vanguard_Vehicles\textures\mbt\tank_3_co.paa"
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
                    "SSV_Vanguard_Vehicles\textures\mbt\tank_1_co.paa",
                    "SSV_Vanguard_Vehicles\textures\mbt\tank_2_co.paa",
                    "SSV_Vanguard_Vehicles\textures\mbt\tank_3_co.paa"
				};
			};
		};

		textureList[]=
		{
			"Vanguard",
			1
		};
	};