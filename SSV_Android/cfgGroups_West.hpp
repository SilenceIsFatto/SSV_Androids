	class West
	{
		name="$STR_A3_CfgGroups_West0";
		side=1;
		class SSV_Androids
		{
			name="Androids";
			class Infantry
			{
				name="Infantry";
				class SSV_Androids_Infantry
				{
					name="Android Police Patrol";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					side=1;
					faction="SSV_Aux_Androids";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=1;
						vehicle="SSV_Unit_Android_Military_SL";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="SSV_Unit_Android_Military";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="SSV_Unit_Android_Military";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="SSV_Unit_Android_Military_Medic";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="SSV_Unit_Android_Military_Medic";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
				};
				class SSV_Androids_Army
				{
					name="Android Soldier Patrol";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					side=1;
					faction="SSV_Aux_Androids";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=1;
						vehicle="SSV_Unit_Android_Army_SL";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="SSV_Unit_Android_Army";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="SSV_Unit_Android_Army";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="SSV_Unit_Android_Army_Medic";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="SSV_Unit_Android_Army_Medic";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
				};
			};
		};
    };