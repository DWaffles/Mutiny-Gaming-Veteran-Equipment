class CfgPatches
{
	class MGVE_Core
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {rhsusf_c_weapons};
	};
};

class CfgMods
{
	class Mod_Base;
	class MutinyGamingVeteranEquipment: Mod_Base
	{
        name        = "Mutiny Gaming Veteran Equipment";
        author      = "Waffles";
        overview    = "Custom equipment for veterans of Mutiny Gaming.";
        description = "Collection of personalized equipment for members of Mutiny Gaming. The textures in here are edited versions of the CUP/RHS originals. Much help from Sawtes, Texas, and other members of Mutiny Gaming.";

        picture 	= "\MGVE_Core\ui\logo_1024x1024.paa";	// 2048x1024	// From expansion menu
        logo 		= "\MGVE_Core\ui\logo_128x128.paa";	    // 128x128		// Logo displayed in the main menu
        logoOver 	= "\MGVE_Core\ui\logo_128x128.paa";	    // 128x128		// When the mouse is over, in the main menu
        logoSmall 	= "\MGVE_Core\ui\logo_64x64.paa";		// 64x64		// Display next to the item added by the mod


        dlcColor[] = { 0.54, 0.49, 0.00, 1};

        actionName      = "Discord";
        action          = "https://discord.gg/G4kH3sT";
        tooltip         = "Mutiny Gaming Veteran Equipment";
		tooltipOwned    = "Mutiny Gaming Veteran Equipment";

        hideName    = 0;
        hidePicture = 0;
		
        dir = "MGVE";
	};
};

class CfgAmmo
{
	class rhs_ammo_556x45_M855_Ball;
	class rhs_ammo_556x45_M855A1_Ball_Red;

    class MGVE_Ammo_300: rhs_ammo_556x45_M855_Ball
	{
    	airFriction = -0.001;
    	hit=6;
    	caliber=1;
    	typicalSpeed= 500;
    };
    class MGVE_Ammo_300_Tracer: rhs_ammo_556x45_M855A1_Ball_Red
	{
    	airFriction = -0.001;
    	hit=6;
    	caliber=1;
    	typicalSpeed= 500;
    };
    class MGVE_Ammo_300_Tracer_IR: rhs_ammo_556x45_M855A1_Ball_Red
	{
    	airFriction = -0.001;
    	hit=6;
    	caliber=1;
    	typicalSpeed= 500;
    	nvgOnly = 1;
    };
};

class CfgMagazines
{
	class rhs_mag_30rnd_556x45_m855a1_pmag;
	class rhs_mag_30rnd_556x45_m855a1_stanag;
	class rhsusf_100rnd_556x45_m200_soft_pouch_coyote;
	class rhsusf_200rnd_556x45_m855_soft_pouch_coyote;

	//PMAG
    class MGVE_Mag_300_PMAG_Normal: rhs_mag_30rnd_556x45_m855a1_pmag 
	{
        author = "Sawtes";
        displayName = "30Rnd PMAG";
        ammo = "MGVE_Ammo_300";
        mass=12;
		tracersEvery=0;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_300_PMAG_Tracer: rhs_mag_30rnd_556x45_m855a1_pmag 
	{
        author = "Sawtes";
        displayName = "30Rnd PMAG (Tracer)";
        ammo = "MGVE_Ammo_300_Tracer";
        mass=12;
		tracersEvery=1;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_300_PMAG_Tracer3: rhs_mag_30rnd_556x45_m855a1_pmag 
	{
        author = "Sawtes";
        displayName = "30Rnd PMAG (Tracer TE3)";
        ammo = "MGVE_Ammo_300_Tracer";
        mass=12;
		tracersEvery=3;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_300_PMAG_Tracer_IR: rhs_mag_30rnd_556x45_m855a1_pmag 
	{
        author = "Sawtes";
        displayName = "30Rnd PMAG (Tracer IR)";
        ammo = "MGVE_Ammo_300_Tracer_IR";
        mass=12;
		tracersEvery=1;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
	//STANAG
    class MGVE_Mag_300_Stanag_Normal: rhs_mag_30rnd_556x45_m855a1_stanag 
	{
        author = "Sawtes";
        displayName = "30Rnd Stanag";
        ammo = "MGVE_Ammo_300";
        mass=12;
		tracersEvery=0;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_300_Stanag_Tracer: rhs_mag_30rnd_556x45_m855a1_stanag 
	{
        author = "Sawtes";
        displayName = "30Rnd Stanag (Tracer)";
        ammo = "MGVE_Ammo_300_Tracer";
        mass=12;
		tracersEvery=1;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_300_Stanag_Tracer3: rhs_mag_30rnd_556x45_m855a1_stanag 
	{
        author = "Sawtes";
        displayName = "30Rnd Stanag (Tracer TE3)";
        ammo = "MGVE_Ammo_300_Tracer";
        mass=12;
		tracersEvery=3;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_300_Stanag_Tracer_IR: rhs_mag_30rnd_556x45_m855a1_stanag 
	{
        author = "Sawtes";
        displayName = "30Rnd Stanag (Tracer IR)";
        ammo = "MGVE_Ammo_300_Tracer_IR";
        mass=12;
		tracersEvery=1;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    
	//COYOTE
    class MGVE_Mag_300_SoftPack_Normal: rhsusf_100rnd_556x45_m200_soft_pouch_coyote 
	{
        author = "Sawtes";
        displayName = "100Rnd Soft Pack";
        ammo = "MGVE_Ammo_300";
        mass=35;
		tracersEvery=0;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_300_SoftPack_Tracer: rhsusf_100rnd_556x45_m200_soft_pouch_coyote 
	{
        author = "Sawtes";
        displayName = "100Rnd Soft Pack (Tracer)";
        ammo = "MGVE_Ammo_300_Tracer";
        mass=35;
		tracersEvery=1;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_300_SoftPack_Tracer3: rhsusf_100rnd_556x45_m200_soft_pouch_coyote 
	{
        author = "Sawtes";
        displayName = "100Rnd Soft Pack (Tracer TE3)";
        ammo = "MGVE_Ammo_300_Tracer";
        mass=35;
		tracersEvery=3;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_300_SoftPack_Tracer_IR: rhsusf_100rnd_556x45_m200_soft_pouch_coyote 
	{
        author = "Sawtes";
        displayName = "100Rnd Soft Pack (Tracer IR)";
        ammo = "MGVE_Ammo_300_Tracer_IR";
        mass=35;
		tracersEvery=1;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    
	//SOFT POUCH COYOTE
    class MGVE_Mag_300_SoftPack_200_Normal: rhsusf_200rnd_556x45_m855_soft_pouch_coyote 
	{
        author = "Sawtes";
        displayName = "200Rnd Soft Pack";
        ammo = "MGVE_Ammo_300";
        mass=72;
		tracersEvery=0;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_300_SoftPack_200_Tracer: rhsusf_200rnd_556x45_m855_soft_pouch_coyote 
	{
        author = "Sawtes";
        displayName = "200Rnd Soft Pack (Tracer)";
        ammo = "MGVE_Ammo_300_Tracer";
        mass=72;
		tracersEvery=1;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_300_SoftPack_200_Tracer3: rhsusf_200rnd_556x45_m855_soft_pouch_coyote 
	{
        author = "Sawtes";
        displayName = "200Rnd Soft Pack (Tracer TE3)";
        ammo = "MGVE_Ammo_300_Tracer";
        mass=72;
		tracersEvery=3;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_300_SoftPack_200_Tracer_IR: rhsusf_200rnd_556x45_m855_soft_pouch_coyote 
	{
        author = "Sawtes";
        displayName = "200Rnd Soft Pack (Tracer IR)";
        ammo = "MGVE_Ammo_300_Tracer_IR";
        mass=72;
		tracersEvery=1;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
};

class CfgMagazineWells
{
	class CBA_300_Blackout
	{
		MGVE_Magazines[]=
		{
			"MGVE_Mag_300_PMAG_Tracer3",
			"MGVE_Mag_300_Stanag_Normal",
			"MGVE_Mag_300_Stanag_Tracer3",
			"MGVE_Mag_300_Stanag_Tracer",
			"MGVE_Mag_300_Stanag_Tracer_IR",
			"MGVE_Mag_300_PMAG_Tracer",
			"MGVE_Mag_300_PMAG_Normal",
			"MGVE_Mag_300_PMAG_Tracer_IR",
		};
	};
	class CBA_300_Blackout_XL
	{
		MGVE_Magazines[]=
		{
			"MGVE_Mag_300_SoftPack_Normal",
			"MGVE_Mag_300_SoftPack_Tracer",
			"MGVE_Mag_300_SoftPack_Tracer3",
			"MGVE_Mag_300_SoftPack_Tracer_IR",
			"MGVE_Mag_300_SoftPack_200_Tracer3",
			"MGVE_Mag_300_SoftPack_200_Tracer",
			"MGVE_Mag_300_SoftPack_200_Tracer_IR",
			"MGVE_Mag_300_SoftPack_200_Normal",
		};
	};
};