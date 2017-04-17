#include "player_sys.sqf"
class playerSettings {
 idd = playersys_DIALOG;
 movingEnable = 1;
 enableSimulation = 1;
 class controlsBackground {
 class BackgroundOben: Life_RscText {
 colorBackground[] = {0.251,0.251,0.251,1};
 idc = -1;
 x = 0.180053 * safezoneW + safezoneX;
 y = 0.0749805 * safezoneH + safezoneY;
 w = 0.639894 * safezoneW;
 h = 0.0680031 * safezoneH;
 };
 class MainBackgroundDown: Life_RscText {
 colorBackground[] = {0.251,0.251,0.251,1};
 idc = -1;
 x = 0.180053 * safezoneW + safezoneX;
 y = 0.823014 * safezoneH + safezoneY;
 w = 0.639894 * safezoneW;
 h = 0.102005 * safezoneH;
 };
 class MainBackground: Life_RscPicture {
 text = "textures\background.jpg";
 idc = -1;
 x = 0.180053 * safezoneW + safezoneX;
 y = 0.142984 * safezoneH + safezoneY;
 w = 0.639894 * safezoneW;
 h = 0.680031 * safezoneH;
 };
 class Title: Life_RscText {
 colorBackground[] = {0, 0, 0, 0};
 idc = -1;
 text = "Dashboard";
 x = 0.19765 * safezoneW + safezoneX;
 y = 0.0885811 * safezoneH + safezoneY;
 w = 0.188769 * safezoneW;
 h = 0.044202 * safezoneH;
 };
 class moneyStatusInfo: Life_RscStructuredText {
 idc = 2015;
 sizeEx = 0.020;
 text = "";
 x = 0.19605 * safezoneW + safezoneX;
 y = 0.176985 * safezoneH + safezoneY;
 w = 0.271955 * safezoneW;
 h = 0.204009 * safezoneH;
 };
 };
 class controls {
 class itemList: Life_RscListBox {
 idc = item_list;
 sizeEx = 0.030;
 x = 0.627979 * safezoneW + safezoneX;
 y = 0.176985 * safezoneH + safezoneY;
 w = 0.175971 * safezoneW;
 h = 0.377417 * safezoneH;
 };
 class moneyEdit: Life_RscEdit {
 idc = 2018;
 text = "1";
 sizeEx = 0.030;
 x = 0.19605 * safezoneW + safezoneX;
 y = 0.482999 * safezoneH + safezoneY;
 w = 0.271955 * safezoneW;
 h = 0.0340016 * safezoneH;
 };
 class NearPlayers: Life_RscCombo {
 idc = 2022;
 x = 0.19605 * safezoneW + safezoneX;
 y = 0.414996 * safezoneH + safezoneY;
 w = 0.271955 * safezoneW;
 h = 0.0340016 * safezoneH;
 };
 class moneyDrop: Life_RscButtonMenu {
 idc = 2001;
 text = "Geld";
 colorBackground[] = {0,1,0.898,1};
 onButtonClick = "[] call life_fnc_giveMoney";
 sizeEx = 0.025;
 tooltip = "Geld geben";
 x = 0.19605 * safezoneW + safezoneX;
 y = 0.551002 * safezoneH + safezoneY;
 w = 0.127979 * safezoneW;
 h = 0.0340016 * safezoneH;
 };
 class itemEdit: Life_RscEdit {
 idc = item_edit;
 text = "1";
 sizeEx = 0.030;
 x = 0.627979 * safezoneW + safezoneX;
 y = 0.585004 * safezoneH + safezoneY;
 w = 0.175971 * safezoneW;
 h = 0.0340016 * safezoneH;
 };
 class iNearPlayers: Life_RscCombo {
 idc = 2023;
 x = 0.627979 * safezoneW + safezoneX;
 y = 0.653007 * safezoneH + safezoneY;
 w = 0.175971 * safezoneW;
 h = 0.0340016 * safezoneH;
 };
 class DropButton: Life_RscButtonMenu {
 idc = 2002;
 text = "Item";
 colorBackground[] = {0,1,0.898,1};
 onButtonClick = "[] call life_fnc_giveItem;";
 tooltip = "Gegenstand geben";
 x = 0.340026 * safezoneW + safezoneX;
 y = 0.551002 * safezoneH + safezoneY;
 w = 0.127979 * safezoneW;
 h = 0.0340016 * safezoneH;
 };
 class UseButton: Life_RscButtonMenu {
 text = "Nehmen";
 colorBackground[] = {0,1,0.898,1};
 onButtonClick = "[] call life_fnc_useItem;";
 x = 0.627979 * safezoneW + safezoneX;
 y = 0.704009 * safezoneH + safezoneY;
 w = 0.175971 * safezoneW;
 h = 0.0340016 * safezoneH;
 };
 class RemoveButton: Life_RscButtonMenu {
 text = "Entfernen";
 colorBackground[] = {0,1,0.898,1};
 onButtonClick = "[] call life_fnc_removeItem;";
 x = 0.627979 * safezoneW + safezoneX;
 y = 0.755012 * safezoneH + safezoneY;
 w = 0.175971 * safezoneW;
 h = 0.0340016 * safezoneH;
 };
 // bis hier editiert
 class ButtonClose: Life_RscButtonMenu {
 idc = -1;
 //shortcuts[] = {0x00050000 + 2};
 text = "Schliessen";
 onButtonClick = "closeDialog 0;";
 x = 0.19605 * safezoneW + safezoneX;
 y = 0.846816 * safezoneH + safezoneY;
 w = 0.127979 * safezoneW;
 h = 0.0544025 * safezoneH;
 };
 class ButtonSettings: Life_RscButtonMenu {
 idc = -1;
 text = "Einstellungen";
 onButtonClick = "[] call life_fnc_settingsMenu;";
 x = 0.19605 * safezoneW + safezoneX;
 y = 0.629206 * safezoneH + safezoneY;
 w = 0.127979 * safezoneW;
 h = 0.0544025 * safezoneH;
 };
 class ButtonMyGang: Life_RscButtonMenu {
 idc = 2011;
 text = "Gang";
 onButtonClick = "if (isNil ""life_action_gangInUse"") then {if (isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
 x = 0.19605 * safezoneW + safezoneX;
 y = 0.693809 * safezoneH + safezoneY;
 w = 0.127979 * safezoneW;
 h = 0.0544025 * safezoneH;
 };
 class Licenses_Menu : Life_RscControlsGroup {
 idc = -1;
 x = 0.484003 * safezoneW + safezoneX;
 y = 0.176985 * safezoneH + safezoneY;
 w = 0.127979 * safezoneW;
 h = 0.374017 * safezoneH;
 class Controls {
 class Life_Licenses: Life_RscStructuredText {
 idc = 2014;
 sizeEx = 0.020;
 text = "";
 x = 0.484003 * safezoneW + safezoneX;
 y = 0.176985 * safezoneH + safezoneY;
 w = 0.127979 * safezoneW;
 h = 0.374017 * safezoneH;
 };
 };
 };
 class ButtonGangList: Life_RscButtonMenu {
 idc = 2012;
 text = "Fahndung";
 onButtonClick = "[] call life_fnc_wantedMenu";
 x = 0.340026 * safezoneW + safezoneX;
 y = 0.693809 * safezoneH + safezoneY;
 w = 0.127979 * safezoneW;
 h = 0.0544025 * safezoneH;
 };
 class ButtonKeys: Life_RscButtonMenu {
 idc = 2013;
 text = "Schluessel";
 onButtonClick = "createDialog ""Life_key_management"";";
 x = 0.19605 * safezoneW + safezoneX;
 y = 0.755012 * safezoneH + safezoneY;
 w = 0.127979 * safezoneW;
 h = 0.0544025 * safezoneH;
 };
 class ButtonCell: Life_RscButtonMenu {
 idc = 2014;
 text = "Telefon";
 onButtonClick = "createDialog ""Life_cell_phone"";";
 x = 0.340026 * safezoneW + safezoneX;
 y = 0.629206 * safezoneH + safezoneY;
 w = 0.127979 * safezoneW;
 h = 0.0544025 * safezoneH;
 };
 class ButtonAdminMenu: Life_RscButtonMenu {
 idc = 2021;
 text = "Rechte";
 onButtonClick = "createDialog ""life_admin_menu"";";
 x = 0.340026 * safezoneW + safezoneX;
 y = 0.755012 * safezoneH + safezoneY;
 w = 0.127979 * safezoneW;
 h = 0.0544025 * safezoneH;
 };
 class ButtonSyncData: Life_RscButtonMenu {
 idc = -1;
 //shortcuts[] = {0x00050000 + 2};
 text = "Speichern";
 colorBackground[] = {1,0,0,1};
 onButtonClick = "[] call SOCK_fnc_syncData;";
 x = 0.675971 * safezoneW + safezoneX;
 y = 0.846816 * safezoneH + safezoneY;
 w = 0.127979 * safezoneW;
 h = 0.0544025 * safezoneH;
 };
 };
};