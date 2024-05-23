/*
* Author: [TWC] jayman
* Creates a task that will be JIP able
*
* Arguments:
* 0: Position <MARKER> or <POSITION>
* Return Value:
* NOTHING
*
* Example:
* [[0,0,0]] call twc_fnc_daisyCutter
*
* Public: no
*/

params ["_pos"];

if !(isServer) exitWith {};
if (typeName _pos == "STRING") then { _pos = getMarkerPos _pos; };

if (typeName _pos != "ARRAY") exitWith {
	systemChat format ["DaisyCutter error, unsupported data type on _pos: %1", typeName _pos];
};

_near = nearestTerrainObjects [_pos, ["Tree", "Small Tree", "Bush"], 31];
{ hideObjectGlobal _x } forEach _near;
"Bo_GBU12_LGB" createVehicle _pos;
