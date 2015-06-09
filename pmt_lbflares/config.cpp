class CfgPatches
{
	class jni_lbflares
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

class CfgVehicles
{
    class Helicopter_Base_H;
    class Heli_Light_01_base_F: Helicopter_Base_H {
    
    };
    class Heli_Light_01_armed_base_F: Heli_Light_01_base_F {
        
		weapons[] += {"CMFlareLauncher"};
		magazines[] += {"120Rnd_CMFlare_Chaff_Magazine"};
		
		};
};