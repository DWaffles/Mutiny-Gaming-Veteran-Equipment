#include "basicdefines_A3.hpp"

class CfgPatches {
    class aotmask {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1;
        #include "a3_addons.hpp"
    };
};

class cfgWeapons { 
	class ItemCore;
	class HeadgearItem;

	
	//Black Mask
	class MGVE_H_aot_mask: ItemCore {
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
		ace_hearing_lowerVolume = 0.40;  // Muffling of the sound (0 to 1, higher means more muffling)

		author = "Facel";
		scope = 2;
		displayName = "[MG] Mask (Black)";
		model = "\aot_mask\aot_mask";
		picture = "\aot_mask\UI\gear_aot_mask_01_x_ca";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\aot_mask\data\aot_mask_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\aot_mask\data\aot_mask_01.rvmat"};
		
			class ItemInfo: HeadgearItem {
				allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
				mass = 10;
				uniformModel = "\aot_mask\aot_mask.p3d";
				hiddenSelections[] = {"camo"};
				hiddenSelectionsTextures[] = {"\aot_mask\data\aot_mask_01_co.paa"};
				hiddenSelectionsMaterials[] = {"\aot_mask\data\aot_mask_01.rvmat"};
				modelSides[] = {6};
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName	= "HitHead"; 
					armor		= 12; 
					passThrough	= 0.3; 
				};
			};
		};
	};
};