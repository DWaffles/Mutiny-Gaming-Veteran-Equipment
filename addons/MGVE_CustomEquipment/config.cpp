#include "BIS_AddonInfo.hpp"

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
			"MGVE_W_MAAWS1_Black"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"MGVE_Core"
		};
    }; 
}; 

class PointerSlot;
class CowsSlot;
class MuzzleSlot;
class WeaponSlotsInfo;
class GunParticles;

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
	class MGVE_H_aot_mask;

	class MGVE_H_Mask_Artic: MGVE_H_aot_mask 
	{
		author = "Facel/Till";
		displayName = "[MG] Mask (Arctic)";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\mask_arctic_co.paa"};
	};
	class MGVE_H_Mask_Bowler: MGVE_H_aot_mask 
	{
		author = "Facel/Jayrad/Texas";
		displayName = "[MG] Mask (Bowling Boy)";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\mask_bowler_co.paa"};
	};
	class MGVE_H_Mask_Od: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[MG] Mask (OD)";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\mask_od_co.paa"};
	};
	class MGVE_H_Coyote: MGVE_H_aot_mask
	{
		author = "Facel/Nav";
		displayName = "[MG] Mask (Coyote)";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\mask_coyote_co.paa"};
	};
	class MGVE_H_Mask_Multicam: MGVE_H_aot_mask 
	{
		author = "Facel/Luke";
		displayName = "[MG] Mask (Multicam)";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\mask_multicam_co.paa"};
	};
	class MGVE_H_Mask_Mutiny: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[MG] Mask (Mutiny)";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\mask_mutiny_co.paa"};
	};

	/** MASKS UP FOR ADOPTION **/
	class MGVE_H_Mask_Deadpool: MGVE_H_aot_mask 
	{
		author = "Facel/Mr. Fox";
		displayName = "[MG] Mask - Deadpool (Please Adopt)";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\adopt_mask_deadpool_co.paa"};
	};
	class MGVE_H_Mask_Phantom: MGVE_H_aot_mask 
	{
		author = "Facel/Mr. Fox";
		displayName = "[MG] Mask - Phantom (Please Adopt)";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\adopt_mask_phantom_co.paa"};
	};
	class MGVE_H_Mask_JP93: MGVE_H_aot_mask 
	{
		author = "Facel/Mr. Fox";
		displayName = "[MG] Mask - JP93 (Please Adopt)";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\adopt_mask_JP93_co.paa"};
	};
	class MGVE_H_Mask_Wood: MGVE_H_aot_mask 
	{
		author = "Facel/Mr. Fox";
		displayName = "[MG] Mask - Wood (Please Adopt)";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\adopt_mask_Wood_co.paa"};
	};
	class MGVE_H_Mask_Radioactive: MGVE_H_aot_mask 
	{
		scope = 1;
		author = "Facel/Mr. Fox";
		displayName = "[MG] Mask - Radioactive (Please Adopt)";
		hiddenSelectionsTextures[] = {"\MGVE_CustomEquipment\data\Masks\adopt_mask_radioactive_co.paa"};
	};
};