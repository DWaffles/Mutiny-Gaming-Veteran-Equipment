#include "BIS_AddonInfo.hpp"
class CfgPatches 
{
    class MGVE_VeteranLaunchers
    { 
		units[]={};
		weapons[]=
		{
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
			"\MGVE_VeteranLaunchers\data\Khaled_maaws.paa"
		};
	};
	class MGVE_VL_VonHoffstot: launch_MRAWS_green_f
	{
		baseWeapon = "MGVE_VL_VonHoffstot";
		scope=2;
		displayName="[MG] MAAWS Mk4 Mod 1 (Von Hoffstot)";
		hiddenSelections[] = {"camo1"};		
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranLaunchers\data\VonHoffstot_maaws3.paa",
		};
	};
};