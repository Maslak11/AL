/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "scripts\removesnakes.sqf";
[] execVM "KRON_Strings.sqf";
[] execVM "derleon\vis\Setup.sqf";

StartProgress = true;