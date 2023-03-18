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
*/

params ["_unit"];

if (is3DEN) exitWith {};

private _loadout = getUnitLoadout _unit;

private _type = [(configFile >> "cfgVehicles" >> typeOf _unit), "zombieType", 0] call BIS_fnc_returnConfigEntry;

if (_type isEqualTo 0) exitWith {};

[_unit, _type] call WBK_LoadAIThroughEden;

_unit setUnitLoadout _loadout;

[{[(_this select 0)] call SSV_Android_fnc_android_setIdentity}, [_unit], 0.5] call CBA_fnc_waitAndExecute;

_unit setVariable ["WBK_Zombie_CustomSounds",
[
    ["SSV_Android_Communication_1", "SSV_Android_Communication_2"],
    ["SSV_Android_Communication_1", "SSV_Android_Communication_2"],
    ["SSV_Android_Attack_1", "SSV_Android_Attack_2"],
    ["SSV_Android_Death_1"],
    ["SSV_Android_Death_1"]
],true];