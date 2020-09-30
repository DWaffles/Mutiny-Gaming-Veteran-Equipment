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
			"MGVE_VG_Faz",
			"MGVE_VG_Garrett",
			"MGVE_VG_Gooby",
			"MGVE_VG_Hue",
			"MGVE_VG_Jeff",
			"MGVE_VG_Luke",
			"MGVE_VG_Marius",
			"MGVE_VG_Maxca",
			"MGVE_VG_Priscilla",
			"MGVE_VG_Sawtes",
			"MGVE_VG_Sbeve",
			"MGVE_VG_Snake",
			"MGVE_VG_Texas",
			"MGVE_VG_Till",
			"MGVE_VG_Waffles",
			"MGVE_VG_Wolf",
			"MGVE_VL_Khaled",
			"MGVE_VL_VonHoffstot"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"MGVE_Core"
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
	class CUP_arifle_Mk17_CQC_FG_black; //line 2506 of scar config in CUP_Weapons
	class CUP_arifle_RPK74;
	class CUP_arifle_mk18_black;
	class CUP_lmg_M60;
	class CUP_arifle_mk20;
	class CUP_Famas_F1_rail;
	class CUP_arifle_ACRC_blk_556;

	//RHSUSAF
	class rhs_weap_m14_rail;
	class rhs_weap_m240B;
	//RHSAFRF
	class rhs_weap_ak103_zenitco01_b33;
	class rhs_weap_ak74m;

	//Veteran Guns
	class MGVE_VG_Banjo: cup_arifle_mk20
	{
		dlc="MutinyGamingCustomWeapons";
		baseWeapon = "MGVE_VG_Banjo";
		scope=2;
		displayName="[MG] Mk 17 SV (Banjo)";
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
		displayName="[MG] AK-74M (Blax)";
		picture = "\MGVE_VeteranEquipment\data\Blax\akadidasicon.paa";
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Blax\akadidas.paa"
		};
	};
	class MGVE_VG_Candles: CUP_arifle_FNFAL5060_railed
	{
		baseWeapon = "MG_W_Candles";
		scope=2;
		displayName="[MG] FAL 50.00 (Candles)";
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
		displayName="[MG] AK-103 Zenitco/B-33 (Devil)";
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
	class MGVE_VG_Didicoal: rhs_weap_m240B
	{
		scope = 2;
		baseWeapon = "MGVE_VG_Didicoal";
		displayName = "[MG] M240B (Didicoal)";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] =
		{
		"\MGVE_VeteranEquipment\data\Didicoal\m240b_2k_co.paa",
		"\MGVE_VeteranEquipment\data\Didicoal\m240b_2k_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\m240\data\m240_co.paa"
		};
	};
	class MGVE_VG_Faz: CUP_arifle_AK47_GL_top_rail
	{
		scope = 2;
		scopearsenal = 2;
        baseWeapon = "MGVE_VG_Faz";
        displayName = "[MG] AK 308 GP-25 (Faz)";
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
        displayName = "[MG] Mk 18 Mod 1 (Garrett)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Garrett\gaygarret.paa"};
    };
	class MGVE_VG_Gooby: CUP_arifle_Colt727
	{
		scope = 2;
        baseWeapon = "MGVE_VG_Gooby";
        displayName = "[MG] M16A2 (Gooby)";
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
		displayName = "[MG] M60 (Hue)";
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
		displayName = "[MG] M110 PRS (Heff)";
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
	  	displayName="[MG] ACR-C .300 (Luke)";
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
	class MGVE_VG_Marius: rhs_weap_m14_rail
	{
		scope = 2;
		baseWeapon = "MGVE_VG_Marius";
		displayName = "[MG] M14 (Marius)";
		hiddenSelectionsTextures[] = 
		{
			"\MGVE_VeteranEquipment\Data\Marius\mg_m14_marius_co.paa",
		};
	};
	class MGVE_VG_Maxca: CUP_arifle_mk18_black
    {
        scope = 2;
        baseWeapon = "MGVE_VG_Maxca";
        displayName = "[MG] Mk 18 Mod 1 (Maxca)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\Maxca\gmax.paa"};
    };
	class MGVE_VG_Priscilla: CUP_arifle_RPK74
    {
        scope = 2;
        baseWeapon = "MGVE_VG_Priscilla";
        displayName = "[MG] RPK (Priscilla)";
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
		displayName = "[MG] AKMN (Sawtes)";
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
        displayName="[MG] The Nurse (Dr. Sbeve)";
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
		displayName = "[MG] AR-10 (Snake)";
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
        displayName = "[MG] G3A3 (Texas)";
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
		displayName="[MG] Famas (Till)";
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
	class MGVE_VG_Waffles: CUP_arifle_Mk17_CQC_FG_black
	{
		dlc="MutinyGamingCustomWeapons";
		scope=2;
		displayName="[MG] Waffle House (Waffles)";
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
        displayName = "[MG] M4A1 (Wolf)";
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
		displayName="[MG] MAAWS Mk4 Mod 0 (Khaled)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Khaled\Khaled_maaws.paa"
		};
	};
	class MGVE_VL_VonHoffstot: launch_MRAWS_green_f
	{
		baseWeapon = "MGVE_VL_VonHoffstot";
		scope=1;
		displayName="[MG] MAAWS Mk4 Mod 1 (Von Hoffstot)";
		hiddenSelections[] = {"camo1"};		
		/*hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\VonHoffstot\VonHoffstot_maaws3.paa",
		};*/
	};

	/** CLOTHING **/
	class H_Beret_02; 	// A3/Characters_F
	class H_Cap_blk;	// A3/Characters_F	
	
	class MGVE_VC_Lion: H_Beret_02
	{
		scope = 2;
		displayName="[MG] Beret (Lion)";
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Lion\mg_beret_lion_co.paa"
		};
	};
	class MGVE_VC_Darkie: H_Cap_blk
	{
		scope = 2;
		displayName="[MG] Not Backwards Hat (Darkie)";
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranEquipment\data\Darkie\darkies_cap.paa"
		};
	};
};