class Mode_SemiAuto
{
	multiplier = 1;
	burst = 1;
	dispersion = 0.0002;
	sound[] = {"",10,1};
	soundBegin[] = {"sound",1};
	soundEnd[] = {};
	soundLoop[] = {};
	soundContinuous = 0;
	soundBurst = 1;
	reloadTime = 0.1;
	ffCount = 1;
	ffMagnitude = 0.5;
	ffFrequency = 11;
	flash = "gunfire";
	flashSize = 0.1;
	recoil = "Empty";
	recoilProne = "Empty";
	autoFire = 0;
	aiRateOfFire = 0.5;
	aiRateOfFireDistance = 500;
	useAction = 0;
	useActionTitle = "";
	showToPlayer = 1;
	minRange = 30;
	minRangeProbab = 0.25;
	midRange = 300;
	midRangeProbab = 0.58;
	maxRange = 600;
	maxRangeProbab = 0.04;
	artilleryDispersion = 1;
	artilleryCharge = 1;
	displayName = "Semi";
};
class Mode_Burst: Mode_SemiAuto
{
	sound[] = {"",10,1};
	soundLoop[] = {"sound",1};
	soundEnd[] = {"sound",1};
	soundBurst = 1;
	burst = 3;
	dispersion = 0.0005;
	minRange = 10;
	minRangeProbab = 0.3;
	midRange = 60;
	midRangeProbab = 0.58;
	maxRange = 150;
	maxRangeProbab = 0.04;
	displayName = "Burst";
};
class Mode_FullAuto: Mode_SemiAuto
{
	dispersion = 0.0005;
	sound[] = {"",10,1};
	soundEnd[] = {"sound",1};
	soundContinuous = 0;
	reloadTime = 0.08;
	autoFire = 1;
	minRange = 1;
	minRangeProbab = 0.2;
	midRange = 30;
	midRangeProbab = 0.58;
	maxRange = 80;
	maxRangeProbab = 0.04;
	displayName = "Full";
};
class CfgWeapons { 	
	class Pecheneg;
	class Pecheneg_DZ: Pecheneg {
		type = "1";
	};
	class PK;
	class PK_DZ: PK {
		type = "1";
	};
	class USSR_cheytacM200;
	class USSR_cheytacM200_FDZ: USSR_cheytacM200 {
		type = "1";
	};
	class USSR_cheytacM200_sd;
	class USSR_cheytacM200_sd_FDZ: USSR_cheytacM200_sd {
		type = "1";
	};
class BAF_L110A1_Aim;
class BAF_L110A1_Aim_FDZ: BAF_L110A1_Aim {
  type = "1";
};
class BAF_L7A2_GPMG;
class BAF_L7A2_GPMG_FDZ: BAF_L7A2_GPMG {
  type = "1";
};
class M240;
class M240_FDZ: M240 {
  type = "1";
};
class M249;
class M249_FDZ: M249 {
  type = "1";
};
class Mcno_M249_m145_EP1_white;
class Mcno_M249_m145_EP1_white_FDZ: Mcno_M249_m145_EP1_white {
  type = "1";
};
class MG36;
class MG36_FDZ: MG36 {
  type = "1";
};
class MG36_camo;
class MG36_camo_FDZ: MG36_camo {
  type = "1";
};
class Mk_48_DES_EP1;
class Mk_48_DES_EP1_FDZ: Mk_48_DES_EP1 {
  type = "1";
};
class RH_M249;
class RH_M249_FDZ: RH_M249 {
  type = "1";
};
class RH_M249acog;
class RH_M249acog_FDZ: RH_M249acog {
  type = "1";
};
class RH_M249elcan;
class RH_M249elcan_FDZ: RH_M249elcan {
  type = "1";
};
class RH_M249p;
class RH_M249p_FDZ: RH_M249p {
  type = "1";
};
class RH_M249pacog;
class RH_M249pacog_FDZ: RH_M249pacog {
  type = "1";
};
class RH_M249pelcan;
class RH_M249pelcan_FDZ: RH_M249pelcan {
  type = "1";
};
class RH_M60E4;
class RH_M60E4_FDZ: RH_M60E4 {
  type = "1";
};
class RH_M60E4_ACOG;
class RH_M60E4_ACOG_FDZ: RH_M60E4_ACOG {
  type = "1";
};
class RH_M60E4_ELCAN;
class RH_M60E4_ELCAN_FDZ: RH_M60E4_ELCAN {
  type = "1";
};
class RH_M60E4_EOTECH;
class RH_M60E4_EOTECH_FDZ: RH_M60E4_EOTECH {
  type = "1";
};
class RH_MK43;
class RH_MK43_FDZ: RH_MK43 {
  type = "1";
};
class RH_MK43_ACOG;
class RH_MK43_ACOG_FDZ: RH_MK43_ACOG {
  type = "1";
};
class RH_MK43_ELCAN;
class RH_MK43_ELCAN_FDZ: RH_MK43_ELCAN {
  type = "1";
};
class RH_MK43_EOTECH;
class RH_MK43_EOTECH_FDZ: RH_MK43_EOTECH {
  type = "1";
};
class RH_Mk48mod1;
class RH_Mk48mod1_FDZ: RH_Mk48mod1 {
  type = "1";
};
class RH_Mk48mod1acog;
class RH_Mk48mod1acog_FDZ: RH_Mk48mod1acog {
  type = "1";
};
class RH_Mk48mod1elcan;
class RH_Mk48mod1elcan_FDZ: RH_Mk48mod1elcan {
  type = "1";
};
class RH_rpk47;
class RH_rpk47_FDZ: RH_rpk47 {
  type = "1";
};
class RH_rpk74;
class RH_rpk74_FDZ: RH_rpk74 {
  type = "1";
};
class RH_rpk74m;
class RH_rpk74m_FDZ: RH_rpk74m {
  type = "1";
};
class RPK_74;
class RPK_74_FDZ: RPK_74 {
  type = "1";
};
class RPK_74_Large;
class RPK_74_Large_FDZ: RPK_74_Large {
  type = "1";
};
class ukf_gpmg;
class ukf_gpmg_FDZ: ukf_gpmg {
  type = "1";
};
class ukf_gpmg_fgrip;
class ukf_gpmg_fgrip_FDZ: ukf_gpmg_fgrip {
  type = "1";
};
class ukf_L86A2LSW;
class ukf_L86A2LSW_FDZ: ukf_L86A2LSW {
  type = "1";
};
class ukf_L86A2LSW_fgrip;
class ukf_L86A2LSW_fgrip_FDZ: ukf_L86A2LSW_fgrip {
  type = "1";
};
class ukf_L86A2LSW_susat;
class ukf_L86A2LSW_susat_FDZ: ukf_L86A2LSW_susat {
  type = "1";
};
class ukf_L86A2LSW_susat_fgrip;
class ukf_L86A2LSW_susat_fgrip_FDZ: ukf_L86A2LSW_susat_fgrip {
  type = "1";
};
class ukf_lmg;
class ukf_lmg_FDZ: ukf_lmg {
  type = "1";
};
class ukf_lmg_ACOG;
class ukf_lmg_ACOG_FDZ: ukf_lmg_ACOG {
  type = "1";
};
class ukf_lmg_ACOG_fgrip;
class ukf_lmg_ACOG_fgrip_FDZ: ukf_lmg_ACOG_fgrip {
  type = "1";
};
class ukf_lmg_fgrip;
class ukf_lmg_fgrip_FDZ: ukf_lmg_fgrip {
  type = "1";
};
class ukf_lmg_SUSAT;
class ukf_lmg_SUSAT_FDZ: ukf_lmg_SUSAT {
  type = "1";
};
class ukf_lmg_SUSAT_fgrip;
class ukf_lmg_SUSAT_fgrip_FDZ: ukf_lmg_SUSAT_fgrip {
  type = "1";
};
	
	
	class Default {
		canlock = 0;
	};
	class ItemCore;
	class Crossbow;
	class Rifle;
	class MeleeWeapon : Rifle {
		canDrop = true;
	};
	class ChainSaw: MeleeWeapon
	{
		scope = 2;
		melee= "true";

		/*
		bullet1[] = {"ca\sounds\weapons\shells\big_shell_wood_01",0.0707946,1,15};
		bullet2[] = {"ca\sounds\weapons\shells\big_shell_wood_02",0.0707946,1,15};
		bullet3[] = {"ca\sounds\weapons\shells\big_shell_wood_03",0.0707946,1,15};
		bullet4[] = {"ca\sounds\weapons\shells\big_shell_wood_04",0.0707946,1,15};
		bullet5[] = {"ca\sounds\weapons\shells\big_shell_wood_05",0.0707946,1,15};
		bullet6[] = {"ca\sounds\weapons\shells\big_shell_wood_06",0.0707946,1,15};
		bullet7[] = {"ca\sounds\weapons\shells\big_shell_wood_07",0.0707946,1,15};
		bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04",0.0707946,1,15};
		bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01",0.0707946,1,15};
		bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02",0.0707946,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03",0.0707946,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04",0.0707946,1,15};
		*/

		//soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};

		emptySound[] = {"",10,1};
		soundBullet[] = {"emptySound",1};


		model = "\z\addons\dayz_epoch\models\chainsaw.p3d";

		picture = "\z\addons\dayz_epoch\pictures\equip_chainsaw_CA.paa";

		displayName = "Chainsaw";

		cursor = "";
		cursoraim = "\ca\Weapons\Data\clear_empty";

		modes[] = {"manual"};
		handAnim[] = {
		"OFP2_ManSkeleton",
		"\Ca\weapons\data\Anim\M24.rtm"
		};
		class manual: Mode_FullAuto
		{
			recoil = "recoil_auto_machinegun_10outof10";
			recoilProne = "recoil_auto_machinegun_prone_10outof10";

			dispersion = 0.2;

			begin1[] = {"\dayz_sfx\chainsaw\running2.ogg",1.77828,1,1000};
			soundBegin[] = {"begin1",1};

			//end1[] = {"\dayz_sfx\chainsaw\running2.ogg",1.77828,1,1000};
			//soundEnd[] = {"end1",1};

			distanceZoomMin = 50;
			distanceZoomMax = 50;
			canDrop = 0;
			UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
			optics = 1;
			modelOptics = "-";

			burst = 1;
			multiplier = 1;

			soundContinuous = 0;
			soundBurst = 0;

			useAction = 0;
			useActionTitle = "";

			// from hatchet
			minRange = 0.5;
			minRangeProbab = 0.8;
			midRange = 1;
			midRangeProbab = 1.5;
			maxRange = 2;
			maxRangeProbab = 2.5;

			showToPlayer = 1;
			//reloadTime = 0.0708762;
			reloadTime = 0.12;
			displayName = "Gas";
		};
		aiDispersionCoefY = 21;
		aiDispersionCoefX = 21;
		dexterity = 0.51;
		reloadMagazineSound[] = {"\dayz_sfx\chainsaw\start-attempt.ogg",0.1,1,20};
		drySound[] = {"\dayz_sfx\chainsaw\start-attempt.ogg",0.01,1,10};
		magazines[] = {"CSGAS"};
		class Library
		{
			libTextDesc = "Hermlite Chainsaw";
		};
		descriptionShort = "Hermlite Chainsaw";
	};
	class ChainSawB : ChainSaw {
		model = "\z\addons\dayz_epoch\models\chainsaw_B.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_chainsawB_CA.paa";
		descriptionShort = "Hermlite Chainsaw (Blue)";
	};
	class ChainSawG : ChainSaw {
		model = "\z\addons\dayz_epoch\models\chainsaw_G.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_chainsawG_CA.paa";
		descriptionShort = "Hermlite Chainsaw (Green)";
	};
	class ChainSawP : ChainSaw {
		model = "\z\addons\dayz_epoch\models\chainsaw_P.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_chainsawP_CA.paa";
		descriptionShort = "Hermlite Chainsaw (Pink)";
	};
	class ChainSawR : ChainSaw {
		model = "\z\addons\dayz_epoch\models\chainsaw_R.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_chainsawR_CA.paa";
		descriptionShort = "Hermlite Chainsaw (Red)";
	};








	class PistolCore;	// External class reference
	class Pistol;	// External class reference
	class GrenadeLauncher; // External class reference

	class DMR;	// External class reference

	class ItemMatchbox_DZE: ItemCore
	{
		scope = 2;
		displayName = $STR_EQUIP_NAME_3;
		model = "\dayz_equip\models\matchbox_gear.p3d";
		picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_3;
	};

	class ItemKnife: ItemCore
	{
		scope = 2;
		displayName = $STR_EQUIP_NAME_4;
		model = "\dayz_equip\models\knife_gear.p3d";
		picture = "\dayz_equip\textures\equip_knife_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_4;
		class ItemActions
		{
			class Use
			{
				text="Harvest Plant";
				script="spawn player_harvestPlant;";
			};
		};
	};

	#include "CfgWeapons\Loot.hpp"

	#include "CfgWeapons\Melee\MeleeMachete.hpp"
	#include "CfgWeapons\Melee\ItemMachete.hpp"
	#include "CfgWeapons\Melee\MeleeHatchet.hpp"
	#include "CfgWeapons\Melee\ItemHatchet.hpp"
	#include "CfgWeapons\Melee\MeleeCrowbar.hpp"
	#include "CfgWeapons\Melee\ItemCrowbar.hpp"
	#include "CfgWeapons\Melee\Crossbow.hpp"
	#include "CfgWeapons\Melee\MeleeBaseBallBat.hpp"
	#include "CfgWeapons\Melee\MeleeFishingPole.hpp"
	#include "CfgWeapons\Melee\MeleeSledgehammer.hpp"
	//	#include "CfgWeapons\Melee\MeleeBaseBallBatBarbed.hpp"
	//	#include "CfgWeapons\Melee\MeleeBaseBallBatNails.hpp"

	#include "CfgWeapons\Item\ItemWatch.hpp"
	#include "CfgWeapons\Item\ItemMap.hpp"
	#include "CfgWeapons\Item\ItemMap_Debug.hpp"
	#include "CfgWeapons\Item\ItemCompass.hpp"
	#include "CfgWeapons\Item\Flashlight.hpp"
	#include "CfgWeapons\Item\Flare.hpp"
	#include "CfgWeapons\Item\ItemEtool.hpp"
	#include "CfgWeapons\Item\ItemShovel.hpp"
	#include "CfgWeapons\Item\ItemFishingPole.hpp"
	#include "CfgWeapons\Item\ItemSledge.hpp"
	#include "CfgWeapons\Item\ItemKeyKit.hpp"
	#include "CfgWeapons\Item\ItemKeys.hpp"
	#include "CfgWeapons\Item\ItemToolbox.hpp"

	//Sniper Rifles
	#include "CfgWeapons\Weapon\Sniper\AS50.hpp"
	#include "CfgWeapons\Weapon\Sniper\M107.hpp"
	#include "CfgWeapons\Weapon\Sniper\KSVK.hpp"

	#include "CfgWeapons\Weapon\Sniper\DMR_DZ.hpp"
	#include "CfgWeapons\Weapon\Pistol\MakarovSD.hpp"
	#include "CfgWeapons\Weapon\LMG\m240_scoped.hpp"
	#include "CfgWeapons\Weapon\LMG\M249_EP1.hpp"
	#include "CfgWeapons\Weapon\LMG\M249_m145_EP1.hpp"
	#include "CfgWeapons\Weapon\LMG\M60A4.hpp"
//	#include "CfgWeapons\Weapon\Rifle\FN_FAL_ANPVS4_DZE.hpp"
};
