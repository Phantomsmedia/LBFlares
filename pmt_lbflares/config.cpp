class CfgPatches
{
	class pmt_lbflares
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"CBA_MAIN", "A3_Air_F_Heli_Light_01"};		//cfgPatcges names of CBA and BI's Littlebird Armed
		version = "1";
		versionStr = "1.0.0";
		versionAr[] = {1,0,0};
		author[] = {"Jani Jesenovec"};
		authorUrl = "http://phantactical.com";
	};
};

class Extended_Init_EventHandlers
{
    class B_Heli_Light_01_armed_F
    {
        jani_customLB_init = "_this spawn jani_fnc_customLB_init";
    };
};
class CfgFunctions
{
    class Jani
    {
        class customLB
        {
            class customLB_init
            {
                file = "jani_customlb\jani_customlbinit.sqf";
            };
        };
    };
};
