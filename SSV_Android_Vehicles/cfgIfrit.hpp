    class O_MRAP_02_F;

	class EHS_Vehicle_Android_Ifrit_Base : O_MRAP_02_F
	{
		side=1;
		author="EHS";
		scope = 1;
	
		faction = "SSV_Aux_Androids";
		crew="SSV_Unit_Android_Pilot";
		typicalCargo[]=
		{
			"SSV_Unit_Android_Military"
		};
	};

	class EHS_Vehicle_Android_Ifrit : EHS_Vehicle_Android_Ifrit_Base
	{
		displayName = "Android MRAP";
		scope = 2;

		hiddenSelectionsTextures[]=
		{
			"SSV_Android_Vehicles\textures\ifrit\ifrit_1_co.paa",
			"SSV_Android_Vehicles\textures\ifrit\ifrit_2_co.paa"
		};

		class TextureSources
		{
			class Android
			{
				displayName="Android";
				author="EHS";
				factions[]=
				{
					"SSV_Aux_Androids"
				};
				textures[]=
				{
                    "SSV_Android_Vehicles\textures\ifrit\ifrit_1_co.paa",
                    "SSV_Android_Vehicles\textures\ifrit\ifrit_2_co.paa"
				};
			};
		};

		textureList[]=
		{
			"Android",
			1
		};
	};