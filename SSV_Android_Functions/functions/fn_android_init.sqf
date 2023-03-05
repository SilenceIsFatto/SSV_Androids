params ["_unit"];

_unit setVariable ["ssv_isAndroid", true, true];

[_unit] call SSV_Android_fnc_android_weaponInit;