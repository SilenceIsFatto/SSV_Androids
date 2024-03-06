class CfgPatches
{
	class SSV_Vanguard_Abilities
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
		requiredAddons[] = {"SSV_Android_Abilities"};
		name = "Vanguard Abilities";
		author = "Silence";
	};
};

#include "cfgEventHandlers.hpp"

class CfgSounds 
{
	sounds[] = {};
	class SSV_Vanguard_Grenade_Explode
	{
		name = "SSV_Vanguard_Grenade_Explode";
		maxDistance = 100;
		sound[] = {"\SSV_Vanguard_Abilities\sounds\grenade_explode.ogg", 200, 1.0, 100};
		titles[] = {0, ""};
	};
};

class cfgAmmo
{
	class GrenadeHand;
	class SSV_Vanguard_HE_Base : GrenadeHand
	{
		// ACE_damageType = "";
		// ace_frag_enabled = 0;

		scope = 2;
		hit=0;
		indirectHit=0; 
		indirectHitRange=0;
		dangerRadiusHit=0;
		suppressionRadiusHit=0;

		CraterEffects="";
		explosionEffects="";
		explosive=0;
		explosionTime = 5;
		soundHit[]=
		{
			"",
			0,
			0
		};
		cost=100;
		whistleDist=0;

		class CamShakeExplode
		{
			power=2;
			duration=1;
			frequency=10;
			distance=1;
		};
		class CamShakeHit
		{
			power=5;
			duration=3;
			frequency=20;
			distance=2;
		};
	};

	class SSV_Vanguard_Ammo_OrganicGrenade: SSV_Vanguard_HE_Base
	{
		model="SSV_Vanguard_Abilities\grenade";
	};
	class SSV_Vanguard_Ammo_EMP: SSV_Vanguard_Ammo_OrganicGrenade
	{
		model="SSV_Vanguard_Abilities\grenade_emp";
	};
	class SSV_Vanguard_Ammo_Reinforce: SSV_Vanguard_Ammo_EMP
	{
		model="SSV_Vanguard_Abilities\grenade_emp";
		explosionTime = 20;
		class CamShakeExplode
		{
			power=0;
			duration=1;
			frequency=0;
			distance=0;
		};
		class CamShakeHit
		{
			power=0;
			duration=1;
			frequency=0;
			distance=0;
		};
	};
};

class cfgMagazines 
{
	class CA_Magazine;
	class HandGrenade : CA_Magazine {};
	class SSV_Vanguard_Mag_Base : HandGrenade
	{
		scope = 2;
		author="Silence";
		nameSound="handgrenade";
		picture="";
		descriptionShort="";
		mass = 4;
	};

	class SSV_Vanguard_Mag_OrganicGrenade: SSV_Vanguard_Mag_Base
	{
		displayName="Organic Targeting Grenade";
		displayNameShort="Organic Grenade";
		model="\SSV_Vanguard_Abilities\grenade";
		ammo="SSV_Vanguard_Ammo_OrganicGrenade";
		picture="\SSV_Vanguard_Common\SSV_logo_co.paa";
	};
	class SSV_Vanguard_Mag_EMPGrenade: SSV_Vanguard_Mag_OrganicGrenade
	{
		displayName="EMP Targeting Grenade";
		displayNameShort="EMP Grenade";
		ammo="SSV_Vanguard_Ammo_EMP";
		model="\SSV_Vanguard_Abilities\grenade_emp";
	};
	class SSV_Vanguard_Mag_ReinforceCrate: SSV_Vanguard_Mag_EMPGrenade
	{
		displayName="Reinforcement Marker (Resupply)";
		displayNameShort="Reinforcement (Resupply)";
		ammo="SSV_Vanguard_Ammo_Reinforce";
	};
	class SSV_Vanguard_Mag_ReinforceMAC: SSV_Vanguard_Mag_ReinforceCrate
	{
		displayName="Reinforcement Marker (MAC)";
		displayNameShort="Reinforcement (MAC)";
	};
	class SSV_Vanguard_Mag_ReinforceVehicle: SSV_Vanguard_Mag_ReinforceCrate
	{
		displayName="Reinforcement Marker (Vehicle)";
		displayNameShort="Reinforcement (Vehicle)";
	};
	class SSV_Vanguard_Mag_ReinforceStatic: SSV_Vanguard_Mag_ReinforceCrate
	{
		displayName="Reinforcement Marker (AA)";
		displayNameShort="Reinforcement (AA)";
	};
};

class cfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[] +=
		{
			"SSV_Vanguard_Mag_OrganicGrenade_Throw",
			"SSV_Vanguard_Mag_EMPGrenade_Throw",
			"SSV_Vanguard_Mag_ReinforceCrate_Throw",
			"SSV_Vanguard_Mag_ReinforceMAC_Throw",
			"SSV_Vanguard_Mag_ReinforceVehicle_Throw",
			"SSV_Vanguard_Mag_ReinforceStatic_Throw"
		};
		class ThrowMuzzle;
		class SSV_Vanguard_Mag_OrganicGrenade_Throw : ThrowMuzzle
		{
			magazines[] = {"SSV_Vanguard_Mag_OrganicGrenade"};
		};
		class SSV_Vanguard_Mag_EMPGrenade_Throw : ThrowMuzzle
		{
			magazines[] = {"SSV_Vanguard_Mag_EMPGrenade"};
		};
		class SSV_Vanguard_Mag_ReinforceCrate_Throw : ThrowMuzzle
		{
			magazines[] = {"SSV_Vanguard_Mag_ReinforceCrate"};
		};
		class SSV_Vanguard_Mag_ReinforceMAC_Throw : ThrowMuzzle
		{
			magazines[] = {"SSV_Vanguard_Mag_ReinforceMAC"};
		};
		class SSV_Vanguard_Mag_ReinforceVehicle_Throw : ThrowMuzzle
		{
			magazines[] = {"SSV_Vanguard_Mag_ReinforceVehicle"};
		};
		class SSV_Vanguard_Mag_ReinforceStatic_Throw : ThrowMuzzle
		{
			magazines[] = {"SSV_Vanguard_Mag_ReinforceStatic"};
		};
	};
};

class CfgFunctions 
{
	
    class SSV_Vanguard
    {
		
        class functions 
        {

			class client_addEvent
			{
				file = "SSV_Vanguard_Abilities\functions\grenade\fn_client_addEvent.sqf";
			};

			class client_explodeGrenade
			{
				file = "SSV_Vanguard_Abilities\functions\grenade\fn_client_explodeGrenade.sqf";
			};

			class client_init
			{
				file = "SSV_Vanguard_Abilities\functions\grenade\fn_client_init.sqf";
			};

			class client_removeEvent
			{
				file = "SSV_Vanguard_Abilities\functions\grenade\fn_client_removeEvent.sqf";
			};

			class reinforceCrate
			{
				file = "SSV_Vanguard_Abilities\functions\reinforcement\fn_reinforceCrate.sqf";
			};

			class reinforceMAC
			{
				file = "SSV_Vanguard_Abilities\functions\reinforcement\fn_reinforceMAC.sqf";
			};

			class reinforceVehicle
			{
				file = "SSV_Vanguard_Abilities\functions\reinforcement\fn_reinforceVehicle.sqf";
			};

			class reinforceStatic
			{
				file = "SSV_Vanguard_Abilities\functions\reinforcement\fn_reinforceStatic.sqf";
			};
			
        };
		
    };
	
};

class Extended_Init_EventHandlers
{
	class SSV_Unit_Vanguard_Base
	{
		class SSV_grenadeInit
		{
			init = "[(_this select 0)] call SSV_Vanguard_fnc_client_init";
		};
	};
};