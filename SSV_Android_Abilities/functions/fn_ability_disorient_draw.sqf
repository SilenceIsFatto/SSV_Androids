params ["_unit"];

private _draw_EH = addMissionEventHandler ["Draw3D",
{
    if !(alive (_thisArgs select 0)) exitWith {
        ["A marked Android Clairvoyant was neutralised."] remoteExec ["systemChat"];
    };

    drawIcon3D
    [
        "", // add actual icon
        //"a3\ui_f\data\Map\Markers\Military\dot_ca.paa",
        [[1,0,0,1], [1,1,1,1]],
        ((_thisArgs select 0) modelToWorldVisual [0,0,5]),
        1,1,0,
        "Android Clairvoyant"
    ];
    // drawLine3D 
    // [
    //     getPos player,
    //     getPos _x,
    //     [0,1,0,1]
    // ];
}, [_unit]];