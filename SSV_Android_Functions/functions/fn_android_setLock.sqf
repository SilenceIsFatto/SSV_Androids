params ["_unit", ["_state", true]];

if !(_unit getVariable ["ssv_isAndroid", false]) exitWith {};

if (_state isEqualTo true) exitWith {

    _unit enableAI "all";

    _unit playMoveNow "";

};

_unit disableAI "all";

_unit playMoveNow "AmovPercMstpSlowWrflDnon_Salute";

_unit enableMimics _state;