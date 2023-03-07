params ["_unit", ["_timer", 30]];

//_unit switchMove "ApanPercMstpSnonWnonDnon_G01";
//uiSleep 5;
//_unit switchMove "";
_unit enableFatigue false;

private _coefAnim = getAnimSpeedCoef _unit;
private _coefSway = getCustomAimCoef _unit;

[_unit, 2] remoteExec ["setAnimSpeedCoef"];

_unit setCustomAimCoef 0;

uiSleep _timer;

//_unit switchMove "";
_unit enableFatigue true;

[_unit, _coefAnim] remoteExec ["setAnimSpeedCoef"];

_unit setCustomAimCoef _coefSway;