ADDON = true;

[
    "SSV_Vanguard_Setting_Enable_OrganicGrenade", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Enable Custom Grenades", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Android Ascension - Vanguard", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    true,
    true, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {  
        params ["_value"];
		missionNamespace setVariable ["SSV_Vanguard_Setting_Enable_OrganicGrenade",_value,true];
    }
] call CBA_fnc_addSetting;