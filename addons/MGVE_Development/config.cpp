#include "BIS_AddonInfo.hpp"
class CfgPatches 
{ 
    class MGVE_Development
    { 
		units[]={};
		weapons[]=
		{
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
		};
    }; 
}; 

class cfgWeapons 
{ 
	/** SMALL ARMS **/
	//CUP Prototyping
	class CUP_hgun_Glock17;

	//RHSUSAF
	class rhs_weap_mk18; //rhsusf_c_weapons

	//VANILLA
	class SMG_03C_TR_black;

	//Veteran Guns
	class MGVE_VG_Enzee: rhs_weap_mk18
	{
		scope = 2;
		baseWeapon = "MGVE_VG_Enzee";
		displayName = "[MG] Mk 18 Mod 1 (Enzee)";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa",
			"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_mk18rail_t_co.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa"
		};
	};
	class MGVE_VG_Enzee_Actual: rhs_weap_mk18
	{
		scope = 2;
		baseWeapon = "MGVE_VG_Enzee_Actual";
		displayName = "[MG] Mk 18 Mod 1 (Enzee Actual)";
		hiddenSelectionsTextures[]=
		{
			"\MGVE_Development\data\_debug\debugTexture.paa",
			"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_mk18rail_t_co.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa"
		};
	};
	class MGVE_VG_Enzee_Rail: rhs_weap_mk18
	{
		scope = 2;
		baseWeapon = "MGVE_VG_Enzee_Rail";
		displayName = "[MG] Mk 18 Mod 1 (Enzee Rail)";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa",
			"\MGVE_Development\data\_debug\debugTexture.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa"
		};
	};
	class MGVE_VG_Enzee_M4ACC: rhs_weap_mk18
	{
		scope = 2;
		baseWeapon = "MGVE_VG_Enzee_M4ACC";
		displayName = "[MG] Mk 18 Mod 1 (Enzee M4ACC)";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa",
			"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_mk18rail_t_co.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"\MGVE_Development\data\_debug\debugTexture.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa"
		};
	};
	class MGVE_VG_Enzee_Magpull: rhs_weap_mk18
	{
		scope = 2;
		baseWeapon = "MGVE_VG_Enzee_Magpull";
		displayName = "[MG] Mk 18 Mod 1 (Enzee Magpull)";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa",
			"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_mk18rail_t_co.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\MGVE_Development\data\_debug\debugTexture.paa",
			"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa"
		};
	};
	class MGVE_VG_Enzee_Original: rhs_weap_mk18
	{
		scope = 1;
		baseWeapon = "MGVE_VG_Enzee";
		displayName = "[MG] Mk 18 Mod 1 (Garrett)";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa",
			"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_mk18rail_t_co.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa"
		};
	};
	class MGVE_VG_Ding : SMG_03C_TR_black
	{
		scope = 2;
		baseWeapon = "MGVE_VG_Ding";
		displayName = "[MG] P90 TR (Ding)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_black_co.paa"
		};
	};
	class MGVE_VG_Ding_Debug : SMG_03C_TR_black
	{
		scope = 2;
		baseWeapon = "MGVE_VG_Ding_Debug";
		displayName = "[MG] P90 TR (Ding Debug)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]=
		{
			"\MGVE_Development\data\_debug\debugTexture.paa"
		};
	};
	class MGVE_VG_MrFox : CUP_hgun_Glock17
	{
		scope = 2;
		baseWeapon = "MGVE_VG_MrFox";
		displayName = "[MG] G17 (Mr. Fox)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]=
		{
			"\MGVE_Development\data\MrFox\MrFox_glock17.paa"
		};
	};
	class MGVE_VG_MrFox_Debug : CUP_hgun_Glock17
	{
		scope = 2;
		baseWeapon = "MGVE_VG_MrFox_Debug";
		displayName = "[MG] G17 (Mr. Fox Debug)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]=
		{
			"\MGVE_Development\data\_debug\debugTexture.paa"
		};
	};
};