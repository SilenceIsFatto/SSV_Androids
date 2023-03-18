/*
	Purpose: "Locks" android, sets animation and essentially shuts them down

	Made by: Silence

    Arguments:
    _unit	<OBJECT>
    _state	<BOOL>
	
	Example:
	[ _this ] call SSV_Android_fnc_android_setLock;
    ^ only works on androids
*/

params ["_unit", ["_state", true]];

// if !(_unit getVariable ["ssv_isAndroid", false]) exitWith {};

if !([_unit] call SSV_Android_fnc_isAndroid) exitWith {};

if (_state isEqualTo true) exitWith {

    _unit disableAI "all";

    [_unit, "AmovPercMstpSnonWnonDnon_EaseIn", true] call SSV_Android_fnc_global_syncAnim;

    _unit enableMimics false;

};

_unit enableAI "all";

[_unit, "AmovPercMstpSnonWnonDnon_EaseOut", true] call SSV_Android_fnc_global_syncAnim;

_unit enableMimics true;