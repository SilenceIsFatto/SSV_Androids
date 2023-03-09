    class I_MRAP_03_F;

	class SSV_Vehicle_Android_Strider_Base : I_MRAP_03_F
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

	class SSV_Vehicle_Android_Strider_Ruined : SSV_Vehicle_Android_Strider_Base
	{
		displayName = "Replika MRAP";
		scope = 2;

		hiddenSelectionsTextures[]=
		{
			"SSV_Android_Vehicles\textures\strider\strider_1_co.paa"
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
                    "SSV_Android_Vehicles\textures\strider\strider_1_co.paa"
				};
			};
		};

		textureList[]=
		{
			"Replika",
			1
		};
	};

	class EHS_Vehicle_Android_Strider_Ruined : SSV_Vehicle_Android_Strider_Ruined {};