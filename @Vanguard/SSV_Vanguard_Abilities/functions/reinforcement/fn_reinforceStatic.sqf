params [
    ["_unit", player],
    ["_projectile", objNull],
    ["_staticReinforcement", "ssv_vanguard_static_scythe"], 
    ["_side", [side player]],
    ["_direction", getDir player]
];

if !(isClass (configFile >> "CfgPatches" >> "PHAN_ScifiSupportPlus")) exitWith {nil};

if (missionNamespace getVariable ["ssv_vanguard_reinforce_static_active", false] isEqualTo true) exitWith {hint "A static AA is inbound."};

missionNamespace setVariable ["ssv_vanguard_reinforce_static_active", true];

private _handle = [_unit, _projectile, _staticReinforcement, _side, _direction] spawn {

    params ["_unit", "_projectile", "_staticReinforcement", "_side", "_direction"];

    waitUntil {sleep 1; speed _projectile <= 1};

    _projectile setVelocity [0,0,0];

    private _grenade = "#particlesource" createVehicle getPosATL _projectile;

    [
        {
            private _grenade = (_this select 0);
            private _staticReinforcement = (_this select 1);
            private _side = (_this select 2);
            private _direction = (_this select 3);
            [getPosATL _grenade, _staticReinforcement, _side, _direction] call PHAN_ScifiSupportPlus_fnc_OPTRE_StructuralReinforcement;
            missionNamespace setVariable ["ssv_vanguard_reinforce_static_active", false];
        }, 
        [_grenade, _staticReinforcement, _side, _direction],
        5
    ] call CBA_fnc_waitAndExecute; // this function misbehaves in a scheduled environment, so we'll run it with this instead

};