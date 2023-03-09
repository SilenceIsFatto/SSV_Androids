params ["_unit", ["_item", "NONE"]];

if ([_unit] call SSV_Android_fnc_isUsingAbility) exitWith {hint "You already used an ability. Calm down! You might become addicted!"};

if !(_item isEqualTo "NONE") then {_unit removeItem _item};

_unit setVariable ["ssv_ability_usingAbility", true];

[_unit, "ApanPercMstpSnonWnonDnon_G01"] remoteExec ["switchMove"];

private _targets = _unit nearTargets 100;

uiSleep 5; // give time for a "charge" of sorts

//if (_targets isEqualTo []) exitWith {hint "No targets for disorient found."; [_unit, ""] remoteExec ["switchMove"]};

{
    private _target = _x select 4;
    
    private _canSee = [objNull, "VIEW"] checkVisibility [eyePos _unit, eyePos _target];

    if (_canSee isEqualTo 1) exitWith {
        [_target, (random [10, 20])] spawn SSV_Android_fnc_postProcessing;
    };
} forEach _targets;

[_unit, ""] remoteExec ["switchMove"];

["A Clairvoyant has activated their Disorient ability. Clairvoyant range is 100m.", true] call SSV_Android_fnc_global_syncChat;

_unit setVariable ["ssv_ability_usingAbility", false];

// [_unit] remoteExec ["SSV_Android_fnc_ability_disorient_draw"];