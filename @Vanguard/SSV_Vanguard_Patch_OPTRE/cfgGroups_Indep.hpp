	class Indep
	{
		name="Independent";
		side=2;
		class ssv_vanguard_specops
		{
			name="Vanguard Special Ops";
			class Infantry
			{
				name="Infantry";
				// Vanguard (Spec Ops)
				class ssv_vanguard_spec_recon
				{
					name="Vanguard Recon Team";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					side=2;
					faction="SSV_Aux_Vanguard_SpecOps";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_Sniper_Expeditionary";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_Stealth_Expeditionary";
						rank="PRIVATE";
						position[]={2,3,0};
					};
					class Unit2
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_Stealth_Expeditionary";
						rank="PRIVATE";
						position[]={-2,-3,0};
					};
				};
				class ssv_vanguard_spec_assault
				{
					name="Vanguard Breach Team";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					side=2;
					faction="SSV_Aux_Vanguard_SpecOps";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_Breacher_Expeditionary";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_J13_Expeditionary";
						rank="PRIVATE";
						position[]={2,3,0};
					};
					class Unit2
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_Engineer_Expeditionary";
						rank="PRIVATE";
						position[]={-2,-3,0};
					};
					class Unit3
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_J13_Expeditionary";
						rank="PRIVATE";
						position[]={4,6,0};
					};
					class Unit4
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_Medic_Expeditionary";
						rank="PRIVATE";
						position[]={-4,-6,0};
					};
				};
				class ssv_vanguard_spec_qrf
				{
					name="Vanguard Expeditionary Team";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					side=2;
					faction="SSV_Aux_Vanguard_SpecOps";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_QRF_Expeditionary";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_QRF_Expeditionary";
						rank="PRIVATE";
						position[]={2,3,0};
					};
					class Unit2
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_QRF_Expeditionary";
						rank="PRIVATE";
						position[]={-2,-3,0};
					};
					class Unit3
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_Stealth_Expeditionary";
						rank="PRIVATE";
						position[]={4,6,0};
					};
					class Unit4
					{
						side=2;
						vehicle="SSV_Unit_Vanguard_Medic_Expeditionary";
						rank="PRIVATE";
						position[]={-4,-6,0};
					};
				};
			};
		};
    };