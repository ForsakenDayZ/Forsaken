class rksl_foxhound_lppv;
class Foxhound_D_FDZ: rksl_foxhound_lppv {
enableGPS = 1;
weapons[] = {
  "TruckHorn2"
};
soundGear[] = {
  "",
  5.62341e-005,
  1
};
soundGetIn[] = {
  "\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getin",
  1,
  1
};
soundGetOut[] = {
  "\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getout",
  1,
  1,
  30
};
soundEngineOnInt[] = {
  "\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-start-02",
  0.562341,
  1
};
soundEngineOnExt[] = {
  "\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-start-02",
  0.562341,
  1,
  250
};
soundEngineOffInt[] = {
  "\ca\sounds\vehicles\Wheeled\Armored_Vehicle\int\int-AV-stop-02",
  0.562341,
  1
};
soundEngineOffExt[] = {
  "\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-stop-02",
  0.562341,
  1,
  250
};
buildCrash0[] = {
  "Ca\sounds\Vehicles\Crash\crash_building_01",
  0.707946,
  1,
  200
};
buildCrash1[] = {
  "Ca\sounds\Vehicles\Crash\crash_building_02",
  0.707946,
  1,
  200
};
buildCrash2[] = {
  "Ca\sounds\Vehicles\Crash\crash_building_03",
  0.707946,
  1,
  200
};
buildCrash3[] = {
  "Ca\sounds\Vehicles\Crash\crash_building_04",
  0.707946,
  1,
  200
};
soundBuildingCrash[] = {
  "buildCrash0",
  0.25,
  "buildCrash1",
  0.25,
  "buildCrash2",
  0.25,
  "buildCrash3",
  0.25
};
WoodCrash0[] = {
  "Ca\sounds\Vehicles\Crash\crash_mix_wood_01",
  0.707946,
  1,
  200
};
WoodCrash1[] = {
  "Ca\sounds\Vehicles\Crash\crash_mix_wood_02",
  0.707946,
  1,
  200
};
WoodCrash2[] = {
  "Ca\sounds\Vehicles\Crash\crash_mix_wood_03",
  0.707946,
  1,
  200
};
WoodCrash3[] = {
  "Ca\sounds\Vehicles\Crash\crash_mix_wood_04",
  0.707946,
  1,
  200
};
WoodCrash4[] = {
  "Ca\sounds\Vehicles\Crash\crash_mix_wood_05",
  0.707946,
  1,
  200
};
WoodCrash5[] = {
  "Ca\sounds\Vehicles\Crash\crash_mix_wood_06",
  0.707946,
  1,
  200
};
soundWoodCrash[] = {
  "woodCrash0",
  0.166,
  "woodCrash1",
  0.166,
  "woodCrash2",
  0.166,
  "woodCrash3",
  0.166,
  "woodCrash4",
  0.166,
  "woodCrash5",
  0.166
};
ArmorCrash0[] = {
  "Ca\sounds\Vehicles\Crash\crash_vehicle_01",
  0.707946,
  1,
  200
};
ArmorCrash1[] = {
  "Ca\sounds\Vehicles\Crash\crash_vehicle_02",
  0.707946,
  1,
  200
};
ArmorCrash2[] = {
  "Ca\sounds\Vehicles\Crash\crash_vehicle_03",
  0.707946,
  1,
  200
};
ArmorCrash3[] = {
  "Ca\sounds\Vehicles\Crash\crash_vehicle_04",
  0.707946,
  1,
  200
};
soundArmorCrash[] = {
  "ArmorCrash0",
  0.25,
  "ArmorCrash1",
  0.25,
  "ArmorCrash2",
  0.25,
  "ArmorCrash3",
  0.25
};
class SoundEvents
{
  class AccelerationIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-acce-01",
	  0.562341,
	  1
	};
	limit = "0.15";
	expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
  };
  class AccelerationOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-acce-01",
	  0.562341,
	  1,
	  250
	};
	limit = "0.15";
	expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
  };
};
class Sounds
{
  class Engine
  {
	sound[] = {
	  "\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-engine-02low",
	  1.77828,
	  1,
	  300
	};
	frequency = "(randomizer*0.05+0.95)*rpm";
	volume = "engineOn*camPos*(thrust factor[0.7, 0.2])";
  };
  class EngineHighOut
  {
	sound[] = {
	  "\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-engine-02high",
	  1.77828,
	  0.9,
	  500
	};
	frequency = "(randomizer*0.05+0.95)*rpm";
	volume = "engineOn*camPos*(thrust factor[0.5, 0.9])";
  };
  class IdleOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-idle-02",
	  0.562341,
	  1,
	  230
	};
	frequency = "1";
	volume = "engineOn*camPos*(rpm factor[0.4, 0])";
  };
  class TiresRockOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*rock*(speed factor[2, 20])";
  };
  class TiresSandOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*sand*(speed factor[2, 20])";
  };
  class TiresGrassOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*grass*(speed factor[2, 20])";
  };
  class TiresMudOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*mud*(speed factor[2, 20])";
  };
  class TiresGravelOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*gravel*(speed factor[2, 20])";
  };
  class TiresAsphaltOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*asphalt*(speed factor[2, 20])";
  };
  class NoiseOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise3",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
  };
  class EngineLowIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-engine-02low",
	  1.77828,
	  1
	};
	frequency = "(randomizer*0.05+0.95)*rpm";
	volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
  };
  class EngineHighIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-engine-02high",
	  1.77828,
	  0.9
	};
	frequency = "(randomizer*0.05+0.95)*rpm";
	volume = "((engineOn*thrust) factor[0.55, 1.0])*(1-camPos)";
  };
  class IdleIn
  {
	sound[] = {
	  "\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-idle-02",
	  0.316228,
	  1
	};
	frequency = "1";
	volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
  };
  class TiresRockIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",
	  0.0562341,
	  1
	};
	frequency = "1";
	volume = "(1-camPos)*rock*(speed factor[2, 20])";
  };
  class TiresSandIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",
	  0.0562341,
	  1
	};
	frequency = "1";
	volume = "(1-camPos)*sand*(speed factor[2, 20])";
  };
  class TiresGrassIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",
	  0.0562341,
	  1
	};
	frequency = "1";
	volume = "(1-camPos)*grass*(speed factor[2, 20])";
  };
  class TiresMudIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",
	  0.0562341,
	  1
	};
	frequency = "1";
	volume = "(1-camPos)*mud*(speed factor[2, 20])";
  };
  class TiresGravelIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",
	  0.0562341,
	  1
	};
	frequency = "1";
	volume = "(1-camPos)*gravel*(speed factor[2, 20])";
  };
  class TiresAsphaltIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",
	  0.0562341,
	  1
	};
	frequency = "1";
	volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
  };
  class NoiseIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise4",
	  1,
	  1
	};
	frequency = "1";
	volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
  };
  class Movement
  {
	sound = "soundEnviron";
	frequency = "1";
	volume = "0";
  };
};
enableManualFire = 0;
};
class rksl_foxhound_lppv_wd;
class Foxhound_W_FDZ: rksl_foxhound_lppv_wd {
enableGPS = 1;
weapons[] = {
  "TruckHorn2"
};
soundGear[] = {
  "",
  5.62341e-005,
  1
};
soundGetIn[] = {
  "\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getin",
  1,
  1
};
soundGetOut[] = {
  "\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getout",
  1,
  1,
  30
};
soundEngineOnInt[] = {
  "\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-start-02",
  0.562341,
  1
};
soundEngineOnExt[] = {
  "\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-start-02",
  0.562341,
  1,
  250
};
soundEngineOffInt[] = {
  "\ca\sounds\vehicles\Wheeled\Armored_Vehicle\int\int-AV-stop-02",
  0.562341,
  1
};
soundEngineOffExt[] = {
  "\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-stop-02",
  0.562341,
  1,
  250
};
buildCrash0[] = {
  "Ca\sounds\Vehicles\Crash\crash_building_01",
  0.707946,
  1,
  200
};
buildCrash1[] = {
  "Ca\sounds\Vehicles\Crash\crash_building_02",
  0.707946,
  1,
  200
};
buildCrash2[] = {
  "Ca\sounds\Vehicles\Crash\crash_building_03",
  0.707946,
  1,
  200
};
buildCrash3[] = {
  "Ca\sounds\Vehicles\Crash\crash_building_04",
  0.707946,
  1,
  200
};
soundBuildingCrash[] = {
  "buildCrash0",
  0.25,
  "buildCrash1",
  0.25,
  "buildCrash2",
  0.25,
  "buildCrash3",
  0.25
};
WoodCrash0[] = {
  "Ca\sounds\Vehicles\Crash\crash_mix_wood_01",
  0.707946,
  1,
  200
};
WoodCrash1[] = {
  "Ca\sounds\Vehicles\Crash\crash_mix_wood_02",
  0.707946,
  1,
  200
};
WoodCrash2[] = {
  "Ca\sounds\Vehicles\Crash\crash_mix_wood_03",
  0.707946,
  1,
  200
};
WoodCrash3[] = {
  "Ca\sounds\Vehicles\Crash\crash_mix_wood_04",
  0.707946,
  1,
  200
};
WoodCrash4[] = {
  "Ca\sounds\Vehicles\Crash\crash_mix_wood_05",
  0.707946,
  1,
  200
};
WoodCrash5[] = {
  "Ca\sounds\Vehicles\Crash\crash_mix_wood_06",
  0.707946,
  1,
  200
};
soundWoodCrash[] = {
  "woodCrash0",
  0.166,
  "woodCrash1",
  0.166,
  "woodCrash2",
  0.166,
  "woodCrash3",
  0.166,
  "woodCrash4",
  0.166,
  "woodCrash5",
  0.166
};
ArmorCrash0[] = {
  "Ca\sounds\Vehicles\Crash\crash_vehicle_01",
  0.707946,
  1,
  200
};
ArmorCrash1[] = {
  "Ca\sounds\Vehicles\Crash\crash_vehicle_02",
  0.707946,
  1,
  200
};
ArmorCrash2[] = {
  "Ca\sounds\Vehicles\Crash\crash_vehicle_03",
  0.707946,
  1,
  200
};
ArmorCrash3[] = {
  "Ca\sounds\Vehicles\Crash\crash_vehicle_04",
  0.707946,
  1,
  200
};
soundArmorCrash[] = {
  "ArmorCrash0",
  0.25,
  "ArmorCrash1",
  0.25,
  "ArmorCrash2",
  0.25,
  "ArmorCrash3",
  0.25
};
class SoundEvents
{
  class AccelerationIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-acce-01",
	  0.562341,
	  1
	};
	limit = "0.15";
	expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
  };
  class AccelerationOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-acce-01",
	  0.562341,
	  1,
	  250
	};
	limit = "0.15";
	expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
  };
};
class Sounds
{
  class Engine
  {
	sound[] = {
	  "\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-engine-02low",
	  1.77828,
	  1,
	  300
	};
	frequency = "(randomizer*0.05+0.95)*rpm";
	volume = "engineOn*camPos*(thrust factor[0.7, 0.2])";
  };
  class EngineHighOut
  {
	sound[] = {
	  "\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-engine-02high",
	  1.77828,
	  0.9,
	  500
	};
	frequency = "(randomizer*0.05+0.95)*rpm";
	volume = "engineOn*camPos*(thrust factor[0.5, 0.9])";
  };
  class IdleOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-idle-02",
	  0.562341,
	  1,
	  230
	};
	frequency = "1";
	volume = "engineOn*camPos*(rpm factor[0.4, 0])";
  };
  class TiresRockOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*rock*(speed factor[2, 20])";
  };
  class TiresSandOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*sand*(speed factor[2, 20])";
  };
  class TiresGrassOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*grass*(speed factor[2, 20])";
  };
  class TiresMudOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*mud*(speed factor[2, 20])";
  };
  class TiresGravelOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*gravel*(speed factor[2, 20])";
  };
  class TiresAsphaltOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*asphalt*(speed factor[2, 20])";
  };
  class NoiseOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise3",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
  };
  class EngineLowIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-engine-02low",
	  1.77828,
	  1
	};
	frequency = "(randomizer*0.05+0.95)*rpm";
	volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
  };
  class EngineHighIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-engine-02high",
	  1.77828,
	  0.9
	};
	frequency = "(randomizer*0.05+0.95)*rpm";
	volume = "((engineOn*thrust) factor[0.55, 1.0])*(1-camPos)";
  };
  class IdleIn
  {
	sound[] = {
	  "\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-idle-02",
	  0.316228,
	  1
	};
	frequency = "1";
	volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
  };
  class TiresRockIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",
	  0.0562341,
	  1
	};
	frequency = "1";
	volume = "(1-camPos)*rock*(speed factor[2, 20])";
  };
  class TiresSandIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",
	  0.0562341,
	  1
	};
	frequency = "1";
	volume = "(1-camPos)*sand*(speed factor[2, 20])";
  };
  class TiresGrassIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",
	  0.0562341,
	  1
	};
	frequency = "1";
	volume = "(1-camPos)*grass*(speed factor[2, 20])";
  };
  class TiresMudIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",
	  0.0562341,
	  1
	};
	frequency = "1";
	volume = "(1-camPos)*mud*(speed factor[2, 20])";
  };
  class TiresGravelIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",
	  0.0562341,
	  1
	};
	frequency = "1";
	volume = "(1-camPos)*gravel*(speed factor[2, 20])";
  };
  class TiresAsphaltIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",
	  0.0562341,
	  1
	};
	frequency = "1";
	volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
  };
  class NoiseIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise4",
	  1,
	  1
	};
	frequency = "1";
	volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
  };
  class Movement
  {
	sound = "soundEnviron";
	frequency = "1";
	volume = "0";
  };
};
enableManualFire = 0;
};
