class CfgPatches
{
	class SSV_Android_ACE
	{
		units[] =
		{
			""
		};
		weapons[] =
		{
			""
		};
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"SSV_Common", "ace_medical"};
		name = "Android ACE Compat";
		author = "Crow Studios";
		skipWhenMissingDependencies = 1;
	};
};

class cfgVehicles
{
	class B_Soldier_base_F;
	class B_Soldier_F : B_Soldier_base_F
	{
		class HitPoints;
	};
	class SSV_Unit_Android_Base : B_Soldier_F
	{
		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed=0;
		camouflage=1;
		nakeduniform="U_hal_synth_red_base";
		icon="iconManLeader";
		faction="SSV_Aux_Androids";
		side=1;
		author="SSV";
		scope=1;
		class Wounds
		{
			tex[]=
			{
				"hal_synths\data\hl_robo_01_co.paa",
				"hal_synths\data\hl_robo_01_co.paa"
			};
			mat[]=
			{
				"hal_synths\data\hl_robo_01.rvmat",
				"hal_synths\data\hl_robo_01_injury.rvmat"
			};
		};
		genericNames="VRMen";
		oxygenCapacity=200;
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};
		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor=6;
				material=-1;
				name="face_hub";
				passThrough=0.2;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=6;
				material=-1;
				name="neck";
				passThrough=0.2;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=6;
				material=-1;
				name="head";
				passThrough=0.2;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=12;
				material=-1;
				name="pelvis";
				passThrough=0.2;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=12;
				material=-1;
				name="spine1";
				passThrough=0.2;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=12;
				material=-1;
				name="spine2";
				passThrough=0.2;
				radius=0.18000001;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=10;
				material=-1;
				name="spine3";
				passThrough=0.2;
				radius=0.18000001;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=0.30000001;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm: HitHands
			{
				material=-1;
				name="hand_l";
				radius=0.079999998;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg: HitLegs
			{
				material=-1;
				name="leg_l";
				radius=0.1;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
			class ACE_HDBracket
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0;
				radius=1;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="HitHead";
			};
		};
	};
};