_missionVehiclesAndObjects = vehicles;
_numberOfObjects = count _missionVehiclesAndObjects;
//y u no arma 2?!?!?! arma 2 has 666 and women yay
//y u do arma 3?!?!?
countVar = 0;
while {countVar < _numberOfObjects} do {
	_vehicle = (_missionVehiclesAndObjects select countVar);
	if ((typeOf _vehicle) == "B_Heli_Light_01_armed_F") then {
		_vehicle addweaponglobal "CMFlareLauncher";
		{_vehicle addmagazineglobal "120Rnd_CMFlare_Chaff_Magazine"} forEach [1];
	};
	countVar = countVar + 1;
};
