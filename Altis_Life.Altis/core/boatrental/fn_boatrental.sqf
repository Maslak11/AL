private["_price","_boats","_duration","_className","_rentalAction","_player","_vPlayer","_spawnPoint","_timeKeeper"];

_price = 10000;
_boats = ["C_Boat_Civil_01_rescue_F","C_Boat_Civil_01_F"];
_duration = (15 * 60);
_className = _boats select floor random count _boats;
_player = player;
_vPlayer = vehicle player;
_spawnPoint = "boatrental_spawn";
_timeKeeper = 1;

if(playerSide != civilian) exitWith {hintSilent "You're not a civilian!"};
if(!alive player) exitWith {};
if(_price > life_cash) exitWith {hintSilent format["You do not have enough money! You are missing $%1!",_price - life_cash]};
if(license_civ_boat) exitWith {hintSilent "You don't have a Boat License!!"};
if(life_boatrentalInUse) exitWith {hintSilent "You can only rent one boat at a time!"};

_rentalAction = [format["Would you like to rent the boat for %1 minutes? It will cost you $%2.",[(_duration),"MM"] call BIS_fnc_secondsToString,_price],"Boat Rental",localize "STR_Global_YES",localize "STR_Global_NO"] call BIS_fnc_guiMessage;
if(_rentalAction) then {
  hintSilent "The purchase was sucessful, your boat is being deployed.!";
  life_boatrentalInUse = true;
  uiSleep 2;

  life_cash = life_cash - _price;
  _vehicle = createVehicle [_className, (getMarkerPos _spawnPoint), [], 0, "NONE"];
  waitUntil {!isNil "_vehicle"};
  _vehicle allowDamage false;
  _vehicle setPos (getMarkerPos _spawnPoint);
  _vehicle setDir (markerDir _spawnPoint);
  _vehicle engineOn true;
  _vehicle lock 2;
  _vehicle allowDamage true;

  _player allowDamage false;
  _player moveInDriver _vehicle;
  _player allowDamage true;
  _player setDamage 0;
  hintSilent format["Your boat is now ready! You have %1 minutes of playing time!",[(_duration),"MM"] call BIS_fnc_secondsToString];
  
  if(_timeKeeper == 1) then {
    _timeKeeper = 0;
    _wait = time + _duration;
    waitUntil {uiSleep 5; time >= _wait};
    _timeKeeper = 1;
    life_boatrentalDone = true;
    life_boatrentalInUse = false;
  };

  if(life_boatrentalDone) then {
    _vPlayer allowDamage false;
    uiSleep 0.2;
    deleteVehicle _vPlayer;
    _player setPos (getMarkerPos "boatrentalTimeOver");
    uiSleep 1;
    _player allowDamage true;
    _player setDamage 0;
    hintSilent "You have ran out of minutes! We hope you enjoyed!";
  };
};