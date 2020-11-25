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
	class MGVE_Mod: Mod_Base
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
    class rhs_ammo_556x45_Mk262_ball;
	class rhs_ammo_556x45_M855_Ball;
	class rhs_ammo_556x45_M855A1_Ball_Red;

    class B_762x39_Ball_Green_F;
    class rhs_b_545x39_7n22_ball;

    /** 300 BLK **/
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

    /** 556x45 **/
    class MGVE_Ammo_556x45_Tracer_Red: rhs_ammo_556x45_Mk262_ball
    {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerColor[] = {0.8,0.2,0.1,0.04};
        tracerColorR[] = {0,0,0,0};
    };
    class MGVE_Ammo_556x45_TracerIR: rhs_ammo_556x45_Mk262_ball
    {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerColor[] = {0.8,0.2,0.1,0.04};
        tracerColorR[] = {0,0,0,0};
        nvgOnly = 1;
    };

    /** 762x39 **/
    class MGVE_Ammo_762x39_Tracer_Red: B_762x39_Ball_Green_F
    {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerColor[] = {0.8,0.2,0.1,0.04};
        tracerColorR[] = {0,0,0,0};
    };
    class MGVE_Ammo_762x39_TracerIR: B_762x39_Ball_Green_F
    {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerColor[] = {0.8,0.2,0.1,0.04};
        tracerColorR[] = {0,0,0,0};
        nvgOnly = 1;
    };

    /** 545x39 **/
    class MGVE_Ammo_545x39_Tracer_Red: rhs_b_545x39_7n22_ball
    {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerColor[] = {0.8,0.2,0.1,0.04};
        tracerColorR[] = {0,0,0,0};
    };
    class MGVE_Ammo_545x39_TracerIR: rhs_b_545x39_7n22_ball
    {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerColor[] = {0.8,0.2,0.1,0.04};
        tracerColorR[] = {0,0,0,0};
        nvgOnly = 1;
    };

    
};

class CfgMagazines
{
	class rhs_mag_30rnd_556x45_m855a1_pmag;
	class rhs_mag_30rnd_556x45_m855a1_stanag;
	class rhsusf_100rnd_556x45_m200_soft_pouch_coyote;
	class rhsusf_200rnd_556x45_m855_soft_pouch_coyote;

    class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red;

    class cup_30rnd_TE1_red_Tracer_762x39_ak47_m;
    class rhs_30rnd_545x39_7n22_ak;

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

    /** 556x45 **/
    class MGVE_Mag_30_556x45: rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red  
    {
        author = "Sawtes";
        displayName = "[5.56] 30Rnd Mag";
        ammo = "MGVE_Ammo_556x45_Tracer_Red";
        mass=8;
        tracersEvery=0;
        displayNameShort = "5.56";
        descriptionShort = "5.56";
    };
    class MGVE_Mag_30_556x45_Tracer1_Red: rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red  
    {
        author = "Sawtes";
        displayName = "[5.56] 30Rnd Tracer Mag TE1 (Red)";
        ammo = "MGVE_Ammo_556x45_Tracer_Red";
        mass=8;
        tracersEvery=1;
        displayNameShort = "5.56 TE1";
        descriptionShort = "5.56 TE1";
    };
    class MGVE_Mag_30_556x45_Tracer3_Red: rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red  
    {
        author = "Sawtes";
        displayName = "[5.56] 30Rnd Tracer Mag TE3 (Red)";
        ammo = "MGVE_Ammo_556x45_Tracer_Red";
        mass=8;
        tracersEvery=3;
        displayNameShort = "5.56 TE3";
        descriptionShort = "5.56 TE3";
    };
    class MGVE_Mag_30_556x45_TracerIR: rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red  
    {
        author = "Sawtes";
        displayName = "[5.56] 30Rnd Tracer Mag TE1 (IR)";
        ammo = "MGVE_Ammo_556x45_TracerIR";
        mass=8;
        tracersEvery=1;
        displayNameShort = "5.56 IR";
        descriptionShort = "5.56 IR";
    };

    /** 762x39 **/
    class MGVE_Mag_30_762x39: cup_30rnd_TE1_red_Tracer_762x39_ak47_m  
    {
        author = "Sawtes";
        displayName = "[AK 7.62] 30Rnd Mag";
        ammo = "MGVE_Ammo_762x39_Tracer_Red";
        mass=9.6;
        tracersEvery=0;
        displayNameShort = "7.62";
        descriptionShort = "7.62";
    };
    class MGVE_Mag_30_762x39_Tracer1_Red: cup_30rnd_TE1_red_Tracer_762x39_ak47_m  
    {
        author = "Sawtes";
        displayName = "[AK 7.62] 30Rnd Tracer Mag TE1 (Red)";
        ammo = "MGVE_Ammo_762x39_Tracer_Red";
        mass=9.6;
        tracersEvery=1;
        displayNameShort = "7.62 TE1";
        descriptionShort = "7.62 TE1";
    };
    class MGVE_Mag_30_762x39_Tracer3_Red: cup_30rnd_TE1_red_Tracer_762x39_ak47_m  
    {
        author = "Sawtes";
        displayName = "[AK 7.62] 30Rnd Tracer Mag TE3 (Red)";
        ammo = "MGVE_Ammo_762x39_Tracer_Red";
        mass=9.6;
        tracersEvery=3;
        displayNameShort = "7.62 TE3";
        descriptionShort = "7.62 TE3";
    };
    class MGVE_Mag_30_762x39_TracerIR: cup_30rnd_TE1_red_Tracer_762x39_ak47_m  
    {
        author = "Sawtes";
        displayName = "[AK 7.62] 30Rnd Tracer Mag TE1 (IR)";
        ammo = "MGVE_Ammo_762x39_TracerIR";
        mass=9.6;
        tracersEvery=1;
        displayNameShort = "7.62 IR";
        descriptionShort = "7.62 IR";
    };

    /** 545x39 **/
    class MGVE_Mag_30_545x39: rhs_30rnd_545x39_7n22_ak  
    {
        author = "Sawtes";
        displayName = "[AK 5.45] 30Rnd Mag";
        ammo = "MGVE_Ammo_545x39_Tracer_Red";
        mass=8;
        tracersEvery=0;
        displayNameShort = "5.45";
        descriptionShort = "5.45";
    };
    class MGVE_Mag_30_545x39_Tracer1_Red: rhs_30rnd_545x39_7n22_ak  
    {
        author = "Sawtes";
        displayName = "[AK 5.45] 30Rnd Tracer Mag TE1 (Red)";
        ammo = "MGVE_Ammo_545x39_Tracer_Red";
        mass=8;
        tracersEvery=1;
        displayNameShort = "5.45 TE1";
        descriptionShort = "5.45 TE1";
    };
    class MGVE_Mag_30_545x39_Tracer3_Red: rhs_30rnd_545x39_7n22_ak  
    {
        author = "Sawtes";
        displayName = "[AK 5.45] 30Rnd Tracer Mag TE3 (Red)";
        ammo = "MGVE_Ammo_545x39_Tracer_Red";
        mass=8;
        tracersEvery=3;
        displayNameShort = "5.45 TE3";
        descriptionShort = "5.45 TE3";
    };
    class MGVE_Mag_30_545x39_TracerIR: rhs_30rnd_545x39_7n22_ak  
    {
        author = "Sawtes";
        displayName = "[AK 5.45] 30Rnd Tracer Mag TE1 (IR)";
        ammo = "MGVE_Ammo_545x39_TracerIR";
        mass=8;
        tracersEvery=1;
        displayNameShort = "5.45 IR";
        descriptionShort = "5.45 IR";
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

    // 556x45
    class CBA_556x45_STANAG
    {
        MGVE_Mags[]=
        {
            "MGVE_Mag_30_556x45",
            "MGVE_Mag_30_556x45_Tracer1_Red",
            "MGVE_Mag_30_556x45_Tracer3_Red",
            "MGVE_Mag_30_556x45_TracerIR",
        };
    };

    // 762x39
    class CBA_762x39_AK
    {
        MGVE_Mags[]=
        {
            "MGVE_Mag_30_762x39",
            "MGVE_Mag_30_762x39_Tracer1_Red",
            "MGVE_Mag_30_762x39_Tracer3_Red",
            "MGVE_Mag_30_762x39_TracerIR",
        };
    };
    // 545x39
    class CBA_545x39_AK
    {
        MGVE_Mags[]=
        {
            "MGVE_Mag_30_545x39",
            "MGVE_Mag_30_545x39_Tracer1_Red",
            "MGVE_Mag_30_545x39_Tracer3_Red",
            "MGVE_Mag_30_545x39_TracerIR",
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
};