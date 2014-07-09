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

class Extended_PostInit_EventHandlers
{
	pmt_flare_post_init = "pmt_flare_post_init_variable = [] execVM ""pmt_lbflares\pmt_flareinit.sqf""";
};