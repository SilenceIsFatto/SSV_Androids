[
    "SSV_Android_Item_Overdrive", // item classname (can be a base class)
    "CONTAINER", // type
    ["Activate Overdrive"], // name
    [1,1,1,1], // color RGBA
    "", // icon path
    [{params ["_unit", "_container", "_item", "_slot", "_params"]; [_unit] call SSV_Android_fnc_isAndroid},{params ["_unit", "_container", "_item", "_slot", "_params"]; [_unit] call SSV_Android_fnc_isAndroid}], // condition to use, condition to show
    {
        params ["_unit", "_container", "_item", "_slot", "_params"]; // parameters
        
        [_unit, 30, _item] spawn SSV_Android_fnc_ability_overdrive;
    },
    false, // remove from inventory
    [] // extra params passed
] call CBA_fnc_addItemContextMenuOption;