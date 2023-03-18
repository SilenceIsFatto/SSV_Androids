params ["_unit"];

private _uniform = [(configFile >> "cfgVehicles" >> typeOf _unit), "uniform", ""] call BIS_fnc_returnConfigEntry;

if (_uniform isEqualTo "") exitWith {};

[{(_this select 0) forceAddUniform (_this select 1); [(_this select 0)] call SSV_Android_fnc_android_setIdentity}, [_unit, _uniform], 0.5] call CBA_fnc_waitAndExecute;