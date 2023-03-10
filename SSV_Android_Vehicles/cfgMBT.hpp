    class I_MBT_03_cannon_F;

	class EHS_Vehicle_Android_Tank_Base : I_MBT_03_cannon_F
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

	class EHS_Vehicle_Android_Tank : EHS_Vehicle_Android_Tank_Base
	{
		displayName = "Android Tank";
		scope = 2;

		hiddenSelectionsTextures[]=
		{
			"SSV_Android_Vehicles\textures\mbt\tank_1_co.paa",
			"SSV_Android_Vehicles\textures\mbt\tank_2_co.paa",
			"SSV_Android_Vehicles\textures\mbt\tank_3_co.paa"
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
                    "SSV_Android_Vehicles\textures\mbt\tank_1_co.paa",
                    "SSV_Android_Vehicles\textures\mbt\tank_2_co.paa",
                    "SSV_Android_Vehicles\textures\mbt\tank_3_co.paa"
				};
			};
		};

		textureList[]=
		{
			"Android",
			1
		};
	};

	class EHS_Vehicle_Android_Tank_Ruined : EHS_Vehicle_Android_Tank_Base
	{
		displayName = "Replika Tank";
		scope = 2;
        side = 0;

		hiddenSelectionsTextures[]=
		{
			"SSV_Android_Vehicles\textures\mbt\ruined\tank_1_co.paa",
			"SSV_Android_Vehicles\textures\mbt\ruined\tank_2_co.paa",
			"SSV_Android_Vehicles\textures\mbt\ruined\tank_3_co.paa"
		};

		class TextureSources
		{
			class Replika
			{
				displayName="Replika";
				author="EHS";
				factions[]=
				{
					"SSV_Aux_Replikas"
				};
				textures[]=
				{
                    "SSV_Android_Vehicles\textures\mbt\ruined\tank_1_co.paa",
                    "SSV_Android_Vehicles\textures\mbt\ruined\tank_2_co.paa",
                    "SSV_Android_Vehicles\textures\mbt\ruined\tank_3_co.paa"
				};
			};
		};

		textureList[]=
		{
			"Replika",
			1
		};

		faction = "SSV_Aux_Replikas";
		crew="SSV_Unit_Android_Pilot_Ruined";
		typicalCargo[]=
		{
			"SSV_Unit_Android_Military_Ruined"
		};
	};