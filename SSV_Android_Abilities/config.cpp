class CfgPatches
{
	class SSV_Android_Abilities
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
		name = "SSV - Android Abilities";
		author = "EHS";
	};
};

class CfgFunctions 
{
	
    class SSV_Android
    {
		
        class functions 
        {
			
            class ability_disorient_draw
            {
                file = "SSV_Android_Abilities\functions\fn_ability_disorient_draw.sqf";
            };
			
            class ability_disorient
            {
                file = "SSV_Android_Abilities\functions\fn_ability_disorient.sqf";
            };

            class ability_overdrive
            {
                file = "SSV_Android_Abilities\functions\fn_ability_overdrive.sqf";
            };
			
        };
		
    };
	
};