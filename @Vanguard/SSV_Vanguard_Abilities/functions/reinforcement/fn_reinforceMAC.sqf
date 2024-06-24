params [["_unit", player], "_projectile"];

if !(isClass (configFile >> "CfgPatches" >> "PHAN_ScifiSupportPlus")) exitWith {nil};

if (missionNamespace getVariable ["ssv_vanguard_reinforce_mac_active", false] isEqualTo true) exitWith {hint "A MAC strike is inbound."};

missionNamespace setVariable ["ssv_vanguard_reinforce_mac_active", true];

private _handle = [_unit, _projectile] spawn {

    params ["_unit", "_projectile"];

    waitUntil {sleep 1; speed _projectile <= 1};

    _projectile setVelocity [0,0,0];

    private _grenade = "#particlesource" createVehicle getPosATL _projectile;

    [
        {
            private _grenade = (_this select 0);
            [getPosATL _grenade] spawn PHAN_ScifiSupportPlus_fnc_OPTRE_MACStrike;
            missionNamespace setVariable ["ssv_vanguard_reinforce_mac_active", false];
        },
        [_grenade],
        10
    ] call CBA_fnc_waitAndExecute; // this function misbehaves in a scheduled environment, so we'll run it with this instead

};