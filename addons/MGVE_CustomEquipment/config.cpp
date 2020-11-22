#include "BIS_AddonInfo.hpp"

#include "basicdefines_A3.hpp"
class CfgPatches 
{ 
    class MGVE_CustomEquipment
    { 
		units[]={};
		weapons[]=
		{
			"MGVE_W_ACR_300",
			"MGVE_W_ACR_300_EGLM",
			"MGVE_W_MK18_300",
			"MGVE_W_MK18_M320",
			"MGVE_W_M4A1_300",
			"MGVE_W_M4A1_300_grip",
			"MGVE_W_M4A1_300_M203",
			"MGVE_W_M249_300_VFG",
			"MGVE_W_M249_300_RIS",
			"MGVE_W_M16_Lee",
			"MGVE_W_M16_AR10",
			"cup_hgun_ballisticshield_armed",
			"MGVE_W_Shield_Mutiny",
			"MGVE_W_Shield_RUPolice",
			"MGVE_W_MAAWS0_Black",
			"MGVE_W_MAAWS1_Black",
			"MGVE_W_AK5C",
			"MGVE_W_AK5C_Collapsed"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Data_F",
			"MGVE_Core",
		};
    }; 
}; 

class CfgCloudlets
{
	class Default;
	class FA1_FiringSmoke_Effect: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1.1;
		lifeTime=3;
		moveVelocity[]=
		{
			"-0.15*directionX",
			"-0.15*directionY",
			"-0.15*directionZ"
		};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0.1;
		size[]={0.1,0.15000001};
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.31999999},
			{0.30000001,0.30000001,0.30000001,0.28},
			{0.30000001,0.30000001,0.30000001,0.25},
			{0.30000001,0.30000001,0.30000001,0.22},
			{0.30000001,0.30000001,0.30000001,0.1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={2,1};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		blockAIVisibility=0;
		sizeCoef=0.5;
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=20;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
};
class FA1_FiringSmoke
{
	class FA1_FiringSmoke
	{
		simulation="particles";
		type="FA1_FiringSmoke_Effect";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class SlotInfo;
class PointerSlot;
class CowsSlot;
class MuzzleSlot;
class WeaponSlotsInfo;
class GunParticles;
class asdg_OpticRail1913;
class asdg_PistolOpticMount;
class asdg_PistolUnderRail;
class asdg_UnderSlot;
class asdg_FrontSideRail;
class asdg_MuzzleSlot_9MM;
class asdg_MuzzleSlot_45ACP;
class asdg_MuzzleSlot_545R;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;

class cfgWeapons 
{ 
	/** SMALL ARMS **/
	//prototyping
	class CUP_arifle_acr_blk_556;
	class CUP_arifle_acr_eglm_blk_556;
	class CUP_arifle_mk18_black;
	class CUP_arifle_mk18_m203_black;
	class CUP_arifle_m4a1;
	class CUP_arifle_m4a3_black;
	class CUP_arifle_m4a1_buis_gl;
	class cup_lmg_m249_pip4;
	class cup_lmg_m249_pip1;
	class CUP_arifle_M16A1;

	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
		class Eventhandlers;
	};
	class FA1_Base_Rifle: Rifle_Base_F
	{
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		class GunParticles: GunParticles
		{
			class SmokeEffect
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="FA1_FiringSmoke";
			};
		};
		class AnimationSources;
	};

	/** AK5C **/
	class MGVE_W_AK5C: FA1_Base_Rifle
	{
		scope = 1;
		author="Luca, Model by: A-Editor";
		maxZeroing=600;
		displayName="AK5C";
		descriptionshort="AK5C - Assault Rifle <br/>Caliber: 5.56x45mm";
		model="\MGVE_CustomEquipment\data\ak5c.p3d";
		magazines[]=
		{
		};
		magazineWell[]=
		{,
			"STANAG_556x45",
			"CBA_556x45_STANAG",
			"CBA_556x45_STANAG_2D",
		};
		reloadAction="GestureReloadSPAR_01";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"
		};
		drySound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_dry",
			0.5,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_reload",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_firemode",
			0.60000002,
			1,
			5
		};
		picture="\MGVE_CustomEquipment\data\icons\AK5c_ca.paa";
		inertia=0.44999999;
		recoil="recoil_aks";
		modes[]=
		{
			"FullAuto",
			"Single"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MGVE_CustomEquipment\data\textures\ak5c_co.paa"
		};
		/*hiddenSelectionsMaterials[]=
		{
			"\MGVE_CustomEquipment\data\textures\ak5c.rvmat"
		};*/
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mk20_Shot_SoundSet",
					"Mk20_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"Mk20_silencerShot_SoundSet",
					"Mk20_silencerTail_SoundSet"
				};
			};
			dispersion=0.00132;
			reloadTime=0.0735;
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mk20_Shot_SoundSet",
					"Mk20_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"Mk20_silencerShot_SoundSet",
					"Mk20_silencerTail_SoundSet"
				};
			};
			dispersion=0.00132;
			reloadTime=0.0735;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			allowedSlots[]={901};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconScale=0.1;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconScale=0.1;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconScale=0.1;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconScale=0.1;
			};
		};
	};
	class MGVE_W_AK5C_Collapsed: MGVE_W_AK5C
	{
		scope = 1;
		author="Luca, Model by: A-Editor";
		displayName="AK5C (Collapsed)";
		model="\MGVE_CustomEquipment\data\ak5c_collapsed.p3d";
		inertia=0.34999999;
	};

	// 300 BLK
	class MGVE_W_ACR_300: CUP_arifle_acr_blk_556
	{
		scope = 2;
		baseWeapon = "MGVE_W_ACR_300";
		displayName = "ACR (.300 Blackout)";
		magazines[]=
		{
			"",
		};
		magazineWell[]=
		{,
			CBA_300_Blackout
		};
	};
	class MGVE_W_ACR_300_EGLM: CUP_arifle_acr_eglm_blk_556
	{
		scope = 2;
		baseWeapon = "MGVE_W_ACR_300_EGLM";
		displayName = "ACR EGLM (.300 Blackout)";
		magazines[]=
		{
			"",
		};
		magazineWell[]=
		{,
			CBA_300_Blackout
		};
	};
	class MGVE_W_MK18_300: CUP_arifle_mk18_black
	{
		scope = 2;
		baseWeapon = "MGVE_W_MK18_300";
		displayName = "Mk 18 (.300 Blackout)";
		magazines[]=
		{
			"",
		};
		magazineWell[]=
		{,
			CBA_300_Blackout
		};
	};
	class MGVE_W_MK18_M320: CUP_arifle_mk18_m203_black
	{
		scope = 2;
		baseWeapon = "MGVE_W_MK18_M320";
		displayName = "Mk 18 M203 (.300 Blackout)";
		magazines[]=
		{
			"",
		};
		magazineWell[]=
		{,
			CBA_300_Blackout,
		};
	};
	class MGVE_W_M4A1_300: CUP_arifle_m4a1
	{
		scope = 2;
		baseWeapon = "MGVE_W_M4A1_300";
		displayName = "M4A1 (.300 Blackout)";
		magazines[]=
		{
			"",
		};
		magazineWell[]=
		{,
			CBA_300_Blackout,
		};
	};
	class MGVE_W_M4A1_300_grip: CUP_arifle_m4a3_black
	{
		scope = 2;
		baseWeapon = "MGVE_W_M4A1_300_grip";
		displayName = "M4A1 Grip (.300 Blackout)";
		magazines[]=
		{
			"",
		};
		magazineWell[]=
		{,
			CBA_300_Blackout,
		};
	};
	class MGVE_W_M4A1_300_M203: CUP_arifle_m4a1_buis_gl
	{
		scope = 2;
		baseWeapon = "MGVE_W_M4A1_300_M203";
		displayName = "M4A1 M203 (.300 Blackout)";
		magazines[]=
		{
			"",
		};
		magazineWell[]=
		{,
			CBA_300_Blackout,
		};
	};
	class MGVE_W_M249_300_VFG: cup_lmg_m249_pip4
	{
		scope = 2;
		baseWeapon = "MGVE_W_M249_300_VFG";
		displayName = "M249 VFG (.300 Blackout)";
		magazines[]=
		{
			"",
		};
		magazineWell[]=
		{,
			CBA_300_Blackout,
			CBA_300_Blackout_XL	
		};
	};
	class MGVE_W_M249_300_RIS: cup_lmg_m249_pip1
	{
		scope = 2;
		baseWeapon = "MGVE_W_M249_300_RIS";
		displayName = "M249 (.300 Blackout)";
		magazines[]=
		{
			"",
		};
		magazineWell[]=
		{,
			CBA_300_Blackout,
			CBA_300_Blackout_XL	
		};
	};

	// Custom Skins
	class MGVE_W_M16_Lee: CUP_arifle_M16A1
	{
		scope = 2;
		baseWeapon = "MGVE_W_M16_Lee";
		displayName = "M16A1 (CSA)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\MGVE_CustomEquipment\data\m16_lee_reciever.paa",
			"\MGVE_CustomEquipment\data\m16_lee_stock.paa"
		};
	};
	class MGVE_W_M16_AR10: CUP_arifle_M16A1
	{
		scope = 2;
		baseWeapon = "MGVE_W_M16_AR10";
		displayName = "AR-10";
		magazines[]=
		{
			"ACE_20Rnd_762x51_Mag_Tracer",
            "ACE_20Rnd_762x51_Mag_Tracer_Dim",
            "ACE_20Rnd_762x51_Mag_SD",
            "ACE_10Rnd_762x51_M118LR_Mag",
            "ACE_10Rnd_762x51_Mk316_Mod_0_Mag",
            "ACE_10Rnd_762x51_Mk319_Mod_0_Mag",
            "ACE_10Rnd_762x51_M993_AP_Mag",
            "ACE_20Rnd_762x51_M118LR_Mag",
            "ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
            "ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
            "ACE_20Rnd_762x51_M993_AP_Mag",
			"MGVE_Mag_30_762x51",
			"MGVE_Mag_75_762x51",
            "MGVE_Mag_75_762x51_Tracer1",
			"MGVE_Mag_75_762x51_Tracer4"
		};
		magazineWell[]=
		{,
			"CBA_762x51_AR10",
		};
	};

	// Shields
	class cup_hgun_ballisticshield_armed: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20.799999;
			class CowsSlot
			{
			};
			class MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"CUP_muzzle_snds_M9"
				};
				iconPosition[]={0.33000001,0.31};
				iconScale=0.30000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Right";
			};
			class PointerSlot
			{
				iconPosition[]={1.33000001,0.31};
				iconScale=0.30000001;
				compatibleItems[]=
				{
					"cup_acc_glock17_flashlight",
				};
			};
		};
		magazines[]=
		{
			"SAW_30rnd_9x19",
			"SAW_15rnd_9x19_tracer",
			"SAW_30rnd_9x19_tracer",
			"cup_15rnd_9x19_m9",
		};
		magazineWell[] =  
		{
			CBA_9x19_M9
		};
		scope = 2;
	};
	class MGVE_W_Shield_Mutiny: cup_hgun_ballisticshield_armed
    {
    	scope = 2;
    	baseWeapon = "SAW_W_Shield_Mutiny";
        displayName = "[MG] Ballistic Shield (M9)";
    	hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M9\data\m9_beretta_co.paa",
			"\MGVE_CustomEquipment\data\shield_mg.paa",
		};
    };
    class MGVE_W_Shield_RUPolice: cup_hgun_ballisticshield_armed
    {
    	scope = 2;
		baseWeapon = "SAW_W_Shield_RUPolice";
        displayName = "Ballistic Shield (RU POL)";
    	hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M9\data\m9_beretta_co.paa",
			"\MGVE_CustomEquipment\data\shield_rupolice.paa",
		};
    };

	/** LAUNCHERS **/
	class launch_MRAWS_green_rail_f;
	class launch_MRAWS_green_f;

	class MGVE_W_MAAWS0_Black: launch_MRAWS_green_rail_f
    {
        scope = 2;
        baseWeapon = "MGVE_W_MAAWS0_Black";
        displayName = "MAAWS Mk4 Mod 0 (Black)";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\maaws_black.paa"};
    };
    class MGVE_W_MAAWS1_Black: launch_MRAWS_green_f
    {
        scope = 2;
        baseWeapon = "MGVE_W_MAAWS1_Black";
        displayName = "MAAWS Mk4 Mod 1 (Black)";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\maaws_black.paa"};
    };
	
	/** CLOTHING **/
	class ItemCore;
	class HeadgearItem;

	/** HELMETS **/
	class MGVE_H_aot_mask: ItemCore 
	{
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
		ace_hearing_lowerVolume = 0.40;  // Muffling of the sound (0 to 1, higher means more muffling)

		author = "Facel";
		scope = 2;
		displayName = "AOT Mask: Black";
		model = "\MGVE_CustomEquipment\data\aot_mask";
		picture = "\MGVE_CustomEquipment\data\UI\gear_aot_mask_01_x_ca";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01_co.paa"};
		//hiddenSelectionsMaterials[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01.rvmat"};
		
		class ItemInfo: HeadgearItem 
		{
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
			mass = 10;
			uniformModel = "\MGVE_CustomEquipment\data\aot_mask.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01_co.paa"};
			
			modelSides[] = {6};
		
			class HitpointsProtectionInfo 
			{
				class Head 
				{
					hitpointName	= "HitHead"; 
					armor		= 12; 
					passThrough	= 0.3; 
				};
			};
		};
	};
	class MGVE_H_Mask_Artic: MGVE_H_aot_mask 
	{
		author = "Facel/Till";
		displayName = "[MG] Artic Mask";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\Arctic_-_Till.paa"};
		hiddenSelectionsMaterials[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01.rvmat"};
	};
	class MGVE_H_Mask_Boba: MGVE_H_aot_mask 
	{
		author = "Facel/Dakota";
		displayName = "[MG] Boba Fett Mask";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\Boba_Fett.paa"};
		hiddenSelectionsMaterials[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01.rvmat"};
	};
	class MGVE_H_Mask_Bowler: MGVE_H_aot_mask 
	{
		author = "Facel/Jayrad/Texas";
		displayName = "[MG] Bowler Mask";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\Bowler_-_JayRad.paa"};
		hiddenSelectionsMaterials[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01.rvmat"};
	};
	class MGVE_H_Mask_Deadshot: MGVE_H_aot_mask 
	{
		author = "Facel/Jayrad";
		displayName = "[MG] Deadshot Mask";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\Deadshot_-_JayRad.paa"};
		hiddenSelectionsMaterials[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01.rvmat"};
	};
	class MGVE_H_Mask_Gorilla: MGVE_H_aot_mask 
	{
		author = "Facel/Mr. Fox";
		displayName = "[MG] Gorilla Mask";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\Gorilla_-_Mr_Fox.paa"};
		hiddenSelectionsMaterials[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01.rvmat"};
	};
	class MGVE_H_Mask_Imperial: MGVE_H_aot_mask 
	{
		author = "Facel/Texas";
		displayName = "[MG] Imperial Mask";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\Imperial_-_Texas.paa"};
		hiddenSelectionsMaterials[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01.rvmat"};
	};
	class MGVE_H_Mask_JP93: MGVE_H_aot_mask 
	{
		scope = 1;
		author = "Facel/Mr. Fox";
		displayName = "[MG] JP93 Mask";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\JP93_-_Mr_Fox.paa"};
		hiddenSelectionsMaterials[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01.rvmat"};
	};
	class MGVE_H_Mask_Multicam: MGVE_H_aot_mask 
	{
		author = "Facel/Luke";
		displayName = "[MG] Multicam Mask";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\Multicam_-_Luke.paa"};
		hiddenSelectionsMaterials[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01.rvmat"};
	};
	class MGVE_H_Mask_Risen: MGVE_H_aot_mask 
	{
		scope = 1;
		author = "Facel/Texas";
		displayName = "[MG] Risen Mask";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\Risen_-_Texas.paa"};
		hiddenSelectionsMaterials[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01.rvmat"};
	};
	class MGVE_H_Mask_Rust: MGVE_H_aot_mask 
	{
		author = "Facel/Mr. Fox";
		displayName = "[MG] Rust Mask";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\Rust_-_Mr_Fox.paa"};
		hiddenSelectionsMaterials[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01.rvmat"};
	};
	class MGVE_H_Mask_York: MGVE_H_aot_mask 
	{
		author = "Facel/Mr. Fox";
		displayName = "[MG] York Transit Mask";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\YorkTransit_-_Mr_Fox.paa"};
		hiddenSelectionsMaterials[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01.rvmat"};
	};
	class MGVE_H_Mask_Wooden: MGVE_H_aot_mask 
	{
		author = "Facel/";
		displayName = "[MG] Wooden Mask";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\mask_WoodMask.paa"};
		hiddenSelectionsMaterials[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01.rvmat"};
	};
	class MGVE_H_Mask_Green: MGVE_H_aot_mask 
	{
		author = "Facel/";
		displayName = "[MG] Green Mask";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\mask_GreenMask.paa"};
		hiddenSelectionsMaterials[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01.rvmat"};
	};
	class MGVE_H_Mask_Radioactive: MGVE_H_aot_mask 
	{
		author = "Facel/";
		displayName = "[MG] Radioactive Mask";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\mask_radioactive.paa"};
		hiddenSelectionsMaterials[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01.rvmat"};
	};
	class MGVE_H_Mask_Stickerbomb: MGVE_H_aot_mask 
	{
		author = "Facel/Mr. Fox";
		displayName = "[MG] Stickerbomb Mask";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\mask_stickerbomb.paa"};
		hiddenSelectionsMaterials[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01.rvmat"};
	};
	class MGVE_H_Mask_Mutiny: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[MG] Mutiny Mask";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\mask_mutiny.paa"};
		hiddenSelectionsMaterials[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01.rvmat"};
	};
	class MGVE_H_Mask_Warboy: MGVE_H_aot_mask 
	{
		scope = 1;
		author = "Facel/Mr. Fox";
		displayName = "[MG] Warboy Mask";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\mask_warboy.paa.paa"};
		hiddenSelectionsMaterials[] = {"\MGVE_CustomEquipment\data\Masks\aot_mask_01.rvmat"};
	};
};