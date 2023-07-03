	// cfgWeapons
	class SSV_Uniform_Vanguard_J13 : Uniform_Base
	{
		scope = 2;
		author = "SSV";
		displayName = "Vanguard J13 Uniform";
		// model = "\A3\Characters_F\Common\coveralls.p3d";
		picture = "\SSV_Common\SSV_logo_co.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass = "SSV_Unit_Vanguard_J13";
			uniformModel = "-";
			containerClass = "Supply30";
			mass = 25;
			armor = 0.3;
		};
	};
	class SSV_Uniform_Vanguard_Stealth : Uniform_Base
	{
		scope = 2;
		author = "SSV";
		displayName = "Vanguard Stealth Uniform";
		// model = "\A3\Characters_F\Common\coveralls.p3d";
		picture = "\SSV_Common\SSV_logo_co.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass = "SSV_Unit_Vanguard_Stealth";
			uniformModel = "-";
			containerClass = "Supply30";
			mass = 25;
			armor = 0.3;
		};
	};
	class SSV_Uniform_Vanguard_QRF : Uniform_Base
	{
		scope = 2;
		author = "SSV";
		displayName = "Vanguard QRF Uniform";
		// model = "\A3\Characters_F\Common\coveralls.p3d";
		picture = "\SSV_Common\SSV_logo_co.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass = "SSV_Unit_Vanguard_QRF";
			uniformModel = "-";
			containerClass = "Supply20";
			mass = 20;
			armor = 0.3;
		};
	};
	class SSV_Uniform_Vanguard_Worker : Uniform_Base
	{
		scope = 2;
		author = "SSV";
		displayName = "Vanguard Worker Uniform";
		// model = "\A3\Characters_F\Common\coveralls.p3d";
		picture = "\SSV_Common\SSV_logo_co.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass = "SSV_Unit_Vanguard_Worker";
			uniformModel = "-";
			containerClass = "Supply20";
			mass = 20;
			armor = 0.1;
		};
	};
	class SSV_Uniform_Vanguard_Soldier : SSV_Uniform_Vanguard_Worker
	{
		displayName = "Vanguard Soldier Uniform";
		
		class ItemInfo : UniformItem
		{
			uniformClass = "SSV_Unit_Vanguard_Soldier";
			uniformModel = "-";
			containerClass = "Supply20";
			mass = 20;
			armor = 0.3;
		};
	};