	// cfgWeapons
	class SSV_Uniform_Android_Pilot : Uniform_Base
	{
		scope = 2;
		author = "EHS";
		displayName = "Android Pilot Uniform";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		picture = "\SSV_Common\SSV_logo_co.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass = "SSV_Unit_Android_Pilot";
			uniformModel = "-";
			containerClass = "Supply20";
			mass = 20;
			armor = 0.1;
		};
	};
	class SSV_Uniform_Android_Military : SSV_Uniform_Android_Pilot
	{
		displayName = "Android Police Uniform";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		
		class ItemInfo : UniformItem
		{
			uniformClass = "SSV_Unit_Android_Military";
			uniformModel = "-";
			containerClass = "Supply20";
			mass = 20;
			armor = 0.3;
		};
	};
	class SSV_Uniform_Android_Military_Ruined : SSV_Uniform_Android_Military
	{
		displayName = "Replika Police Uniform";
		
		class ItemInfo : UniformItem
		{
			uniformClass = "SSV_Unit_Android_Military_Ruined";
			uniformModel = "-";
			containerClass = "Supply20";
			mass = 20;
			armor = 0.3;
		};
	};