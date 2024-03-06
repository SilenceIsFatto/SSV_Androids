params ["_unit"];

private _index = _unit addEventHandler ["Fired", 
{
    params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

    switch (_magazine) do 
    {
        case "SSV_Vanguard_Mag_OrganicGrenade": 
        {
            if ( (missionNamespace getVariable ["SSV_Vanguard_Setting_Enable_OrganicGrenade",true]) isEqualTo false) exitWith {nil};
            [_projectile, _magazine, false] call SSV_Vanguard_fnc_client_explodeGrenade;
        };
        case "SSV_Vanguard_Mag_EMPGrenade":
        {
            if ( (missionNamespace getVariable ["SSV_Vanguard_Setting_Enable_OrganicGrenade",true]) isEqualTo false) exitWith {nil};
            [_projectile, _magazine, true] call SSV_Vanguard_fnc_client_explodeGrenade;
        };
        // can't spawn these scripts from here, so going to spawn them in the fncs themselves
        case "SSV_Vanguard_Mag_ReinforceCrate":
        {
            if ( (missionNamespace getVariable ["SSV_Vanguard_Setting_Enable_OrganicGrenade",true]) isEqualTo false) exitWith {nil};
            [_unit, _projectile] call SSV_Vanguard_fnc_reinforceCrate;
        };
        case "SSV_Vanguard_Mag_ReinforceMAC":
        {
            if ( (missionNamespace getVariable ["SSV_Vanguard_Setting_Enable_OrganicGrenade",true]) isEqualTo false) exitWith {nil};
            [_unit, _projectile] call SSV_Vanguard_fnc_reinforceMAC;
        };
        case "SSV_Vanguard_Mag_ReinforceVehicle":
        {
            if ( (missionNamespace getVariable ["SSV_Vanguard_Setting_Enable_OrganicGrenade",true]) isEqualTo false) exitWith {nil};
            [_unit, _projectile] call SSV_Vanguard_fnc_reinforceVehicle;
        };
        case "SSV_Vanguard_Mag_ReinforceStatic":
        {
            if ( (missionNamespace getVariable ["SSV_Vanguard_Setting_Enable_OrganicGrenade",true]) isEqualTo false) exitWith {nil};
            [_unit, _projectile] call SSV_Vanguard_fnc_reinforceStatic;
        };
        default
        {
            if (true) exitWith {nil};
        };
    };
}];

// _unit setVariable ["ssv_vanguard_var_firedEHIndex", _index];

if ( isClass (configFile >> "cfgPatches" >> "ACE_Medical") && {isPlayer _unit}) then {
    ["ace_firedPlayer",
    {
        private _magazine = _this select 5;
        private _projectile = _this select 6;

        switch (_magazine) do 
        {
            case "SSV_Vanguard_Mag_OrganicGrenade": 
            {
                if ( (missionNamespace getVariable ["SSV_Vanguard_Setting_Enable_OrganicGrenade",true]) isEqualTo false) exitWith {nil};
                [_projectile, _magazine, false] call SSV_Vanguard_fnc_client_explodeGrenade;
            };
            case "SSV_Vanguard_Mag_EMPGrenade":
            {
                if ( (missionNamespace getVariable ["SSV_Vanguard_Setting_Enable_OrganicGrenade",true]) isEqualTo false) exitWith {nil};
                [_projectile, _magazine, true] call SSV_Vanguard_fnc_client_explodeGrenade;
            };
            // can't spawn these scripts from here, so going to spawn them in the fncs themselves
            case "SSV_Vanguard_Mag_ReinforceCrate":
            {
                [_unit, _projectile] call SSV_Vanguard_fnc_reinforceCrate;
            };
            case "SSV_Vanguard_Mag_ReinforceMAC":
            {
                [_unit, _projectile] call SSV_Vanguard_fnc_reinforceMAC;
            };
            case "SSV_Vanguard_Mag_ReinforceVehicle":
            {
                [_unit, _projectile] call SSV_Vanguard_fnc_reinforceVehicle;
            };
            case "SSV_Vanguard_Mag_ReinforceStatic":
            {
                [_unit, _projectile] call SSV_Vanguard_fnc_reinforceStatic;
            };
            default
            {
                if (true) exitWith {nil};
            };
        };

    }] call CBA_fnc_addEventHandler;
    // ace throwing compatibility
};

_index