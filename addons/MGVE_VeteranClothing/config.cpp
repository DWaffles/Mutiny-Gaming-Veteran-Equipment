#include "BIS_AddonInfo.hpp"
class CfgPatches 
{ 
    class MGVE_VeteranClothing
    { 
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"MGVE_Core"
		};
    }; 
}; 

class cfgWeapons 
{ 
	/** CLOTHING **/
	//headwear
	class H_Beret_02; 	// A3/Characters_F
	class H_Cap_blk;	// A3/Characters_F	
	
	class MGVE_VC_Lion: H_Beret_02
	{
		scope = 2;
		displayName="[MG] Beret (Lion)";
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranClothing\data\mg_beret_lion_co.paa"
		};
	};
	class MGVE_VC_Darkie: H_Cap_blk
	{
		scope = 2;
		displayName="[MG] Not Backwards Hat (Darkie)";
		hiddenSelectionsTextures[]=
		{
			"\MGVE_VeteranClothing\data\darkies_cap.paa"
		};
	};
};