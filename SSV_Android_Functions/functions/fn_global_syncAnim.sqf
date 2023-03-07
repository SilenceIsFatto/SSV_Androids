/*
	Purpose: Remote executes (or simply locally plays) an animation

	Made by: Silence

    Arguments:
    _unit	<OBJECT>
	_anim	<STRING>
	_global	<BOOL> <DEFAULT: false>
	
	Example:
	[ player, "", true ] call EHS_Common_fnc_globalAnim;
*/

params ["_unit", "_anim", ["_global", false]];

if (_global) exitWith {
    [_unit, _anim] remoteExec ["playMoveNow"];
};

_unit playMoveNow _anim;