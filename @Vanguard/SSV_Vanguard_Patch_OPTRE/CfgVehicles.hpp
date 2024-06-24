    class B_T_VTOL_01_infantry_F;

    class ssv_vanguard_vehicle_blackfish_blue : B_T_VTOL_01_infantry_F
    {
        displayName = "Heavy Troop Transport";
        hiddenSelectionsTextures[] = {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa",""};
        faction = "SSV_Aux_Vanguard";
        side=2;
        crew = "SSV_Unit_Vanguard_Drone";
        FACTION_PREVIEW;
    };

    class OPTRE_M875_SPH_CMA;

    class ssv_vanguard_vehicle_m875_black : OPTRE_M875_SPH_CMA
    {
        displayName = "M875 Self Propelled Howitzer";
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = CREW;
        FACTION_PREVIEW;
        class AnimationSources
        {
            class muzzle_rot_cannon
            {
                source = "ammorandom";
                weapon = "OPTRE_mortar_155mm";
            };
            class recoil_source
            {
                source = "reload";
                weapon = "OPTRE_mortar_155mm";
            };
            class showCamonetGun
            {
                animPeriod = 0.001;
                author = "Article 2 Studios";
                displayName = "Attach Gun Camo Net";
                initPhase = 1;
                mass = -50;
                source = "user";
            };
            class showCamonetHull
            {
                animPeriod = 0.001;
                author = "Article 2 Studios";
                displayName = "Attach Hull Camo Net";
                initPhase = 1;
                mass = -50;
                source = "user";
            };
            class showCamonetTurret
            {
                animPeriod = 0.001;
                author = "Article 2 Studios";
                displayName = "Attach Turret Camo Net";
                initPhase = 1;
                mass = -50;
                source = "user";
            };
            class showGear
            {
                animPeriod = 0.001;
                author = "Article 2 Studios";
                displayName = "Attach Gear";
                initPhase = 1;
                mass = -50;
                source = "user";
            };
            class showTurretGear
            {
                animPeriod = 0.001;
                author = "Article 2 Studios";
                displayName = "Attach Turret Gear";
                initPhase = 1;
                mass = -50;
                source = "user";
            };
        };
    };

    class OPTRE_M494_CMA;

    class ssv_vanguard_vehicle_m494_black : OPTRE_M494_CMA
    {
        displayName = "M494 Oryx IFV";
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = CREW;
        FACTION_PREVIEW;
		class AnimationSources
		{
			class muzzle_hide
			{
				source="reload";
				weapon="OPTRE_M503_30mm_Autocannon";
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="OPTRE_M670_ATGM_Launcher";
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source="reloadMagazine";
			};
			class CargoDoorAnim
			{
				source="user";
				animPeriod=5;
				initPhase=0;
				sound="ServoRampSound_2";
			};
			class HitERA_Front_src
			{
				source="Hit";
				hitpoint="HitERA_Front";
				raw=1;
			};
			class HitERA_Left_1_src
			{
				source="Hit";
				hitpoint="HitERA_Left_1";
				raw=1;
			};
			class HitERA_Right_1_src
			{
				source="Hit";
				hitpoint="HitERA_Right_1";
				raw=1;
			};
			class HitERA_Left_2_src
			{
				source="Hit";
				hitpoint="HitERA_Left_2";
				raw=1;
			};
			class HitERA_Right_2_src
			{
				source="Hit";
				hitpoint="HitERA_Right_2";
				raw=1;
			};
			class HitERA_Left_3_src
			{
				source="Hit";
				hitpoint="HitERA_Left_3";
				raw=1;
			};
			class HitERA_Right_3_src
			{
				source="Hit";
				hitpoint="HitERA_Right_3";
				raw=1;
			};
			class HitERA_Left_4_src
			{
				source="Hit";
				hitpoint="HitERA_Left_4";
				raw=1;
			};
			class HitERA_Right_4_src
			{
				source="Hit";
				hitpoint="HitERA_Right_4";
				raw=1;
			};
			class HitERA_Left_5_src
			{
				source="Hit";
				hitpoint="HitERA_Left_5";
				raw=1;
			};
			class HitERA_Right_5_src
			{
				source="Hit";
				hitpoint="HitERA_Right_5";
				raw=1;
			};
			class showCamonetHull
			{
				displayName="Attach Hull Camo Net";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showBags",
					1
				};
				mass=-50;
			};
			class showCamonetTurret
			{
				displayName="Attach Turret Camo Net";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showBagsTurret",
					1
				};
				mass=-50;
			};
			class showCamonetgun
			{
				displayName="Attach Gun Camo Net";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class showBags
			{
				displayName="Attach Backpacks";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showBagsTurret
			{
				displayName="Attach Turret Backpacks";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showera
			{
				displayName="Attach Explosive Reactive Armor";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=600;
			};
		};
    };

    class OPTRE_M808B_CMA;

    class ssv_vanguard_vehicle_m808b_black : OPTRE_M808B_CMA
    {
        displayName = "M808B Scorpion MBT";
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = CREW;
        FACTION_PREVIEW;
        class AnimationSources
        {
            class muzzle_rot_cannon
            {
                source = "ammorandom";
                weapon = "OPTRE_mortar_155mm";
            };
            class muzzle_rot_coax
            {
                source = "ammorandom";
                weapon = "OPTRE_M247T_Coax";
            };
            class recoil_source
            {
                source = "reload";
                weapon = "OPTRE_mortar_155mm";
            };
            class showCamonetGun
            {
                animPeriod = 0.001;
                author = "Article 2 Studios";
                displayName = "Attach Gun Camo Net";
                initPhase = 1;
                mass = -50;
                source = "user";
            };
            class showCamonetHull
            {
                animPeriod = 0.001;
                author = "Article 2 Studios";
                displayName = "Attach Hull Camo Net";
                initPhase = 1;
                mass = -50;
                source = "user";
            };
            class showCamonetTurret
            {
                animPeriod = 0.001;
                author = "Article 2 Studios";
                displayName = "Attach Turret Camo Net";
                initPhase = 1;
                mass = -50;
                source = "user";
            };
            class showGear
            {
                animPeriod = 0.001;
                author = "Article 2 Studios";
                displayName = "Attach Gear";
                initPhase = 1;
                mass = -50;
                source = "user";
            };
            class showTurretGear
            {
                animPeriod = 0.001;
                author = "Article 2 Studios";
                displayName = "Attach Turret Gear";
                initPhase = 1;
                mass = -50;
                source = "user";
            };
        };
    };

    class OPTRE_M808B2A1;

    class ssv_vanguard_vehicle_m808b2a1_black : OPTRE_M808B2A1
    {
        displayName = "M808B Sun Devil Anti-Air";
        faction = "SSV_Aux_Vanguard";
        side=2;
        crew = CREW;
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\body_lckdw_lopo_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\cing_dv_lckdw_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\cing_rt_lckdw_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\lckdw\turretBase_lckdw_lopo_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\night\sun_devil_head_lopo_co.paa","\OPTRE_Vehicles_Tracked\M808B2\data\night\sun_devil_gun_lopo_co.paa"};
    };

    class OPTRE_M411_APC_UNSC;
    class OPTRE_M412_IFV_UNSC;
    class OPTRE_M413_MGS_UNSC;
    class ssv_vanguard_vehicle_m411_black : OPTRE_M411_APC_UNSC
    {
        displayName = "M411 APC";
        faction = "SSV_Aux_Vanguard";
        side=2;
        crew = CREW;
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"OPTRE_Vehicles\Bison\data\Bison_Body_blk_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Misc_blk_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"};
    };
    class ssv_vanguard_vehicle_m412_black : OPTRE_M412_IFV_UNSC
    {
        displayName = "M412 IFV";
        faction = "SSV_Aux_Vanguard";
        side=2;
        crew = CREW;
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"OPTRE_Vehicles\Bison\data\Bison_Body_blk_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Misc_blk_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};
    };
    class ssv_vanguard_vehicle_m413_black : OPTRE_M413_MGS_UNSC
    {
        displayName = "M413 Mobile Gun System";
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = CREW;
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"OPTRE_Vehicles\Bison\data\Bison_Body_blk_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Misc_blk_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};
    };

    class optre_catfish_unarmed_f;
    class optre_catfish_mg_f;
    class optre_catfish_aa_f;
    class ssv_vanguard_vehicle_catfish_black : optre_catfish_unarmed_f
    {
        displayName = "M112 Wet Patrol Craft";
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = "SSV_Unit_Vanguard_QRF_Expeditionary";
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\catfish\data\optre_catfish_boat_black_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa"};
    };
    class ssv_vanguard_vehicle_catfish_mg_black : optre_catfish_mg_f
    {
        displayName = "M112 Wet Patrol Craft (MG)";
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = "SSV_Unit_Vanguard_QRF_Expeditionary";
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\catfish\data\optre_catfish_boat_black_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa","\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa","\optre_vehicles\warthog\data\turrets\sight_co.paa","\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"};
    };
    class ssv_vanguard_vehicle_catfish_aa_black : optre_catfish_aa_f
    {
        displayName = "M112 Wet Patrol Craft (AA)";
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = "SSV_Unit_Vanguard_QRF_Expeditionary";
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\catfish\data\optre_catfish_boat_black_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa","\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa"};
    };

    class OPTRE_M12_FAV;
    class OPTRE_M12_LRV;
    class OPTRE_M813_TT;
    class OPTRE_M914_RV;
    class ssv_vanguard_vehicle_m12_black : OPTRE_M12_FAV
    {
        displayName = "M12 Expeditionary Vehicle";
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = "SSV_Unit_Vanguard_QRF_Expeditionary";
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\Warthog\data\decals_ca.paa","\OPTRE_Vehicles\Warthog\data\m12hogmaav_interior_co.paa"};
    };
    class ssv_vanguard_vehicle_m12_mg_black : OPTRE_M12_LRV
    {
        displayName = "M12 Expeditionary Vehicle (MG)";
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = "SSV_Unit_Vanguard_J13_Expeditionary";
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa","\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa","\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"};
    };
    class ssv_vanguard_vehicle_m813_black : OPTRE_M813_TT
    {
        displayName = "M813 Expeditionary Vehicle (Transport)";
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = "SSV_Unit_Vanguard_QRF_Expeditionary";
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa","\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa","\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa"};
    };
    class ssv_vanguard_vehicle_m914_black : OPTRE_M914_RV
    {
        displayName = "M914 Expeditionary Vehicle (Repair)";
        faction = "SSV_Aux_Vanguard";
        side=2;
        crew = "SSV_Unit_Vanguard_Drone";
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa","\OPTRE_Vehicles\warthog\data\net_ca.paa"};
    };

    class OPTRE_M313_UNSC;
    class ssv_vanguard_vehicle_m313_black : OPTRE_M313_UNSC
    {
        displayName = "M313 Heavy Expeditionary Vehicle";
        faction = "SSV_Aux_Vanguard";
        side=2;
        crew = "SSV_Unit_Vanguard_Soldier";
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"OPTRE_Vehicles_Tracked\Elephant\Data\camo\blk\consoles_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\blk\exterior_details_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\blk\flooring_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\blk\hull_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\blk\interior_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\blk\tracks_co.paa","OPTRE_Vehicles_Tracked\Elephant\Data\camo\blk\tracks2_co.paa"};
    };

    class OPTRE_UNSC_falcon_black;
    class OPTRE_UNSC_falcon_armed;
    class ssv_vanguard_vehicle_falcon_black : OPTRE_UNSC_falcon_black
    {
        displayName = "UH-144 Falcon (Unarmed)";
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = CREW;
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"\OPTRE_Vehicles_Air\Falcon\data\Black\Falcon_Main_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Black\Falcon_Attachments_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Falcon_Interior_co.paa"};
    };
    class ssv_vanguard_vehicle_falcon_armed_black : OPTRE_UNSC_falcon_armed
    {
        displayName = "UH-144 Falcon (Armed)";
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = CREW;
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"\OPTRE_Vehicles_Air\Falcon\data\Black\Falcon_Main_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Black\Falcon_Attachments_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Falcon_Interior_co.paa"};
    };

    class OPTRE_UNSC_hornet_CAS;
    class ssv_vanguard_vehicle_hornet_CAS_black : OPTRE_UNSC_hornet_CAS
    {
        displayName = "AV-14 Hornet (CAS)";
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = CREW;
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"OPTRE_Vehicles_Air\hornet\data\hornet_hull_black_co.paa"};
    };
    
    class OPTRE_Pelican_unarmed;
    class ssv_vanguard_vehicle_pelican_unarmed_black : OPTRE_Pelican_unarmed
    {
        displayName = "D77H-TCI Pelican (Transport)";
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = CREW;
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa"};
    };

    class OPTRE_YSS_1000_A;
    class ssv_vanguard_vehicle_yss_naval : OPTRE_YSS_1000_A
    {
        displayName = "YSS-1000-A (Naval)";
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = CREW;
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"OPTRE_Vehicles_Air\sabre\data\naval\optre_sabre_mat1_co.paa","OPTRE_Vehicles_Air\sabre\data\naval\optre_sabre_mat2_co.paa","OPTRE_Vehicles_Air\sabre\data\naval\optre_sabre_mat3_co.paa"};
    };

    class OPTRE_Wombat;
    class ssv_vanguard_vehicle_wombat : OPTRE_Wombat {};

    class OPTRE_Wombat_B;
    class ssv_vanguard_vehicle_wombat_b : OPTRE_Wombat_B {};