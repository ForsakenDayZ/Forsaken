/*
Modified by Torndeco for DayZ Epoch
All credits & rights go to =BTC= Giallustio
Please don't bug original author about bugs that i have introduced.
*/


/*
Created by =BTC= Giallustio
Version: 0.52
Date: 05/02/2012
Visit us at: http://www.blacktemplars.altervista.org/
You are not allowed to modify this file and redistribute it without permission given by me (Giallustio).
*/

private ["_vel","_name_cargo","_chopper","_cargo","_cantsee"];
_chopper   = vehicle player;
_cargo = _chopper getVariable "BTC Lift Object";


_cantsee = lineIntersects [getposASL(_chopper), getposASL(_cargo), _chopper, _cargo];

if (!_cantsee) then {
	BTC_lifted = 0;
	_chopper removeAction BTC_SganciaActionId;
	detach _cargo;
	_vel =  velocity _chopper;
	_cargo setVelocity _vel;
	_cargo lock false;
	_cargo setVehicleLock "UNLOCKED";	// Enable players to re-enter the vehicle now it has been detached.
				PVDZE_veh_Lock = [_cargo,false];
					if (local _cargo) then {
						PVDZE_veh_Lock spawn local_lockUnlock
					} else {
						publicVariable "PVDZE_veh_Lock";
					};	
	_cargo setVariable ["Towed", false, true];
	_name_cargo  = getText (configFile >> "cfgVehicles" >> typeof _cargo >> "displayName");
	vehicle player vehicleChat format ["%1 dropped", _name_cargo];
	[_chopper, _cargo, "ParachuteWest"] spawn BTC_paradrop;

	
	sleep 60;
	//force save
	PVDZE_veh_Update = [_vehicle, "all"];
	publicVariableServer "PVDZE_veh_Update";
	//force save

};
