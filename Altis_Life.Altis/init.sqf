/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";

StartProgress = true;
emergLight_vehicles = [];
{
 emergLight_vehicles pushBack (configName _x);
} forEach ("true" configClasses (missionConfigFile >> "emergLightVehicles"));