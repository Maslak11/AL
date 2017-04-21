#include "\life_server\script_macros.hpp"
/*
	File: fn_insertRequest.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Does something with inserting... Don't have time for
	descriptions... Need to write it...
*/
_query = format["INSERT INTO players (playerid, name, cash, bankacc, aliases, cop_licenses, med_licenses, civ_licenses, civ_gear, cop_gear, med_gear) VALUES('%1', '%2', '%3', '%4', '%5','""[]""','""[]""','""[]""','""[]""','""[]""','""[]""')",
	_uid,
	_name,
	_money,
	_bank,
	_alias
];
_query_2 = format["INSERT INTO perso(pid, persoCop, persoMed, persoCiv, persoEast) VALUES ('%1','""[]""','""[]""','""[]""','""[]""')",_uid];
[_query,1] call DB_fnc_asyncCall;
[_query_2,1] call DB_fnc_asyncCall;
[] remoteExecCall ["SOCK_fnc_dataQuery",(owner _returnToSender)];
