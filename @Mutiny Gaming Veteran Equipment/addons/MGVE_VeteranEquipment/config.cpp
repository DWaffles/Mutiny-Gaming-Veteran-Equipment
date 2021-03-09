#include "BIS_AddonInfo.hpp"
class CfgPatches 
{ 
    class MGVE_VeteranEquipment
    { 
		units[]={};
		weapons[]=
		{
			"MGVE_VG_Banjo",
			"MGVE_VG_Blax",
			"MGVE_VG_Candles",
			"MGVE_VG_Devil",
			"MGVE_VG_Didicoal",
			"MGVE_VG_Ding",
			"MGVE_VG_Faz",
			"MGVE_VG_Garrett",
			"MGVE_VG_Gooby",
			"MGVE_VG_Hue",
			"MGVE_VG_Jeff",
			"MGVE_VG_Luke",
			"MGVE_VG_Marius",
			"MGVE_VG_Maxca",
			"MGVE_VG_Meph",
			"MGVE_VG_MrFox",
			"MGVE_VG_Priscilla",
			"MGVE_VG_Sawtes",
			"MGVE_VG_Sbeve",
			"MGVE_VG_Snake",
			"MGVE_VG_Texas",
			"MGVE_VG_Till",
			"MGVE_VG_Waffles",
			"MGVE_VG_Wolf",
			"MGVE_VL_Khaled",
			"MGVE_VL_Nav",
			"MGVE_VL_VonHoffstot"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"MGVE_Ammunition"
		};
    }; 
}; 

class cfgWeapons 
{ 
	/** SMALL ARMS **/
	//CUP Prototyping
	class CUP_arifle_AK47_GL_top_rail;
	class CUP_arifle_AKM_top_rail;
	class CUP_arifle_Colt727;
	class CUP_srifle_M110_black;
	class CUP_arifle_FNFAL5060_railed;
	class CUP_arifle_G36K_KSK_VFG;
	class CUP_arifle_G3A3_ris_vfg_black;
	class CUP_arifle_M16A1;
	class CUP_arifle_M4A1_black;
	class CUP_arifle_Mk16_STD_black;
	class CUP_arifle_Mk17_CQC_FG_black; //around line 2506 of scar config in CUP_Weapons
	class CUP_arifle_Mk17_STD_FG_black; //around line 2500 of scar config in CUP_Weapons
	class CUP_arifle_RPK74;
	class CUP_arifle_mk18_black;
	class CUP_lmg_M60;
	class CUP_arifle_mk20;
	class CUP_Famas_F1_rail;
	class CUP_arifle_ACRC_blk_556;
	class CUP_hgun_Glock17;

	//RHSUSAF
	class rhs_weap_m14_rail;
	class rhs_weap_sr25;
	//RHSAFRF
	class rhs_weap_ak103_zenitco01_b33;
	class rhs_weap_ak74m;
	
	//Vanilla
	class SMG_03C_TR_black;
	class srifle_DMR_06_hunter_F;

	//Veteran Guns
	class MGVE_VG_Banjo: CUP_arifle_mk20
	{
		baseWeapon = "MGVE_VG_Banjo";
		author = "Texture: Texas";
		scope=2;
		displayName="[VET] Mk 17 SV (Banjo)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Banjo\Banjo_scar_h_body.paa",
			"\MGVE_VeteranEquipment\data\Banjo\Banjo_scar_acc.paa"
		};
	};
	class MGVE_VG_Blax: rhs_weap_ak74m
	{
		scope=2;
		baseWeapon = "MGVE_VG_Blax";
		displayName="[VET] AK-74M (Blax)";
		picture = "\MGVE_VeteranEquipment\data\Blax\akadidasicon.paa";
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Blax\akadidas.paa"
		};
	};
	class MGVE_VG_Candles: CUP_arifle_FNFAL5060_railed
	{
		baseWeapon = "MGVE_VG_Candles";
		scope=2;
		displayName="[VET] FAL 50.00 (Candles)";
		author = "Texture: Jay";
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Candles\candles_fnfal_body_co.paa",
			"\MGVE_VeteranEquipment\data\Candles\candles_fnfal_stock_co.paa",
			"CUP\Weapons\CUP_Weapons_FNFAL\data\fnfal_sight_fnc_co.paa"
		};
	};
	class MGVE_VG_Devil: rhs_weap_ak103_zenitco01_b33
	{
		baseWeapon = "MGVE_VG_Devil";
		scope=2;
		displayName="[VET] AK-103 Zenitco/B-33 (Devil)";
		hiddenSelections[] = {"body","newfront","zenit1","zenit2","zenit3"};
		hiddenSelectionsTextures[] =
		{
			"\MGVE_VeteranEquipment\data\Devil\akdevil.paa",
			"rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa",
			"\MGVE_VeteranEquipment\data\Devil\rhs_zenitko_01_co.paa",
			"\MGVE_VeteranEquipment\data\Devil\rhs_zenitko_02_co.paa",
			"\MGVE_VeteranEquipment\data\Devil\rhs_b33_co.paa"
		};
	};
	class MGVE_VG_Didicoal: rhs_weap_sr25
	{
		scope = 2;
		baseWeapon = "MGVE_VG_Didicoal";
		displayName = "[VET] War of the Roses (Didi)";
		author = "Texture: Sbeve";
		hiddenSelectionsTextures[]=
		{
			"MGVE_VeteranEquipment\data\Didicoal\reciever_co.paa",
			"MGVE_VeteranEquipment\data\Didicoal\rail_co.paa",
			"rhsusf\addons\rhsusf_weapons2\sr25\data\misc_co.paa",
			"MGVE_VeteranEquipment\data\Didicoal\buttstock1_co.paa",
			"rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa",
			"MGVE_VeteranEquipment\data\Didicoal\kacrailcover_co.paa"
		};
	};
	class MGVE_VG_Ding : SMG_03C_TR_black
	{
		scope = 2;
		baseWeapon = "MGVE_VG_Ding";
		displayName = "[VET] P90 TR (Ding)";
		author = "Texture: Sbeve/Waffles";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Ding\ding_p90tr_body.paa"
		};
	};
	class MGVE_VG_Faz: CUP_arifle_AK47_GL_top_rail
	{
		scope = 2;
		scopearsenal = 2;
        baseWeapon = "MGVE_VG_Faz";
		displayName = "[VET] Chiêu Hói (Faz)";
		author = "Texture: Texas";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"CamoGL1",
			"CamoGL2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Faz\gfaz0.paa",
			"\MGVE_VeteranEquipment\data\Faz\gfaz1.paa",
			"\MGVE_VeteranEquipment\data\Faz\gfaz2.paa",
			"\MGVE_VeteranEquipment\data\Faz\gfaz3.paa",
			"CUP\Weapons\CUP_Weapons_AK\Data\gp25_sight_co.paa"
		};
		magazines[]=
		{
			"SAW_30Rnd_762x51",
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
            "SAW_75Rnd_762x51_tracerg3",
			"SAW_75Rnd_762x51_tracer4g3",
			"SAW_75Rnd_762x51_notracer",
		};
		magazineWell[]=
		{,
		};
	};
	class MGVE_VG_Garrett: CUP_arifle_mk18_black
    {
        scope = 2;
        baseWeapon = "MGVE_VG_Garrett";
        displayName = "[VET] Mk 18 Mod 1 (Garrett)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Garrett\gaygarret.paa"};
    };
	class MGVE_VG_Gooby: CUP_arifle_Colt727
	{
		scope = 2;
        baseWeapon = "MGVE_VG_Gooby";
        displayName = "[VET] M16A2 (Gooby)";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Gooby\ggoob.paa",
			"\MGVE_VeteranEquipment\data\Gooby\ggoob1.paa",
			"cup\weapons\cup_weapons_m16\data\tigg_m4barrel_co.paa"
		};
	};
	class MGVE_VG_Hue: CUP_lmg_M60
	{
		scope = 2;
		baseWeapon = "MGVE_VG_Hue";
		displayName = "[VET] The Burning Hue (Hue)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Hue\body_co.paa",
			"\MGVE_VeteranEquipment\data\Hue\body2_co.paa",
			"\MGVE_VeteranEquipment\data\Hue\fore_co.paa",
			"\MGVE_VeteranEquipment\data\Hue\fore_co.paa"
		};
	};
	class MGVE_VG_Jeff: CUP_srifle_M110_black
	{
		scope = 2;
		baseWeapon = "MGVE_VG_Jeff";
		displayName = "[VET] M110 PRS (Heff)";
		author = "Texture: Sbeve/Waffles";
		hiddenSelectionsTextures[]=
    	{
			"\MGVE_VeteranEquipment\data\Jeff\Jeff_m110_reciever_co.paa",
			"\MGVE_VeteranEquipment\data\Jeff\Jeff_m110_stock_co.paa",
			"cup\weapons\cup_weapons_weaponsdata\data\ris_cover\rail_cover_co.paa",
			"cup\weapons\cup_weapons_weaponsdata\data\magpul_afg_grip\magpul_afg_co.paa"
    	};
	};
	class MGVE_VG_Luke: CUP_arifle_ACRC_blk_556
	{
	  	baseWeapon = "MGVE_VG_Luke";
	  	displayName="[VET] Bravo Six (Luke)";
		author = "Texture: Sbeve";
	  	hiddenSelectionsTextures[]=
  		{
    		"\MGVE_VeteranEquipment\data\Luke\Luke_acr_black_co.paa"
  		};
  		magazines[]=
		{
			"",
		};
		magazineWell[]=
		{,
			CBA_300_Blackout,
		};
	};
	class MGVE_VG_Marius : srifle_DMR_06_hunter_F
	{
		author = "Marius";
		displayName = "[VET] M21 SWS (Marius)";
		baseWeapon = "MGVE_VG_Marius";
		magazines[] = {"ACE_20Rnd_762x51_Mk316_Mod_0_Mag"};
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\MGVE_VeteranEquipment\Data\Marius\marius_m21_co.paa",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\DMR_06_02_CO.paa"
		};
		hiddenSelectionsMaterials[] = {"a3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\DMR_06_01.rvmat", "a3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\DMR_06_02.rvmat"};
	};
	class MGVE_VG_Maxca: CUP_arifle_mk18_black
    {
        scope = 2;
        baseWeapon = "MGVE_VG_Maxca";
        displayName = "[VET] Mk 18 Mod 1 (Maxca)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Maxca\gmax.paa"};
    };
	class MGVE_VG_Meph: CUP_arifle_Mk17_CQC_FG_black
	{
		scope=2;
		displayName="[VET] Meph Dealer (Meph)";
		author = "Model: CUP; Texture: Waffles";
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Meph\meph_scar_body_co.paa",
			"\CUP\Weapons\CUP_Weapons_SCAR\data\scar_acc_black_co.paa"
		};
	};
	class MGVE_VG_MrFox : CUP_hgun_Glock17
	{
		scope = 2;
		baseWeapon = "MGVE_VG_MrFox";
		displayName = "[VET] G17 (Mr. Fox)";
		author = "Texture: Mr. Fox";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\MrFox\MrFox_glock17.paa"
		};
	};
	class MGVE_VG_Priscilla: CUP_arifle_RPK74
    {
        scope = 2;
        baseWeapon = "MGVE_VG_Priscilla";
        displayName = "[VET] RPK (Priscilla)";
       	hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Priscilla\pric_body1.paa",
			"\MGVE_VeteranEquipment\data\Priscilla\pric_fun1.paa"
		};
    };
	class MGVE_VG_Sawtes: CUP_arifle_AKM_top_rail
	{
		scope = 2;
		baseWeapon = "MGVE_VG_Sawtes";
		displayName = "[VET] AKMN (Sawtes)";
		hiddenSelectionsTextures[] = 
		{
			"\MGVE_VeteranEquipment\Data\Sawtes\sawtes_body.paa",
			"\MGVE_VeteranEquipment\Data\Sawtes\sawtes_grip.paa",
			"\MGVE_VeteranEquipment\Data\Sawtes\sawtes_stock.paa"
		};
	};
	class MGVE_VG_Sbeve: CUP_arifle_G36K_KSK_VFG
    {
        baseWeapon = "MGVE_VG_Sbeve";
        displayName="[VET] The Doctor's Assistant (Sbeve)";
		author = "Texture: Sbeve";
        hiddenSelectionsTextures[]=
        {
            "\MGVE_VeteranEquipment\data\Sbeve\g36_commonmap_k1_co.paa",
            "\MGVE_VeteranEquipment\data\Sbeve\g36_stockfurniture_co.paa",
            "\MGVE_VeteranEquipment\data\Sbeve\g36_opticrails_co.paa",
            "\MGVE_VeteranEquipment\data\Sbeve\g36_magwell_co.paa",
			"", 
            "\CUP\Weapons\CUP_Weapons_G36\data\tacticool_black_co.paa",
            "\CUP\Weapons\CUP_Weapons_G36\data\g36_mountsrails_co.paa",
            "\MGVE_VeteranEquipment\data\Sbeve\rail_cover_co.paa"
        };
		magazineWell[]=
        {,
            STANAG_556x45,
            STANAG_556x45_Large,
            CBA_556x45_STANAG,
            CBA_556x45_STANAG_L,
            CBA_556x45_STANAG_XL,
            CBA_556x45_STANAG_2D,
            CBA_556x45_STANAG_2D_XL
        };
    };
	class MGVE_VG_Snake: CUP_arifle_M16A1
	{
		scope = 2;
		baseWeapon = "MGVE_VG_Snake";
		displayName = "[VET] AR-10 (Snake)";
		hiddenSelections[] = {"camo1","camo2"};
		recoil="Recoil_CUP_G3";
		hiddenSelectionsTextures[] = 
		{
			"\MGVE_VeteranEquipment\Data\Snake\gaysnake1.paa",
			"\MGVE_VeteranEquipment\Data\Snake\gaysnake2.paa"
		};
		magazines[]=
		{
			"SAW_30Rnd_762x51",
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
            "SAW_75Rnd_762x51_tracerg3",
			"SAW_75Rnd_762x51_tracer4g3",
			"SAW_75Rnd_762x51_notracer",
		};
		magazineWell[]=
		{,
			"CBA_762x51_AR10",
		};
	};
	class MGVE_VG_Texas: CUP_arifle_G3A3_ris_vfg_black
    {
        scope = 2;
        baseWeapon = "MGVE_VG_Texas";
        displayName = "[VET] Das Reich (Texas)";
		author = "Texture: Texas";
        hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Texas\gtexas0.paa",
			"\MGVE_VeteranEquipment\data\Texas\gtexas1.paa",
			"CUP\Weapons\CUP_Weapons_G3\data\rail_co.paa",
			"CUP\weapons\CUP_Weapons_WeaponsData\data\tacticool_assets\tacticool_black_co.paa"
		};
    };
	class MGVE_VG_Till: CUP_Famas_F1_rail
	{
		baseWeapon = "MGVE_VG_Till";
		scope=2;
		displayName="[VET] Famas (Till)";
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Till\till_Famas.paa",
		};
		reloadMagazineSound[]=
		{
			"\MGVE_VeteranEquipment\data\Till\famasreload.ogg",
			1,
			1,
			10
		};
	};
	class MGVE_VG_Waffles: CUP_arifle_Mk17_STD_FG_black
	{
		scope=2;
		displayName="[VET] Waffle House (Waffles)";
		author = "Texture: Waffles";
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Waffles\Waffles_scar_body.paa",
			"\MGVE_VeteranEquipment\data\Waffles\Waffles_scar_acc.paa"
		};
	};
	class MGVE_VG_Wolf: CUP_arifle_M4A1_black
    {
        scope = 2;
        baseWeapon = "MGVE_VG_Wolf";
        displayName = "[VET] M4A1 (Wolf)";
		hiddenSelections[]=
		{
			"camo",
			"camo_rail",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo_lod"
		};
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Wolf\wolf1body.paa",
			"CUP\Weapons\CUP_Weapons_M16\data\m4_v3_co.paa",
			"\MGVE_VeteranEquipment\data\Wolf\wolf1furn.paa",
			"CUP\Weapons\CUP_Weapons_M16\data\tigg_m4barrel_co.paa",
			"CUP\Weapons\CUP_Weapons_M16\data\tigg_carryhandle_co.paa",
			"\MGVE_VeteranEquipment\data\Wolf\wolf1rail.paa",
			"CUP\Weapons\CUP_Weapons_M16\data\m4_co.paa"
		};
	};

	/** LAUNCHERS **/
	class launch_MRAWS_green_f;
	class launch_MRAWS_green_rail_f;

	class MGVE_VL_Khaled: launch_MRAWS_green_rail_f
	{
		baseWeapon = "MGVE_VL_Khaled";
		scope=2;
		displayName="[VET] MAAWS Mk4 Mod 0 (Khaled)";
		author = "Texture: Texas";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Khaled\Khaled_maaws.paa"
		};
	};
	class MGVE_VL_Nav: launch_MRAWS_green_f
	{
		baseWeapon = "MGVE_VL_Nav";
		scope=2;
		displayName="[VET] Gungnir (Nav)";
		author = "Texture: Texas";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Nav\Nav_maaws_01_co.paa",
			"\MGVE_VeteranEquipment\data\Nav\nav_MRAWS_02_co.paa"
		};
	};
	class MGVE_VL_VonHoffstot: launch_MRAWS_green_f
	{
		baseWeapon = "MGVE_VL_VonHoffstot";
		scope=1;
		displayName="[VET] MAAWS Mk4 Mod 1 (Von Hoffstot)";
		hiddenSelections[] = {"camo1"};		
		/*hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\VonHoffstot\VonHoffstot_maaws3.paa",
		};*/
	};

	/** MUTINY MASKS **/
	class MGVE_H_aot_mask;
	class MGVE_VC_Banjo_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[VET] Killer Cheese (Banjo)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Banjo\banjo_mask_co.paa"};
	};
	class MGVE_VC_Candles_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Mr. Fox";
		displayName = "[VET] Misfit (Candles)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Candles\candles_mask_gorilla_co.paa"};
	};
	class MGVE_VC_Cheb_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav/Texas";
		displayName = "[VET] Seeker (Cheb)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Cheb\cheb_mask_co.paa"};
	};
	class MGVE_VC_Darkie_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[VET] Mutiny Sex Trooper (Darkie)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\darkie\darkie_mask_trooper_co.paa"};
	};
	class MGVE_VC_Dakota_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Dakota";
		displayName = "[VET] This is the way (Dakota)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Dakota\dakota_mask_boba_co.paa"};
	};
	class MGVE_VC_Devil_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Devil";
		displayName = "[VET] The Way of the Devil (Devil)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Devil\devil_mask_co.paa"};
	};
	class MGVE_VC_Didicoal_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Didi";
		displayName = "[VET] 22 A Million (Didi)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\didicoal\didi_mask_abstract_co.paa"};
	};
	class MGVE_VC_Elite_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[VET] Starsim (Elite)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Elite\elite_mask_co.paa"};
	};
	class MGVE_VC_Enzee_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[VET] Shiva (Enzee)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Enzee\enzee_mask_co.paa"};
	};
	class MGVE_VC_Faz_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Mr. Fox";
		displayName = "[VET] Stickerbomb (Faz)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Faz\faz_mask_co.paa"};
	};
	class MGVE_VC_Garrett_Mask: MGVE_H_aot_mask
	{
		author = "Facel/Nav";
		displayName = "[VET] Unleashed (Garrett)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Garrett\garret_mask_unleased_co.paa"};
	};
	class MGVE_VC_Ginger_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[VET] Drag Queen (Ginger)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\ginger\ginger_mask_co.paa"};
	};
	class MGVE_VC_Jeff_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Jayrad";
		displayName = "[VET] Deadshot Mask (Heff)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\jeff\jeff_mask_deadshot_co.paa"};
	};
	class MGVE_VC_Katasugi_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[VET] The Menace (Katasugi)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Katasugi\katasugi_mask_co.paa"};
		hiddenSelectionsMaterials[] = {""};
	};
	class MGVE_VC_Kudz_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[VET] The Times (Kudz)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Kudz\Kudz_mask_co.paa"};
	};
	class MGVE_VC_Lion_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[VET] Cyberpunk (Lion)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\lion\lion_mask_co.paa"};
	};
	class MGVE_VC_Luke_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[VET] Long Live the Queen (Luke)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Luke\luke_mask_england_co.paa"};
	};
	class MGVE_VC_Maxca_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[VET] Off-Mask (Maxca)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\maxca\maxca_mask_co.paa"};
	};
	class MGVE_VC_Meph_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[VET] Meph Head (Meph)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\meph\meph_mask_rust_co.paa"};
	};
	class MGVE_VC_MrFox_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Mr. Fox";
		displayName = "[VET] Warboy Mask (Mr. Fox)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\MrFox\mrfox_mask_warboy_co.paa"};
	};
	class MGVE_VC_Nav_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[VET] I don't know Blackhand or something (Nav)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Nav\Nav_mask_co.paa"};
	};
	class MGVE_VC_Priscilla_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[VET] Forgive Me (Priscilla)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Priscilla\priscilla_mask_co.paa"};
	};
	class MGVE_VC_Prius_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[VET] The Finnish Wolf (Prius)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Prius\prius_mask_co.paa"};
	};
	class MGVE_VC_Sawtes_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Sawtes";
		displayName = "[VET] Fuck the Queen (Sawtes)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Sawtes\sawtes_mask_wood_co.paa"};
	};
	class MGVE_VC_Sbeve_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[VET] Death Wish (Sbeve)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Sbeve\sbeve_mask_co.paa"};
	};
	class MGVE_VC_Sniper_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[VET] HELLO! (Sniper)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Sniper\sniper_mask_co.paa"};
	};
	class MGVE_VC_Teetumus_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav";
		displayName = "[VET] Spurdo Spärde (Teetumus)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Teetumus\teetumus_mask_co.paa"};
	};
	class MGVE_VC_Till_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Waffles";
		displayName = "[VET] Semper Primus (Till)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Till\till_mask_co.paa"};
	};
	class MGVE_VC_Vanderva_Mask: MGVE_H_aot_mask 
	{
		author = "Facel/Nav/Vanderva";
		displayName = "[VET] Bethesda no DMCA (Vanderva)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\vanderva\vanderva_mask_co.paa"};
	};
	class MGVE_VC_Waffles_Mask: MGVE_H_aot_mask
	{
		author = "Facel/Nav/Waffles";
		displayName = "[VET] Homestyle (Waffles)";
		hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\waffles\waffles_mask_co.paa"};
	}

	/** CLOTHING **/
	/** FACEWEAR **/
	/** HEADWEAR **/
	class H_Beret_02; 	// A3/Characters_F
	class H_Cap_blk;	// A3/Characters_F	
	class CUP_H_FR_Headband_Headset;
	
	class MGVE_VC_Darkie: H_Cap_blk
	{
		scope = 2;
		displayName="[VET] Not Backwards Hat (Darkie)";
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Darkie\darkie_cap.paa"
		};
	};
	/*class MGVE_VC_Katasugi: CUP_H_FR_Headband_Headset
	{
		scope = 1;
		displayName="[VET] Banzai (Katasugi)";
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Katasugi\katasugi_headband.paa" //doesn't actually work so yeah
		};
	};*/
	class MGVE_VC_Lion: H_Beret_02
	{
		scope = 2;
		displayName="[VET] Beret (Lion)";
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Lion\mg_beret_lion_co.paa"
		};
	};
};