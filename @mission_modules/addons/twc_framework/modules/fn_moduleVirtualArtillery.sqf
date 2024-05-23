/*
 * Author: jayman
 * Virtual Artillery.
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

_type = _logic getVariable "TYPE";
_rounds = _logic getVariable "Rounds";
_dispersion = _logic getVariable "Dispersion";
_delay = _logic getVariable "Delay";
_safeArea = _logic getVariable "SafeArea";

[getPos _logic,_dispersion,_rounds,_type,_delay,_safeArea] spawn twc_fnc_virtualMortar;

