/*
	Purpose: Returns true or false if unit is android or not

	Made by: Silence

    Arguments:
    _unit	<OBJECT>
	
	Example:
	[ player ] call SSV_Android_fnc_isAndroid;
*/

params ["_unit"];

if (_unit getVariable ["ssv_isAndroid", false]) exitWith {true};

false