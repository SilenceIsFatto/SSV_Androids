    class I_MRAP_03_F;

	class EHS_Vehicle_Android_Strider_Base : I_MRAP_03_F
	{
		side=0;
		author="EHS";
		scope = 1;
	
		faction = "SSV_Aux_Replikas";
		crew="SSV_Unit_Android_Pilot_Ruined";
		typicalCargo[]=
		{
			"SSV_Unit_Android_Military_Ruined"
		};
	};

	class EHS_Vehicle_Android_Strider_Ruined : EHS_Vehicle_Android_Strider_Base
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
				author="EHS";
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