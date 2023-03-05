	class East
	{
		name="$STR_A3_CfgGroups_East0";
		side=0;
		class SSV_Replikas
		{
			name="Replikas";
			class Infantry
			{
				name="Infantry";
				class SSV_Replikas_Infantry
				{
					name="Replika Patrol";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					side=0;
					faction="SSV_Aux_Replikas";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=1;
						vehicle="SSV_Unit_Android_Military_SL_Ruined";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="SSV_Unit_Android_Military_Ruined";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="SSV_Unit_Android_Military_Ruined";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="SSV_Unit_Android_Military_Medic_Ruined";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="SSV_Unit_Android_Military_Medic_Ruined";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
				};
			};
		};
    };