params [
    ["_unit", player],
    ["_projectile", objNull],
    ["_carrierVehicle", "ssv_vanguard_vehicle_pelican_unarmed_black"], 
    ["_reinforcementVehicle", selectRandom ["ssv_vanguard_vehicle_m413_black", "ssv_vanguard_vehicle_m12_mg_black"]], 
    ["_addCrew", false]
];

if !(isClass (configFile >> "CfgPatches" >> "PHAN_ScifiSupportPlus")) exitWith {nil};

if (missionNamespace getVariable ["ssv_vanguard_reinforce_vehicle_active", false] isEqualTo true) exitWith {hint "A vehicle drop is inbound."};

missionNamespace setVariable ["ssv_vanguard_reinforce_vehicle_active", true];

private _handle = [_unit, _carrierVehicle, _reinforcementVehicle, _addCrew, _projectile] spawn {

    params ["_unit", "_carrierVehicle", "_reinforcementVehicle", "_addCrew", "_projectile"];

    waitUntil {sleep 1; speed _projectile <= 1};

    _projectile setVelocity [0,0,0];

    private _grenade = "#particlesource" createVehicle getPosATL _projectile;

    private _smoke = "SmokeShellRed" createVehicle getPosATL _grenade;

    _smoke hideObjectGlobal true;

    [getPosATL _grenade, _carrierVehicle, _reinforcementVehicle, _addCrew, 2000, (random 360)] call PHAN_ScifiSupportPlus_fnc_OPTRE_PelicanVehicleDrop;

    missionNamespace setVariable ["ssv_vanguard_reinforce_vehicle_active", false];
};