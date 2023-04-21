class CfgPatches
{
	class SSV_Android_Sounds
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
		requiredAddons[] = {"SSV_Android"};
		name = "SSV - Android Sounds";
		author = "SSV";
	};
};

class CfgFunctions 
{
	
    class SSV_Android 
    {
		
        class functions 
        {
			
            class playSound 
            {
                file = "\SSV_Android_Sounds\functions\fn_playSound.sqf";
            };
			
        };
		
    };
	
};

class CfgSounds 
{
	sounds[] = {};
	class SSV_Android_Overdrive 
	{
		name = "SSV_Android_Overdrive";
		maxDistance = 100;
		sound[] = {"\SSV_Android_Sounds\sounds\android_overdrive_2.ogg", 100, 1.0, 100};
		titles[] = {0, ""};
	};
	class SSV_Android_Communication_1
	{
		name = "SSV_Android_Communication_1";
		maxDistance = 50;
		sound[] = {"\SSV_Android_Sounds\sounds\android_communication_1.ogg", 125, 0.8, 100};
		titles[] = {0, ""};
	};
	class SSV_Android_Communication_2
	{
		name = "SSV_Android_Communication_2";
		maxDistance = 50;
		sound[] = {"\SSV_Android_Sounds\sounds\android_communication_2.ogg", 125, 0.8, 100};
		titles[] = {0, ""};
	};
	class SSV_Android_Communication_3
	{
		name = "SSV_Android_Communication_3";
		maxDistance = 50;
		sound[] = {"\SSV_Android_Sounds\sounds\android_communication_3.ogg", 125, 0.8, 100};
		titles[] = {0, ""};
	};
	class SSV_Android_Death_1
	{
		name = "SSV_Android_Death_1";
		maxDistance = 100;
		sound[] = {"\SSV_Android_Sounds\sounds\android_death_1.ogg", 125, 1, 100};
		titles[] = {0, ""};
	};
	class SSV_Android_Attack_1
	{
		name = "SSV_Android_Attack_1";
		maxDistance = 100;
		sound[] = {"\SSV_Android_Sounds\sounds\android_attack_1.ogg", 125, 0.5, 100};
		titles[] = {0, ""};
	};
	class SSV_Android_Attack_2
	{
		name = "SSV_Android_Attack_2";
		maxDistance = 100;
		sound[] = {"\SSV_Android_Sounds\sounds\android_attack_2.ogg", 125, 0.5, 100};
		titles[] = {0, ""};
	};
};