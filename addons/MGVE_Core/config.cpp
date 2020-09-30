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

class CfgWeapons 
{
    /*class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
		class Eventhandlers;
	};
	class CUP_arifle_FNFAL: Rifle_Base_F
	{
		magazineWell[]=  
		{
            CBA_762x51_FAL, 
		};
	};
	class rhs_weap_M590_5RD : Rifle_Base_F
	{
		magazineWell[]=  
		{
            RHS_12g_5rnds, 
		};
	};
	class rhs_weap_M590_8RD : rhs_weap_M590_5RD
	{
		magazineWell[]=  
		{
            RHS_12g_8rnds,
            CBA_12g_8rnds, 
		};
	};
	class rhs_weap_Izh18 : Rifle_Base_F
	{
		magazineWell[]=  
		{
            CBA_12g_1rnd, 
		};
	};
	class CUP_sgun_SPAS12: Rifle_Base_F
	{
		magazineWell[]=  
		{
            CBA_12g_8rnds,
		};
	};*/
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
    class MGVE_Ammo_300_TracerIR: rhs_ammo_556x45_M855A1_Ball_Red
	{
    	airFriction = -0.001;
    	hit=6;
    	caliber=1;
    	typicalSpeed= 500;
    	nvgOnly = 1;
    };

    //
	/*class BulletBase; //Possibly depreciated due to CUP changes?
	class MGF_B_Flech_Submunition: BulletBase { //#00 Buckshot
        //vanilla values have been left as comments for reference purposes
        caliber = 4.5; //penetration of ~3mm RHA, ~9.6mm metal
        //caliber = 1; //too high, ~5.7mm of RHA (380*1*15/1000=5.7), ~18.25 metal
        //cost = 1;
        //hit = 20;
        //simulationStep = 0.0001;
        //cartridge = "";
        //submunitionAmmo = "B_12Gauge_Pellets_Submunition_Deploy";
        submunitionConeType[] = {"poissondisc", 18};  //#00 Buckshot generally has 9 pellets per shell
        //submunitionConeType[] = {"poissondisc", 18};
        //submunitionConeAngle = 0.8;
        //triggerSpeedCoef[] = {0.85, 1};
        triggerTime = 0.0; // Shot takes ~5-15 feet to start spreading out and the vanilla triggerTime is too short to allow that
        //triggerTime = 0.001;
    };
    class MGF_B_Flech_Submunition_Deploy: BulletBase {
        airFriction = -0.0010;
        //airFriction = -0.0067;
        caliber = 4.5;
        hit = 10; //vanilla hit is way too high
        //hit = 6;
        //typicalSpeed = 360;
        //deflecting = 35;
    };
    class MGF_B_Flech_Submunition_Flech: MGF_B_Flech_Submunition {
        caliber = 4.5;
        submunitionAmmo = "MGF_B_Flech_Submunition_Flech_Deploy";
        submunitionConeType[] = {"poissondisc", 18};
        submunitionConeAngle = 0.51;
    };
    class MGF_B_Flech_Submunition_Flech_Deploy: MGF_B_Flech_Submunition_Deploy {
        airFriction = -0.0001;
        caliber = 4.5;
        hit = 10;
    };*/
};

class CfgMagazines
{
    
	class rhs_mag_30rnd_556x45_m855a1_pmag;
	class rhs_mag_30rnd_556x45_m855a1_stanag;
	class rhsusf_100rnd_556x45_m200_soft_pouch_coyote;
	class rhsusf_200rnd_556x45_m855_soft_pouch_coyote;

    /** 300 BLACKOUT PMAG**/
    class MGVE_Mag_30_300_PMAG_Normal: rhs_mag_30rnd_556x45_m855a1_pmag 
	{
        author = "Sawtes";
        displayName = "30Rnd PMAG";
        ammo = "MGVE_Ammo_300";
        mass=12;
		tracersEvery=0;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_30_300_PMAG_Tracer: rhs_mag_30rnd_556x45_m855a1_pmag 
	{
        author = "Sawtes";
        displayName = "30Rnd PMAG (Tracer)";
        ammo = "MGVE_Ammo_300_Tracer";
        mass=12;
		tracersEvery=1;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_30_300_PMAG_Tracer3: rhs_mag_30rnd_556x45_m855a1_pmag 
	{
        author = "Sawtes";
        displayName = "30Rnd PMAG (Tracer every 3)";
        ammo = "MGVE_Ammo_300_Tracer";
        mass=12;
		tracersEvery=3;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_30_300_PMAG_TracerIR: rhs_mag_30rnd_556x45_m855a1_pmag 
	{
        author = "Sawtes";
        displayName = "30Rnd PMAG (Tracer IR)";
        ammo = "MGVE_Ammo_300_TracerIR";
        mass=12;
		tracersEvery=1;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    /** 300 BLACKOUT STANAG**/
    class MGVE_Mag_30_300_Stanag_Normal: rhs_mag_30rnd_556x45_m855a1_stanag 
	{
        author = "Sawtes";
        displayName = "30Rnd Stanag";
        ammo = "MGVE_Ammo_300";
        mass=12;
		tracersEvery=0;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_30_300_Stanag_Tracer: rhs_mag_30rnd_556x45_m855a1_stanag 
	{
        author = "Sawtes";
        displayName = "30Rnd Stanag (Tracer)";
        ammo = "MGVE_Ammo_300_Tracer";
        mass=12;
		tracersEvery=1;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_30_300_Stanag_Tracer3: rhs_mag_30rnd_556x45_m855a1_stanag 
	{
        author = "Sawtes";
        displayName = "30Rnd Stanag (Tracer every 3)";
        ammo = "MGVE_Ammo_300_Tracer";
        mass=12;
		tracersEvery=3;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_30_300_Stanag_TracerIR: rhs_mag_30rnd_556x45_m855a1_stanag 
	{
        author = "Sawtes";
        displayName = "30Rnd Stanag (Tracer IR)";
        ammo = "MGVE_Ammo_300_TracerIR";
        mass=12;
		tracersEvery=1;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    
    /** 300 BLACKOUT SOFTPACKS**/
    class MGVE_Mag_100_300_SoftPack_Normal: rhsusf_100rnd_556x45_m200_soft_pouch_coyote 
	{
        author = "Sawtes";
        displayName = "100Rnd Soft Pack";
        ammo = "MGVE_Ammo_300";
        mass=35;
		tracersEvery=0;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_100_300_SoftPack_Tracer: rhsusf_100rnd_556x45_m200_soft_pouch_coyote 
	{
        author = "Sawtes";
        displayName = "100Rnd Soft Pack (Tracer)";
        ammo = "MGVE_Ammo_300_Tracer";
        mass=35;
		tracersEvery=1;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_100_300_SoftPack_Tracer3: rhsusf_100rnd_556x45_m200_soft_pouch_coyote 
	{
        author = "Sawtes";
        displayName = "100Rnd Soft Pack (Tracer TE3)";
        ammo = "MGVE_Ammo_300_Tracer";
        mass=35;
		tracersEvery=3;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_100_300_SoftPack_TracerIR: rhsusf_100rnd_556x45_m200_soft_pouch_coyote 
	{
        author = "Sawtes";
        displayName = "100Rnd Soft Pack (Tracer IR)";
        ammo = "MGVE_Ammo_300_TracerIR";
        mass=35;
		tracersEvery=1;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_200_300_SoftPack_Normal: rhsusf_200rnd_556x45_m855_soft_pouch_coyote 
	{
        author = "Sawtes";
        displayName = "200Rnd Soft Pack";
        ammo = "MGVE_Ammo_300";
        mass=72;
		tracersEvery=0;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_200_300_SoftPack_Tracer: rhsusf_200rnd_556x45_m855_soft_pouch_coyote 
	{
        author = "Sawtes";
        displayName = "200Rnd Soft Pack (Tracer)";
        ammo = "MGVE_Ammo_300_Tracer";
        mass=72;
		tracersEvery=1;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_200_300_SoftPack_Tracer3: rhsusf_200rnd_556x45_m855_soft_pouch_coyote 
	{
        author = "Sawtes";
        displayName = "200Rnd Soft Pack (Tracer TE3)";
        ammo = "MGVE_Ammo_300_Tracer";
        mass=72;
		tracersEvery=3;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };
    class MGVE_Mag_200_300_SoftPack_TracerIR: rhsusf_200rnd_556x45_m855_soft_pouch_coyote 
	{
        author = "Sawtes";
        displayName = "200Rnd Soft Pack (Tracer IR)";
        ammo = "MGVE_Ammo_300_TracerIR";
        mass=72;
		tracersEvery=1;
        displayNameShort = ".300 Blackout";
        descriptionShort = "The .300 AAC Blackout was designed to give the AR platform extra umph in terms of power and penetration on intermediate ranges with reduce recoil while holding the 30 round mag.";
    };

    /** 7.62x51 **/
    class rhs_75rnd_762x39mm_tracer;
    class CUP_20Rnd_TE1_Red_Tracer_762x51_G3;
    class MGVE_Mag_30_762x51: CUP_20Rnd_TE1_Red_Tracer_762x51_G3
	{
		displayName="7.62mm 30rnd Mag (Tracer)";
		ammo="CUP_B_762x51_noTracer";
		count=30;
		mass=18;
		tracersEvery=1; 
	};
    class MGVE_Mag_75_762x51: rhs_75rnd_762x39mm_tracer
	{
		scope=2;
		displayName="7.62mm 75rnd Mag";
		descriptionShort="";
		count=75;
		ammo="CUP_B_762x51_Tracer_Red";
		tracersEvery=0;
		mass=55;
		initSpeed=833;
	};
	class MGVE_Mag_75_762x51_Tracer1: rhs_75rnd_762x39mm_tracer
	{
		scope=2;
		displayName="7.62mm 75rnd Mag (Tracer)";
		descriptionShort="";
		count=75;
		ammo="CUP_B_762x51_Tracer_Red";
		tracersEvery=1;
		mass=55;
		initSpeed=833;
	};
	class MGVE_Mag_75_762x51_Tracer4: rhs_75rnd_762x39mm_tracer
	{
		scope=2;
		displayName="7.62mm 75rnd Mag (Tracer Every 4)";
		descriptionShort="";
		count=75;
		ammo="CUP_B_762x51_Tracer_Red";
		tracersEvery=4;
		mass=55;
		initSpeed=833;
	};

    /** 9x19 **/
	class cup_15rnd_9x19_m9;
    class MGVE_Mag_30_9x19: cup_15rnd_9x19_m9
	{
		displayName="M9 Mag 30rnd";
		ammo="CUP_B_9x18_Ball_Tracer_Red";
		count=30;
		mass=8;
		tracersEvery=0;
	};
	class MGVE_Mag_15_9x19_Tracer1: cup_15rnd_9x19_m9
	{
		displayName="M9 Mag 15rnd (Tracer)";
		ammo="CUP_B_9x18_Ball_Tracer_Red";
		count=15;
		mass=6;
		tracersEvery=1;
	};
	class MGVE_Mag_30_9x19_Tracer1: cup_15rnd_9x19_m9
	{
		displayName="M9 Mag 30rnd (Tracer)";
		ammo="CUP_B_9x18_Ball_Tracer_Red";
		count=30;
		mass=8;
		tracersEvery=1;
	};

    /** FLECHETTE ROUNDS **/ //Possibly depreciated due to CUP changes?
	/*class CUP_6Rnd_B_Beneli_74Pellets;
	class MGF_A_12G_Flechette_Benelli6: CUP_6Rnd_B_Beneli_74Pellets 
	{
		scope = 1;
        author = "Sawtes";
        displayName = "6Rnd. M1014 Flechettes";
        ammo = "MGF_B_Flech_Submunition_Flech";
        displayNameShort = "Flechettes";
        descriptionShort = "Used for war crimes";
    };
    class CUP_8Rnd_B_Beneli_74Pellets;
    class MGF_A_12G_Flechette_Benelli8: CUP_8Rnd_B_Beneli_74Pellets 
	{
		scope = 1;
        author = "Sawtes";
        displayName = "8Rnd. M1014 Flechettes";
        ammo = "MGF_B_Flech_Submunition_Flech";
        displayNameShort = "Flechettes";
        descriptionShort = "Used for war crimes";
    };
    class CUP_8Rnd_B_Saiga12_74Slug_M;
    class MGF_A_12G_Flechette_Saiga5: CUP_8Rnd_B_Saiga12_74Slug_M 
	{
		scope = 1;
        author = "Sawtes";
        displayName = "5Rnd. Saiga 12K Flechettes";
        ammo = "MGF_B_Flech_Submunition_Flech";
        displayNameShort = "Flechettes";
        descriptionShort = "Used for war crimes";
    };
    class CUP_20Rnd_B_Saiga12_74Slug_M;
    class MGF_A_12G_Flechette_Saiga12: CUP_20Rnd_B_Saiga12_74Slug_M 
	{
		scope = 1;
        author = "Sawtes";
        displayName = "12Rnd. Saiga 12K Flechettes";
        ammo = "MGF_B_Flech_Submunition_Flech";
        displayNameShort = "Flechettes";
        descriptionShort = "Used for war crimes";
    };
    class CUP_20Rnd_B_AA12_Pellets;
    class MGF_A_12G_Flechette_AA12: CUP_20Rnd_B_AA12_Pellets 
	{
		scope = 1;
        author = "Sawtes";
        displayName = "20Rnd. AA12 Flechettes";
        ammo = "MGF_B_Flech_Submunition_Flech";
        displayNameShort = "Flechettes";
        descriptionShort = "Used for war crimes";
    };
    class ACE_2Rnd_12Gauge_Pellets_No0_Buck;
    class MGF_A_12G_Flechette_vanilla: ACE_2Rnd_12Gauge_Pellets_No0_Buck 
	{
		scope = 1;
        author = "Sawtes";
        displayName = "12 Gauge 2Rnd Flechettes";
        ammo = "MGF_B_Flech_Submunition_Flech";
        displayNameShort = "Flechettes";
        descriptionShort = "Used for war crimes";
    };
    class rhsusf_5rnd_00buck;
    class MGF_A_12G_Flechette_M590_5: rhsusf_5rnd_00buck 
	{
		scope = 1;
        author = "Sawtes";
        displayName = "5Rnd Flechettes";
        ammo = "MGF_B_Flech_Submunition_Flech";
        displayNameShort = "Flechettes";
        descriptionShort = "Used for war crimes";
    };
    class rhsusf_8rnd_00buck;
    class MGF_A_12G_Flechette_M590_8: rhsusf_8rnd_00buck 
	{
		scope = 1;
        author = "Sawtes";
        displayName = "8Rnd Flechettes";
        ammo = "MGF_B_Flech_Submunition_Flech";
        displayNameShort = "Flechettes";
        descriptionShort = "Used for war crimes";
    };
    class CUP_1Rnd_B_CZ584_74Pellets;
    class MGF_A_12G_Flechette_1: CUP_1Rnd_B_CZ584_74Pellets 
	{
		scope = 1;
        author = "Sawtes";
        displayName = "1Rnd Flechettes";
        ammo = "MGF_B_Flech_Submunition_Flech";
        displayNameShort = "Flechettes";
        descriptionShort = "Used for war crimes";
    };*/
};

class CfgMagazineWells
{
    //300 BLK
	class CBA_300_Blackout
	{
		MGVE_Magazines[]=
		{
            "MGVE_Mag_30_300_PMAG_Normal",
            "MGVE_Mag_30_300_PMAG_Tracer",
			"MGVE_Mag_30_300_PMAG_Tracer3",
            "MGVE_Mag_30_300_PMAG_TracerIR",
			"MGVE_Mag_30_300_Stanag_Normal",
			"MGVE_Mag_30_300_Stanag_Tracer3",
			"MGVE_Mag_30_300_Stanag_Tracer",
			"MGVE_Mag_30_300_Stanag_TracerIR",
		};
	};
	class CBA_300_Blackout_XL
	{
		MGVE_Magazines[]=
		{
			"MGVE_Mag_100_300_SoftPack_Normal",
			"MGVE_Mag_100_300_SoftPack_Tracer",
			"MGVE_Mag_100_300_SoftPack_Tracer3",
			"MGVE_Mag_100_300_SoftPack_TracerIR",
            "MGVE_Mag_200_300_SoftPack_Normal",
            "MGVE_Mag_200_300_SoftPack_Tracer",
			"MGVE_Mag_200_300_SoftPack_Tracer3",
			"MGVE_Mag_200_300_SoftPack_TracerIR",
		};
	};

    // 762x51
	class CBA_762x51_FAL
	{
		MGVE_Magazines[]=
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
		};
	};
	class CBA_762x51_G3
	{
		MGVE_Magazines[]=
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

		};
	};
	class CBA_762x51_HK417
	{
		MGVE_Magazines[]=
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

		};
	};
	class CBA_762x51_SCAR
	{
		MGVE_Magazines[]=
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

		};
	};
	class CBA_762x51_AR10
	{
		MGVE_Magazines[]=
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

		};
	};

    //9x19
    class CBA_9x19_M9
	{
		MGVE_Magazines[]=
		{
			"MGVE_Mag_30_9x19",
			"MGVE_Mag_15_9x19_Tracer1",
			"MGVE_Mag_30_9x19_Tracer1",
		};
	};

    // Flechettes
	/*class CBA_12g_SAIGA //Possibly depreciated due to CUP changes?
	{
		MGVE_Magazines[]=
		{
			"MGF_A_12G_Flechette_Saiga5",
		};
	};
	class CBA_12g_SAIGA_XL
	{
		MGVE_Magazines[]=
		{
			"MGF_A_12G_Flechette_Saiga12",
		};
	};
	class CBA_12g_6rnds
	{
		MGVE_Magazines[]=
		{
			"MGF_A_12G_Flechette_Benelli6",
		};
	};
	class CBA_12g_8rnds
	{
		MGVE_Magazines[]=
		{
			"MGF_A_12G_Flechette_Benelli8",
		};
	};
	class CBA_12g_2rnds 
	{
        MGVE_Magazines[] = 
        {
            "MGF_A_12G_Flechette_vanilla",
        };
    };
    class HunterShotgun_01_12GA 
	{
        MGVE_Magazines[] = 
        {
            "MGF_A_12G_Flechette_vanilla",
        };
    };
    class RHS_12g_5rnds 
	{
        MGVE_Magazines[] = 
        {
            "MGF_A_12G_Flechette_M590_5",
        };
    };
    class RHS_12g_8rnds 
	{
        MGVE_Magazines[] = 
        {
            "MGF_A_12G_Flechette_M590_8",
        };
    };
    class CBA_12g_AA12
	{
        MGVE_Magazines[] = 
        {
            "MGF_A_12G_Flechette_AA12",
        };
    };
    class CBA_12g_AA12_XL
    {
        MGVE_Magazines[] = 
        {
            "MGF_A_12G_Flechette_AA12",
        };
    };
    class CBA_12g_1rnd
	{
		MGVE_Magazines[]=
		{
			"MGF_A_12G_Flechette_1",
		};
	};*/
};