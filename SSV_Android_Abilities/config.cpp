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
		name = "Android Abilities";
		author = "Crow Studios";
	};
};

class cfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;

    #include "cfgAbilityItems.hpp"
};

class CfgFunctions 
{
	
    class SSV_Android
    {
		
        class functions 
        {

			class cba_init
			{
				file = "SSV_Android_Abilities\functions\fn_cba_init.sqf";
				postInit=1;
			};

			class cba_disorient
			{
				file = "SSV_Android_Abilities\functions\cba\fn_cba_disorient.sqf";
			};

			class cba_overdrive
			{
				file = "SSV_Android_Abilities\functions\cba\fn_cba_overdrive.sqf";
			};
			
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

#if __has_include("\x\zen\addons\common\config.bin")

class zen_context_menu_actions
{
	#include "cfgZEN.hpp"
};

#endif