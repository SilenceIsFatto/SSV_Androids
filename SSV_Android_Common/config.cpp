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
		author = "EHS";
	};
};

class cfgWeapons
{
	class H_HelmetB;
	class HeadgearItem;

	class SSV_Helmet_Base : H_HelmetB
	{
		author = "EHS";
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
		author = "EHS";
		picture = "\SSV_Common\SSV_logo_co.paa";
		priority = 2;
		side = 1; // BLUFOR
	};
	class SSV_Aux_Replikas
	{
		displayName = "Replikas";
		author = "EHS";
		picture = "\SSV_Common\SSV_logo_co.paa";
		priority = 2;
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
			author="EHS";
			displayname="Replika (Red)";
			disabled=0;
			// textureHL="SSV_Replika_Common\textures\hl_robo_01_co.paa";
			// materialHL="SSV_Replika_Common\textures\hl_robo_01.rvmat";
			// textureHL2="SSV_Replika_Common\textures\hl_robo_01_co.paa";
			// materialHL2="SSV_Replika_Common\textures\hl_robo_01.rvmat";
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
		class SSV_android_face_01: Kerry
		{
			scope=2;
			author="EHS";
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
		class SSV_android_face_02: AfricanHead_01
		{
			scope=2;
			author="EHS";
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
		class SSV_android_face_03: AsianHead_A3_01
		{
			scope=2;
			author="EHS";
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