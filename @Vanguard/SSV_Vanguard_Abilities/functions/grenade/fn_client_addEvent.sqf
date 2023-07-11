params ["_unit"];

private _index = _unit addEventHandler ["Fired", 
{
    params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

    if (_magazine isNotEqualTo "SSV_Vanguard_Mag_OrganicGrenade") exitWith {nil};
    if ( (missionNamespace getVariable ["SSV_Vanguard_Setting_Enable_OrganicGrenade",true]) isEqualTo false) exitWith {nil};
    
    [_projectile, _magazine] call SSV_Vanguard_fnc_client_explodeGrenade;
}];

// _unit setVariable ["ssv_vanguard_var_firedEHIndex", _index];

if ( isClass (configFile >> "cfgPatches" >> "ACE_Medical") && {isPlayer _unit}) then {
    ["ace_firedPlayer",
    {
        private _magazine = _this select 5;
        private _projectile = _this select 6;

        if (_magazine isNotEqualTo "SSV_Vanguard_Mag_OrganicGrenade") exitWith {nil};
        if ( (missionNamespace getVariable ["SSV_Vanguard_Setting_Enable_OrganicGrenade",true]) isEqualTo false) exitWith {nil};

        [_projectile, _magazine] call SSV_Vanguard_fnc_client_explodeGrenade;
    }] call CBA_fnc_addEventHandler;
    // ace throwing compatibility
};

_index