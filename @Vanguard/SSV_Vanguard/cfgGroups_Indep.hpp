	class Indep
	{
		name="Independent";
		side=2;
		class ssv_vanguard
		{
			name="Vanguard";
			class Infantry
			{
				name="Infantry";
				// Vanguard (Normal)
				class ssv_vanguard_saboteurs
				{
					name="Vanguard Sabouteur Team";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					side=2;
					faction="SSV_Aux_Vanguard";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_Stealth";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_J13_Technician";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
				};
				class ssv_vanguard_qrf
				{
					name="Vanguard QRF Team";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					side=2;
					faction="SSV_Aux_Vanguard";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_QRF";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_QRF_Medic";
						rank="PRIVATE";
						position[]={-2,-3,0};
					};
					class Unit2
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_QRF";
						rank="PRIVATE";
						position[]={2,3,0};
					};
					class Unit3
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_QRF";
						rank="PRIVATE";
						position[]={-4,-6,0};
					};
					class Unit4
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_QRF";
						rank="PRIVATE";
						position[]={4,6,0};
					};
				};
				class ssv_vanguard_infantry
				{
					name="Vanguard Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					side=2;
					faction="SSV_Aux_Vanguard";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_J13";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_QRF_Medic";
						rank="PRIVATE";
						position[]={-2,-3,0};
					};
					class Unit2
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_Soldier";
						rank="PRIVATE";
						position[]={2,3,0};
					};
					class Unit3
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_Engineer";
						rank="PRIVATE";
						position[]={-4,-6,0};
					};
					class Unit4
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_Soldier";
						rank="PRIVATE";
						position[]={4,6,0};
					};
				};
				class ssv_vanguard_j13
				{
					name="Vanguard J13 Team";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					side=2;
					faction="SSV_Aux_Vanguard";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_J13";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_J13_Technician";
						rank="PRIVATE";
						position[]={-2,-3,0};
					};
					class Unit2
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_J13";
						rank="PRIVATE";
						position[]={2,3,0};
					};
					class Unit3
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_QRF_Medic";
						rank="PRIVATE";
						position[]={-4,-6,0};
					};
					class Unit4
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_J13";
						rank="PRIVATE";
						position[]={4,6,0};
					};
				};
			};
		};
    };