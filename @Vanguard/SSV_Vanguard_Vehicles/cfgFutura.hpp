    class O_MBT_02_railgun_F;

	class SSV_Vehicle_Vanguard_Futura_Tank_Base : O_MBT_02_railgun_F
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

	class SSV_Vehicle_Vanguard_Futura_Tank : SSV_Vehicle_Vanguard_Futura_Tank_Base
	{
		displayName = "Vanguard 'Elephant'";
		scope = 2;

		hiddenSelectionsTextures[]=
		{
			"SSV_Vanguard_Vehicles\textures\futura\camo3_co.paa",
			"SSV_Vanguard_Vehicles\textures\futura\camo2_co.paa",
			"SSV_Vanguard_Vehicles\textures\futura\camo1_co.paa"
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
					"SSV_Vanguard_Vehicles\textures\futura\camo3_co.paa",
					"SSV_Vanguard_Vehicles\textures\futura\camo2_co.paa",
					"SSV_Vanguard_Vehicles\textures\futura\camo1_co.paa"
				};
			};
		};

		textureList[]=
		{
			"Vanguard",
			1
		};
	};