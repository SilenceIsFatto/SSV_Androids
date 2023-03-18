// Fuck knows how or why this works, but it does (I think)
// ^
// That right there folks is called Foreshadowing. It in fact, did not work.

params ["_unit", "_time"];

if (local _unit && {isPlayer _unit}) then {
    private _ppeCA = ppEffectCreate["ChromAberration", 200];
    private _ppeDB = ppEffectCreate["DynamicBlur", 400];

    //Fade in
    _ppeCA ppEffectAdjust [.15, .15, true];
    _ppeDB ppEffectAdjust [10];
    _ppeCA ppEffectEnable true;
    _ppeDB ppEffectEnable true;
    [_ppeDB ,_ppeCA] ppEffectCommit 10;
    waitUntil {ppEffectCommitted _ppeCA};
    uiSleep _time;

    //Fade out
    _ppeCA ppEffectAdjust [0, 0, true];
    _ppeDB ppEffectAdjust [0];
    [_ppeDB ,_ppeCA] ppEffectCommit 10;
    waitUntil {ppEffectCommitted _ppeCA};

    ppEffectDestroy _ppeCA;
    ppEffectDestroy _ppeDB;
};