class CfgPatches
{
	class jni_lbflares
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Air_F_Heli_Light_01"};
		version = "1";
		versionStr = "1.0.0";
		versionAr[] = {1,0,0};
		author[] = {"Jani Jesenovec"};
		authorUrl = "http://phantactical.com";
	};
};

class CfgVehicles
{
    class All {};
    class AllVehicles: All {};
    class Air: AllVehicles {};
    class Helicopter: Air {};
    class Helicopter_Base_F: Helicopter {};
    class Helicopter_Base_H: Helicopter_Base_F {};

    class Heli_Light_01_base_F: Helicopter_Base_H {
    	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlare_Chaff_Magazine"};
    };

    class Heli_Light_01_armed_base_F: Heli_Light_01_base_F {
    	weapons[] = {"M134_minigun","missiles_DAR","CMFlareLauncher"};
	magazines[] = {"5000Rnd_762x51_Belt","24Rnd_missiles","120Rnd_CMFlare_Chaff_Magazine"};
    };
};
