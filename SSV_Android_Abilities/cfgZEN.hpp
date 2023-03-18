    class AndroidAbilities
    {
        displayName = "Android Abilities";
        condition = "[_hoveredEntity] call SSV_Android_fnc_canUseAbility";
        icon = "\SSV_Common\SSV_logo_co.paa";
        priority = 19;
        class StartAbilityOverdrive
        {
            displayName = "Activate Overdrive";
            // condition = "[_hoveredEntity] call SSV_Android_fnc_canUseAbility";
            statement = "[_hoveredEntity, 15] spawn SSV_Android_fnc_ability_overdrive";
            icon = "\a3\modules_f_curator\data\portraitcountdown_ca.paa";
            priority = 19;
        };

        // class StartAbilityDisorient
        // {
        //     displayName = "Activate Disorient";
        //     // condition = "[_hoveredEntity] call SSV_Android_fnc_canUseAbility";
        //     statement = "[_hoveredEntity] spawn SSV_Android_fnc_ability_disorient";
        //     icon = "\a3\modules_f_curator\data\portraitflare_ca.paa";
        //     priority = 19;
        // };
    };