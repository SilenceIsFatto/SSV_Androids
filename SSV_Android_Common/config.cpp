class CfgPatches
{
	class SSV_Android_Common
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
		requiredAddons[] = {"SSV_Common"};
		name = "SSV - Android Common";
		author = "SSV";
	};
};

class cfgVehicles
{
	class B_Soldier_F;
	class SSV_Unit_Android_Base : B_Soldier_F
	{
		impactEffectsBlood="ImpactPlastic";
		canBleed=0;
		camouflage=1;
		nakeduniform="U_hal_synth_red_base";
		icon="iconManLeader";
		faction = "SSV_Aux_Androids";
		side=1;
		author="SSV";
		scope = 1;
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
		class HitPoints
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
				armor=10;
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
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=12;
				material=-1;
				name="spine3";
				passThrough=0.2;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=0.80000001;
				radius=0;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=0.5;
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
				passThrough=0.5;
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
				passThrough=0.5;
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
		};
	};
};

class CfgEditorSubcategories
{
	class SSV_EditorSubcategory_Police
	{
		displayName = "Police";
	};
	class SSV_EditorSubcategory_Army
	{
		displayName = "Military";
	};
	class SSV_EditorSubcategory_Workers
	{
		displayName = "Workers";
	};
	class SSV_EditorSubcategory_Corrupted
	{
		displayName = "Shells";
	};
	class SSV_EditorSubcategory_Corrupted_Special
	{
		displayName = "Compromised Shells";
	};
};

class cfgWeapons
{
	class H_HelmetB;
	class HeadgearItem;

	class SSV_Helmet_Base : H_HelmetB
	{
		author = "SSV";
		weaponPoolAvailable = 0;
		picture="\SSV_Common\SSV_logo_co.paa";
		scope = 0;
		class ItemInfo : HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName	= "HitHead";	// reference to the hit point class defined in the man base class
					armor			= 6;			// addition to armor of referenced hitpoint
					passThrough		= 0.5;			// multiplier of base passThrough defined in referenced hitpoint
				};
				class Neck
				{
					hitpointName	= "HitNeck";	// reference to the hit point class defined in the man base class
					armor			= 6;			// addition to armor of referenced hitpoint
					passThrough		= 0.5;			// multiplier of base passThrough defined in referenced hitpoint
				};
				class Face
				{
					hitpointName	= "HitFace";	// reference to the hit point class defined in the man base class
					armor			= 6;			// addition to armor of referenced hitpoint
					passThrough		= 0.5;			// multiplier of base passThrough defined in referenced hitpoint
				};
			};
		};
	};
};

class CfgFactionClasses
{
	class SSV_Aux_Androids
	{
		displayName = "Androids";
		author = "SSV";
		picture = "\SSV_Common\SSV_logo_co.paa";
		priority = 20;
		side = 1; // BLUFOR
	};
	class SSV_Aux_Replikas
	{
		displayName = "Replikas";
		author = "SSV";
		picture = "\SSV_Common\SSV_logo_co.paa";
		priority = 19;
		side = 0; // OPFOR
	};
	class SSV_Aux_Corrupted
	{
		displayName = "Corrupted";
		author = "SSV";
		picture = "\SSV_Common\SSV_logo_co.paa";
		priority = 20;
		side = 0; // OPFOR
	};
};

class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		class hal_synth_face_01;
		class Kerry;
		class AfricanHead_01;
		class AsianHead_A3_01;
		class SSV_replika_face_01: hal_synth_face_01
		{
			scope=2;
			author="SSV";
			displayname="Replika (Red)";
			disabled=0;
			texture="SSV_Android_Common\textures\replika_1\replika_co.paa";
			material="SSV_Android_Common\textures\replika_1\replika.rvmat";
			head="SSV_replika_head_1";
			identityTypes[]=
			{
				"SSV_replika_head_1"
			};
		};
		class SSV_replika_face_02: SSV_replika_face_01
		{
			displayname="Replika (Grey)";
			texture="SSV_Android_Common\textures\replika_2\replika_co.paa";
			material="SSV_Android_Common\textures\replika_2\replika.rvmat";
			head="SSV_replika_head_2";
			identityTypes[]=
			{
				"SSV_replika_head_2"
			};
		};
		class SSV_android_face_01: hal_synth_face_01
		{
			scope=2;
			author="SSV";
			displayname="Android (White)";
			disabled=0;
			texture="SSV_Android_Common\textures\humanlike\white\robots_become_human_co.paa";
			material="SSV_Android_Common\textures\humanlike\white\robots_become_human.rvmat";
			head="SSV_android_head_01";
			identityTypes[]=
			{
				"SSV_android_head_01"
			};
		};
		class SSV_android_face_02: hal_synth_face_01
		{
			scope=2;
			author="SSV";
			displayname="Android (Black)";
			disabled=0;
			texture="SSV_Android_Common\textures\humanlike\black\robots_become_human_co.paa";
			material="SSV_Android_Common\textures\humanlike\black\robots_become_human.rvmat";
			head="SSV_android_head_02";
			identityTypes[]=
			{
				"SSV_android_head_02"
			};
		};
		class SSV_android_face_03: hal_synth_face_01
		{
			scope=2;
			author="SSV";
			displayname="Android (Asian)";
			disabled=0;
			texture="SSV_Android_Common\textures\humanlike\asian\robots_become_human_co.paa";
			material="SSV_Android_Common\textures\humanlike\asian\robots_become_human.rvmat";
			head="SSV_android_head_03";
			identityTypes[]=
			{
				"SSV_android_head_03"
			};
		};
	};
};

class CfgHeads
{
	class Default_A3;
	class hal_synth_Head_01;
	class SSV_replika_head_1: hal_synth_Head_01
	{
		model="\A3\Characters_F\Heads\m_white_01";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"SSV_Android_Common\textures\replika_1\replika.rvmat"
				// "hal_synths\data\head_robo_01_injury.rvmat",
				// "hal_synths\data\head_robo_01_injury.rvmat"
			};
		};
		selectionHeadWound="injury_head";
		selectionPersonality="personality";
	};
	class SSV_replika_head_2: SSV_replika_head_1
	{
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"SSV_Android_Common\textures\replika_2\replika.rvmat"
			};
		};
	};
	class KerryHead_A3;
	class BlackHead_A3;
	class AsianHead_A3;
	class SSV_android_head_01: KerryHead_A3 
	{
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"SSV_Android_Common\textures\humanlike\white\robots_become_human.rvmat";
			};
		};
	};
	class SSV_android_head_02: BlackHead_A3 
	{
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"SSV_Android_Common\textures\humanlike\black\robots_become_human.rvmat";
			};
		};
	};
	class SSV_android_head_03: AsianHead_A3 
	{
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"SSV_Android_Common\textures\humanlike\asian\robots_become_human.rvmat";
			};
		};
	};
};

class cfgIdentities
{
	class SSV_replika_identity_1
	{
		face = "SSV_replika_face_01";
		glasses = "None";
		name = "Replika - Red";
		nameSound = "";
		speaker = "Male01ENGVR";
		pitch = 0.2;
	};
	class SSV_replika_identity_2
	{
		face = "SSV_replika_face_02";
		glasses = "None";
		name = "Replika - Grey";
		nameSound = "";
		speaker = "Male02ENGVR";
		pitch = 0.2;
	};
	class SSV_android_identity_1
	{
		face = "SSV_android_face_01";
		glasses = "None";
		name = "Android - White";
		nameSound = "";
		speaker = "Male02ENGVR";
		pitch = 0.6;
	};
	class SSV_android_identity_2
	{
		face = "SSV_android_face_02";
		glasses = "None";
		name = "Android - Black";
		nameSound = "";
		speaker = "Male02ENGVR";
		pitch = 0.6;
	};
	class SSV_android_identity_3
	{
		face = "SSV_android_face_03";
		glasses = "None";
		name = "Android - Asian";
		nameSound = "";
		speaker = "Male02ENGVR";
		pitch = 0.6;
	};
};

// class CfgFunctions 
// {
	
//     class Replika_Common
//     {
		
//         class functions 
//         {
			
//             class placeholder 
//             {
//                 file = "";
//             };
			
//         };
		
//     };
	
// };