params ["_unit"];

// [weaponName, itemName, instant]

private _abort = _unit getVariable ["SSV_Loadout_Abort", false];

if (_abort isEqualTo true) exitWith {};

private _optic = [(configFile >> "cfgVehicles" >> typeOf _unit), "optic", ""] call BIS_fnc_returnConfigEntry;

private _muzzle = [(configFile >> "cfgVehicles" >> typeOf _unit), "muzzle", ""] call BIS_fnc_returnConfigEntry;

private _laser = [(configFile >> "cfgVehicles" >> typeOf _unit), "laser", ""] call BIS_fnc_returnConfigEntry;

private _bipod = [(configFile >> "cfgVehicles" >> typeOf _unit), "bipod", ""] call BIS_fnc_returnConfigEntry;

private _accessories = [_optic, _muzzle, _laser, _bipod];

{
    if (_x isEqualTo "") exitWith {};

    _unit addPrimaryWeaponItem _x;
} forEach _accessories;