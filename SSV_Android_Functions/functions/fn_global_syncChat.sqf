params ["_message", "_global"];

if (_global) exitWith {
    [_message] remoteExec ["systemChat"];
};

systemChat _message;