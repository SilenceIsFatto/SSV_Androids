/*
	Purpose: Returns true or false if unit is using ability or not

	Made by: Silence

    Arguments:
    _unit	<OBJECT>
	
	Example:
	[ player ] call SSV_Android_fnc_isUsingAbility;
*/

params ["_unit"];

if (_unit getVariable ["ssv_ability_usingAbility", false]) exitWith {true};

false