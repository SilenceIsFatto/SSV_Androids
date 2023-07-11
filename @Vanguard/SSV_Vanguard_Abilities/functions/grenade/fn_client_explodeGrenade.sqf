params ["_projectile", "_magazine"];

_projectile setVariable ["_projectile_magazine", _magazine, true];

[ _projectile, "SSV_Vanguard_Grenade_Explode", true ] call SSV_Android_fnc_playSound;

_projectile addEventHandler ["Explode",
{
	params ["_projectile", "_pos", "_velocity"];

    private _magazine = _projectile getVariable ["_projectile_magazine",""];

    private _grenade = "#particlesource" createVehicle ASLtoATL _pos;

    private _radius = 10;

    private _nearGrenade = nearestObjects [_grenade, ["CAManBase"], _radius];

    {
        // switch (true) do
        // {
        //     case (_x distance _grenade <= 10): 
        //     {
        //         _x setDamage 1;
        //     };
        //     case (_x distance _grenade >= 10): 
        //     {
        //         _x setDamage 1;
        //     };
        // };

        if !([_x] call SSV_Android_fnc_isAndroid) then {
            _x setDamage 1;
        };
        // might add a feature for some grenades to target specific classes
    } forEach _nearGrenade;
}];