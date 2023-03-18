    class I_MBT_03_cannon_F;

	class SSV_Vehicle_Android_Tank_Base : I_MBT_03_cannon_F
	{
		side=1;
		author="SSV";
		scope = 1;
	
		faction = "SSV_Aux_Androids";
		editorPreview = "\SSV_Android\previews\vehicles\SSV_Vehicle_Android_Tank.jpg";
		crew="SSV_Unit_Android_Pilot";
		typicalCargo[]=
		{
			"SSV_Unit_Android_Military"
		};
	};

	class SSV_Vehicle_Android_Tank : SSV_Vehicle_Android_Tank_Base
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
				author="SSV";
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

	class SSV_Vehicle_Android_Tank_Ruined : SSV_Vehicle_Android_Tank_Base
	{
		displayName = "Replika Tank";
		editorPreview = "\SSV_Android\previews\vehicles\SSV_Vehicle_Android_Tank_Ruined.jpg";
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
				author="SSV";
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

	class EHS_Vehicle_Android_Tank : SSV_Vehicle_Android_Tank {scope=1; scopeCurator=1};
	class EHS_Vehicle_Android_Tank_Ruined : SSV_Vehicle_Android_Tank_Ruined {scope=1; scopeCurator=1};