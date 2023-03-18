/*
	Purpose: Checks if android can activate ability

	Made by: Silence

    Arguments:
    _unit	<OBJECT>
	
	Example:
	[ _this ] call SSV_Android_fnc_canUseAbility;
    ^ only works on androids
*/

params ["_unit", ["_ability", "NONE"]];

if !([_unit] call SSV_Android_fnc_isAndroid) exitWith {};

if ([_unit] call SSV_Android_fnc_isUsingAbility) exitWith {titleText ["This unit already has an ability activated.", "PLAIN"]};

// private _items = items _unit;

// if (_ability in _items) exitWith {
//     true
// };

true