/*
	Purpose: Initialises android (adds attachments to weapon + allows android abilities)

	Made by: Silence

    Arguments:
    _unit	<OBJECT>
	
	Example:
	[ player ] call SSV_Android_fnc_android_init;
*/


params ["_unit"];

_unit setVariable ["ssv_isAndroid", true, true];

[_unit] call SSV_Android_fnc_android_weaponInit;