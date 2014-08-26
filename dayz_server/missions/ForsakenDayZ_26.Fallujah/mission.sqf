if (isServer) then {

  //Aircraft
  call compile preProcessFileLineNumbers "\z\addons\dayz_server\missions\ForsakenDayZ_26.Fallujah\Airfield.sqf";
  //Static Traders
  call compile preProcessFileLineNumbers "\z\addons\dayz_server\missions\ForsakenDayZ_26.Fallujah\StaticTraders.sqf";


};

/*---------------------------------------------------------------------------

                        BEGIN TRADER PLACEMENT
                        AUTHOR: Sweets

---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------

                        BEGIN VEHICLE TRADER

---------------------------------------------------------------------------*/

_unit_212 = objNull;
if (true) then
{
  _this = createAgent ["EGangsta_merc5", [3729.687, 2371.9771, -7.1525574e-006], [], 0, "CAN_COLLIDE"];
  {_this removeMagazine _x;} count  magazines _this;
  removeAllWeapons _this;
  _this switchMove "";
  _unit_212 = _this;
  _this setDir 119.40434;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; 
  _this disableAI 'FSM'; 
  _this disableAI 'MOVE'; 
  _this disableAI 'AUTOTARGET'; 
  _this disableAI 'TARGET'; 
  _this setBehaviour 'CARELESS';
  _this forceSpeed 0;
  _this enableSimulation false;
  };
_unit_213 = objNull;
if (true) then
{
  _this = createAgent ["EGangsta_merc5", [5350.6523, 7182.272, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  {_this removeMagazine _x;} count  magazines _this;
  removeAllWeapons _this;
  _this switchMove "";
  _unit_213 = _this;
  _this setDir 36.308014;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; 
  _this disableAI 'FSM'; 
  _this disableAI 'MOVE'; 
  _this disableAI 'AUTOTARGET'; 
  _this disableAI 'TARGET'; 
  _this setBehaviour 'CARELESS';
  _this forceSpeed 0;
  _this enableSimulation false;
  };
/*---------------------------------------------------------------------------

                        END VEHICLE TRADER
                                &
                        BEGIN AIRCRAFT TRADER

---------------------------------------------------------------------------*/

_unit_112 = objNull;
if (true) then
{
  _this = createAgent ["pook_CDF_H13_Pilot", [7990.7319, 6881.4395, 2.3841858e-005], [], 0, "CAN_COLLIDE"];
  {_this removeMagazine _x;} count  magazines _this;
  removeAllWeapons _this;
  _this switchMove "";
  _unit_112 = _this;
  _this setDir 116.53647;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; 
  _this disableAI 'FSM'; 
  _this disableAI 'MOVE'; 
  _this disableAI 'AUTOTARGET'; 
  _this disableAI 'TARGET'; 
  _this setBehaviour 'CARELESS';
  _this forceSpeed 0;
  _this enableSimulation false;
  };

/*---------------------------------------------------------------------------

                        END AIRCRAFT TRADER
                                &
                        BEGIN HERO TRADER

---------------------------------------------------------------------------*/

_unit_128 = objNull;
if (true) then
{
  _this = createAgent ["Mercenary_Default19", [1110.515, 2858.2896, 2.3841858e-005], [], 0, "CAN_COLLIDE"];
  {_this removeMagazine _x;} count  magazines _this;
  removeAllWeapons _this;
  _this switchMove "";
  _unit_128 = _this;
  _this setDir -267.36197;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; 
  _this disableAI 'FSM'; 
  _this disableAI 'MOVE'; 
  _this disableAI 'AUTOTARGET'; 
  _this disableAI 'TARGET'; 
  _this setBehaviour 'CARELESS';
  _this forceSpeed 0;
  _this enableSimulation false;
  };

/*---------------------------------------------------------------------------

                        END HERO TRADER
								&
                        BEGIN SUPPLIES TRADER

---------------------------------------------------------------------------*/

_unit_100 = objNull;
if (true) then
{
  _this = createAgent ["Citizen2", [3739.344, 2395.8921, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  {_this removeMagazine _x;} count  magazines _this;
  removeAllWeapons _this;
  _this switchMove "";
  _unit_100 = _this;
  _this setDir -65.518379;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; 
  _this disableAI 'FSM'; 
  _this disableAI 'MOVE'; 
  _this disableAI 'AUTOTARGET'; 
  _this disableAI 'TARGET'; 
  _this setBehaviour 'CARELESS';
  _this forceSpeed 0;
  _this enableSimulation false;
  };
_unit_200 = objNull;
if (true) then
{
  _this = createAgent ["Citizen2", [5345.5786, 7164.8398, 0.00015258789], [], 0, "CAN_COLLIDE"];
  {_this removeMagazine _x;} count  magazines _this;
  removeAllWeapons _this;
  _this switchMove "";
  _unit_200 = _this;
  _this setDir 32.785282;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; 
  _this disableAI 'FSM'; 
  _this disableAI 'MOVE'; 
  _this disableAI 'AUTOTARGET'; 
  _this disableAI 'TARGET'; 
  _this setBehaviour 'CARELESS';
  _this forceSpeed 0;
  _this enableSimulation false;
  };
/*---------------------------------------------------------------------------

                        END SUPPLIES TRADER
								&
                        BEGIN WEAPONS TRADER

---------------------------------------------------------------------------*/
_unit_101 = objNull;
if (true) then
{
  _this = createAgent ["bink_usmc_light_des", [3676.6895, 2395.4587], [], 0, "CAN_COLLIDE"];
  {_this removeMagazine _x;} count  magazines _this;
  removeAllWeapons _this;
  _this switchMove "";
  _unit_101 = _this;
  _this setDir 111.252;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; 
  _this disableAI 'FSM'; 
  _this disableAI 'MOVE'; 
  _this disableAI 'AUTOTARGET'; 
  _this disableAI 'TARGET'; 
  _this setBehaviour 'CARELESS';
  _this forceSpeed 0;
  _this enableSimulation false;
  };
  _unit_201 = objNull;
if (true) then
{
  _this = createAgent ["bink_usmc_light_des", [5354.8955, 7168.9199], [], 0, "CAN_COLLIDE"];
  {_this removeMagazine _x;} count  magazines _this;
  removeAllWeapons _this;
  _this switchMove "";
  _unit_201 = _this;
  _this setDir -73.678703;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; 
  _this disableAI 'FSM'; 
  _this disableAI 'MOVE'; 
  _this disableAI 'AUTOTARGET'; 
  _this disableAI 'TARGET'; 
  _this setBehaviour 'CARELESS';
  _this forceSpeed 0;
  _this enableSimulation false;
  };
/*---------------------------------------------------------------------------

                        END WEAPONS TRADER
								&
                        BEGIN AMMO TRADER

---------------------------------------------------------------------------*/
_unit_102 = objNull;
if (true) then
{
  _this = createAgent ["bink_usmc_scout_l_des", [3677.7549, 2397.0464, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  {_this removeMagazine _x;} count  magazines _this;
  removeAllWeapons _this;
  _this switchMove "";
  _unit_102 = _this;
  _this setDir 127.5757;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; 
  _this disableAI 'FSM'; 
  _this disableAI 'MOVE'; 
  _this disableAI 'AUTOTARGET'; 
  _this disableAI 'TARGET'; 
  _this setBehaviour 'CARELESS';
  _this forceSpeed 0;
  _this enableSimulation false;
  };
  
 _unit_202 = objNull;
if (true) then
{
  _this = createAgent ["bink_usmc_scout_l_des", [5354.582, 7166.8623, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  {_this removeMagazine _x;} count  magazines _this;
  removeAllWeapons _this;
  _this switchMove "";
  _unit_202 = _this;
  _this setDir -79.715286;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; 
  _this disableAI 'FSM'; 
  _this disableAI 'MOVE'; 
  _this disableAI 'AUTOTARGET'; 
  _this disableAI 'TARGET'; 
  _this setBehaviour 'CARELESS';
  _this forceSpeed 0;
  _this enableSimulation false;
  };
/*---------------------------------------------------------------------------

                        END AMMO TRADER
								&
                        BEGIN FOOD TRADER

---------------------------------------------------------------------------*/
_unit_103 = objNull;
if (true) then
{
  _this = createAgent ["Hooker4", [3655.9473, 2405.9102], [], 0, "CAN_COLLIDE"];
  {_this removeMagazine _x;} count  magazines _this;
  removeAllWeapons _this;
  _this switchMove "";
  _unit_103 = _this;
  _this setDir -79.511444;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; 
  _this disableAI 'FSM'; 
  _this disableAI 'MOVE'; 
  _this disableAI 'AUTOTARGET'; 
  _this disableAI 'TARGET'; 
  _this setBehaviour 'CARELESS';
  _this forceSpeed 0;
  _this enableSimulation false;
  };
  _unit_203 = objNull;
if (true) then
{
  _this = createAgent ["Hooker4", [5344.5449, 7179.9546, -0.00012207031], [], 0, "CAN_COLLIDE"];
  {_this removeMagazine _x;} count  magazines _this;
  removeAllWeapons _this;
  _this switchMove "";
  _unit_203 = _this;
  _this setDir -234.92792;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; 
  _this disableAI 'FSM'; 
  _this disableAI 'MOVE'; 
  _this disableAI 'AUTOTARGET'; 
  _this disableAI 'TARGET'; 
  _this setBehaviour 'CARELESS';
  _this forceSpeed 0;
  _this enableSimulation false;
  };
/*---------------------------------------------------------------------------

                        END FOOD TRADER
								&
                        BEGIN MEDICAL TRADER

---------------------------------------------------------------------------*/
_unit_104 = objNull;
if (true) then
{
  _this = createAgent ["pook_Doc_Bell47", [3655.1533, 2397.8867, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  {_this removeMagazine _x;} count  magazines _this;
  removeAllWeapons _this;
  _this switchMove "";
  _unit_104 = _this;
  _this setDir -53.477844;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; 
  _this disableAI 'FSM'; 
  _this disableAI 'MOVE'; 
  _this disableAI 'AUTOTARGET'; 
  _this disableAI 'TARGET'; 
  _this setBehaviour 'CARELESS';
  _this forceSpeed 0;
  _this enableSimulation false;
  };
  _unit_204 = objNull;
if (true) then
{
  _this = createAgent ["pook_Doc_Bell47", [5342.8906, 7171.8091, -9.1552734e-005], [], 0, "CAN_COLLIDE"];
  {_this removeMagazine _x;} count  magazines _this;
  removeAllWeapons _this;
  _this switchMove "";
  _unit_204 = _this;
  _this setDir -281.32178;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; 
  _this disableAI 'FSM'; 
  _this disableAI 'MOVE'; 
  _this disableAI 'AUTOTARGET'; 
  _this disableAI 'TARGET'; 
  _this setBehaviour 'CARELESS';
  _this forceSpeed 0;
  _this enableSimulation false;
  };
/*---------------------------------------------------------------------------

                        END MEDICAL TRADER
								&
                        BEGIN BANDIT TRADER

---------------------------------------------------------------------------*/
_unit_105 = objNull;
if (true) then
{
  _this = createAgent ["Gangsta_merc2", [4068.5271, 8040.2646], [], 0, "CAN_COLLIDE"];
  {_this removeMagazine _x;} count  magazines _this;
  removeAllWeapons _this;
  _this switchMove "";
  _unit_105 = _this;
  _this setDir -101.14314;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; 
  _this disableAI 'FSM'; 
  _this disableAI 'MOVE'; 
  _this disableAI 'AUTOTARGET'; 
  _this disableAI 'TARGET'; 
  _this setBehaviour 'CARELESS';
  _this forceSpeed 0;
  _this enableSimulation false;
  };

/*---------------------------------------------------------------------------

                        END BANDIT TRADER

---------------------------------------------------------------------------*/

processInitCommands;
