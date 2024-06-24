/*
*	Author: Silence
*	Description: Converts unit to zombie, preserves loadout
*
*	Arguments:
*	0: _unit 		<OBJECT> - Unit you want to run this on
*	1: _type		<INTEGER> - 1-6

*    Types:
*    1 - Crawler
*    2 - Walker
*    3 - Shambler
*    4 - Runner (Calm)
*    5 - Runner (Angry)
*    6 - Triggerman
*    7 - Corrupted Body
*    8 - Melee
*/

params ["_unit", ["_type", 0], ["_sounds", []]];

if (is3DEN) exitWith {};

private _loadout = getUnitLoadout _unit;

if (_type isEqualTo 0) then { // check if type wasn't provided through params
    _type = [(configFile >> "cfgVehicles" >> typeOf _unit), "zombieType", 0] call BIS_fnc_returnConfigEntry; // take type from config instead
};

if (_type isEqualTo 0) exitWith {}; // if type is still undefined, abort

[_unit, _type] call WBK_LoadAIThroughEden;

_unit setUnitLoadout _loadout;

[{[(_this select 0)] call SSV_Android_fnc_android_setIdentity}, [_unit], 0.5] call CBA_fnc_waitAndExecute;

if (_sounds isNotEqualTo []) then {

    _unit setVariable ["WBK_Zombie_CustomSounds",
    [
        (_sounds select 0),
        (_sounds select 1),
        (_sounds select 2),
        (_sounds select 3),
        (_sounds select 4)
    ],true];

};