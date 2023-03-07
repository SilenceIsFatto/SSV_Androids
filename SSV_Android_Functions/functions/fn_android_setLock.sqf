params ["_unit", ["_state", true]];

if !(_unit getVariable ["ssv_isAndroid", false]) exitWith {};

if (_state isEqualTo true) exitWith {

    _unit disableAI "all";

    [_unit, "AmovPercMstpSnonWnonDnon_EaseIn", true] call SSV_Android_fnc_global_syncAnim;

    _unit enableMimics false;

};

_unit enableAI "all";

[_unit, "AmovPercMstpSnonWnonDnon_EaseOut", true] call SSV_Android_fnc_global_syncAnim;

_unit enableMimics true;