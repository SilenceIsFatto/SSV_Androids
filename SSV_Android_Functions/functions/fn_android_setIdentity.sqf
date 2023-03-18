params ["_unit"];

private _identity = [(configFile >> "cfgVehicles" >> typeOf _unit), "identity", ""] call BIS_fnc_returnConfigEntry;

if (_identity isEqualTo "") exitWith {};

[_unit, _identity] remoteExec ["setIdentity"];