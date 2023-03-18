/*
	Purpose: Activates overdrive

	Made by: Silence

    Arguments:
    _unit	<OBJECT>
    _timer	<INTEGER>
    _item	<STRING>
	
	Example:
	[ player ] call SSV_Android_fnc_ability_overdrive;
    ^ only works on androids
*/

params ["_unit", ["_timer", 15], ["_item", "NONE"]];

if ([_unit] call SSV_Android_fnc_isUsingAbility) exitWith {hint "You already used an ability. Calm down! You might become addicted!"};

if !(_item isEqualTo "NONE") then {_unit removeItem _item};

_unit setVariable ["ssv_ability_usingAbility", true];

[_unit, "SSV_Android_Overdrive", true] call SSV_Android_fnc_playSound;

uiSleep 2.1; // give time for sound
_unit enableFatigue false;

private _coefAnim = getAnimSpeedCoef _unit;
private _coefSway = getCustomAimCoef _unit;

[_unit, 2] remoteExec ["setAnimSpeedCoef"];

_unit setCustomAimCoef 0;

uiSleep _timer;

_unit enableFatigue true;

[_unit, _coefAnim] remoteExec ["setAnimSpeedCoef"];

_unit setCustomAimCoef _coefSway;

_unit setVariable ["ssv_ability_usingAbility", false];