/*
//--By Repentz
//--Translated to german by Marius1773
*/
#include "..\..\script_macros.hpp"
/*
 fn_seatBelt.sqf
*/
//playSound "seatbelt"; //--Aktivier das wenn du ein Sound willst für deinen Anschnallgurt (nach belieben ändern)
if(!life_seatbelt) then {
 life_seatbelt = true;
} else {
 life_seatbelt = false;
};
//[] call life_fnc_hudUpdate; //--Aktivier das wenn du eine Hud Option einfügen möchtest wenn der Anschnallgurt angelegt ist.