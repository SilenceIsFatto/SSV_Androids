params ["_unit", "_projectile", ["_object", selectRandom ["SSV_Prop_SmallBox_Metro", "SSV_Prop_Mineral_Box"]]];

if !(isClass (configFile >> "CfgPatches" >> "PHAN_ScifiSupportPlus")) exitWith {nil};

if (missionNamespace getVariable ["ssv_vanguard_reinforce_crate_active", false] isEqualTo true) exitWith {hint "A reinforcement crate is inbound."}; // if (_unit canAddItemToBackpack "SSV_Vanguard_Mag_ReinforceCrate") then {_unit addItemToBackpack "SSV_Vanguard_Mag_ReinforceCrate"
// disabled the give back grenade ^, was a duplication glitch

missionNamespace setVariable ["ssv_vanguard_reinforce_crate_active", true];

private _handle = [_unit, _projectile, _object] spawn {

    params ["_unit", "_projectile", "_object"];

    waitUntil {sleep 1; speed _projectile <= 1};

    _projectile setVelocity [0,0,0];

    private _grenade = "#particlesource" createVehicle getPosATL _projectile;

    [
        {
            private _grenade = (_this select 0);
            private _object = (_this select 1);
            private _unit = (_this select 2);
            [getPosATL _grenade, 300, true, true, false, true, _object, [_unit]] call PHAN_ScifiSupportPlus_fnc_Resupply_Pod;
            missionNamespace setVariable ["ssv_vanguard_reinforce_crate_active", false];
        },
        [_grenade, _object, _unit],
        2
    ] call CBA_fnc_waitAndExecute; // the resupply pod function misbehaves in a scheduled environment, so we'll run it with this instead

};