/*
 * Author: Bosenator
 * Module function to make a unit or group stationary.
 *
 * Arguments:
 * 0: The Module Logic <OBJECT>
 * 1: Synced Objects <ARRAY>
 * 2: Activated <BOOL>
 *
 * Return Value:
 * None
 *
 * Public: No
 */
params ["_logic", "_units", "_activated"];

if (!_activated || !isServer) exitWith {};
_message = _logic getVariable "Message";

[_message] call twc_fnc_commandMessage;

if (!isNull _logic) then {
	deleteVehicle _logic;
};