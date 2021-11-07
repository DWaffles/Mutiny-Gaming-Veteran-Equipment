class MGVE_VG_Nav_AK5C: MGF_Weapon_AK5C_Black
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "[VET] Corax (Nav)";
	baseWeapon ="MGF_VET_Nav_AK5C";
	hiddenSelectionsTextures[] = {"\MGVE_VeteranEquipment\data\nav\nav_ak5c_corax_co.paa"};
	picture = "\MGVE_VeteranEquipment\data\nav\nav_ak5c_corax_ui_co.paa"
	modes[] = {"Single","Fullauto","close","medium","far","Burst"};
	recoil = "Recoil_CUP_M4A3";
	magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag"};
	class FullAuto
	{
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 3;
		aiRateOfFire = 2;
		aiRateOfFireDispersion = 1;
		aiRateOfFireDistance = 500;
		artilleryCharge = 1;
		artilleryDispersion = 1;
		autoFire = 1;
		burst = 1;
		burstRangeMax = -1;
		canShootInWater = 0;
		dispersion = 0.0008727;
		displayName = "Full";
		ffCount = 1;
		ffFrequency = 11;
		ffMagnitude = 0.5;
		flash = "gunfire";
		flashSize = 0.1;
		maxRange = 600;
		maxRangeProbab = 0.01;
		midRange = 500;
		midRangeProbab = 0.2;
		minRange = 400;
		minRangeProbab = 0.05;
		multiplier = 1;
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		reloadTime = 0.0857;
		requiredOpticType = -1;
		showToPlayer = 1;
		sound[] = {"",10,1};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundBurst = 0;
		soundClosure[] = {"sound",1};
		soundContinuous = 0;
		soundEnd[] = {"sound",1};
		soundLoop[] = {};
		sounds[] = {"StandardSound","SilencedSound"};
		textureType = "fullAuto";
		useAction = 0;
		useActionTitle = "";
		weaponSoundEffect = "";
		class BaseSoundModeType
		{};
		class SilencedSound
		{
			begin1[] = {"A3\Sounds_F\weapons\zafir\Silenced_zafir_1",1,1,400};
			begin2[] = {"A3\Sounds_F\weapons\zafir\Silenced_zafir_2",1,1,400};
			begin3[] = {"A3\Sounds_F\weapons\zafir\Silenced_zafir_1",1,1,400};
			begin4[] = {"A3\Sounds_F\weapons\zafir\Silenced_zafir_2",1,1,400};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			soundSetShot[] = {"CUP_M16_Closure_SoundSet","CUP_akm_ShotSD_SoundSet","CUP_rifle1_SD_Tail_SoundSet"};
		};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\zafir\zafir_1a7",1,1,400};
			begin2[] = {"A3\Sounds_F\weapons\zafir\zafir_2a7",1,1,400};
			begin3[] = {"A3\Sounds_F\weapons\zafir\zafir_3a7",1,1,400};
			begin4[] = {"A3\Sounds_F\weapons\zafir\zafir_2a7",1,1,400};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			soundSetShot[] = {"CUP_M16_Closure_SoundSet","CUP_akm_Shot_SoundSet","CUP_lmg1_Tail_SoundSet"};
		};
	};
	class Single
	{
		aiDispersionCoefX = 1.4;
		aiDispersionCoefY = 1.7;
		aiRateOfFire = 2;
		aiRateOfFireDispersion = 1;
		aiRateOfFireDistance = 500;
		artilleryCharge = 1;
		artilleryDispersion = 1;
		autoFire = 0;
		burst = 1;
		burstRangeMax = -1;
		canShootInWater = 0;
		dispersion = 0.0008727;
		displayName = "Semi";
		ffCount = 1;
		ffFrequency = 11;
		ffMagnitude = 0.5;
		flash = "gunfire";
		flashSize = 0.1;
		maxRange = 600;
		maxRangeProbab = 0.01;
		midRange = 500;
		midRangeProbab = 0.4;
		minRange = 400;
		minRangeProbab = 0.05;
		multiplier = 1;
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		reloadTime = 0.0857;
		requiredOpticType = -1;
		showToPlayer = 1;
		sound[] = {"",10,1};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundBurst = 0;
		soundClosure[] = {"sound",1};
		soundContinuous = 0;
		soundEnd[] = {};
		soundLoop[] = {};
		sounds[] = {"StandardSound","SilencedSound"};
		textureType = "semi";
		useAction = 0;
		useActionTitle = "";
		weaponSoundEffect = "";
		class BaseSoundModeType
		{};
		class SilencedSound
		{
			begin1[] = {"A3\Sounds_F\weapons\zafir\Silenced_zafir_1",1,1,400};
			begin2[] = {"A3\Sounds_F\weapons\zafir\Silenced_zafir_2",1,1,400};
			begin3[] = {"A3\Sounds_F\weapons\zafir\Silenced_zafir_1",1,1,400};
			begin4[] = {"A3\Sounds_F\weapons\zafir\Silenced_zafir_2",1,1,400};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			soundSetShot[] = {"CUP_M16_Closure_SoundSet","CUP_akm_ShotSD_SoundSet","CUP_rifle1_SD_Tail_SoundSet"};
		};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\zafir\zafir_1a7",1,1,400};
			begin2[] = {"A3\Sounds_F\weapons\zafir\zafir_2a7",1,1,400};
			begin3[] = {"A3\Sounds_F\weapons\zafir\zafir_3a7",1,1,400};
			begin4[] = {"A3\Sounds_F\weapons\zafir\zafir_2a7",1,1,400};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			soundSetShot[] = {"CUP_M16_Closure_SoundSet","CUP_akm_Shot_SoundSet","CUP_lmg1_Tail_SoundSet"};
		};
	};
	class Burst
	{
		aiDispersionCoefX = 1.4;
		aiDispersionCoefY = 1.7;
		aiRateOfFire = 2;
		aiRateOfFireDispersion = 1;
		aiRateOfFireDistance = 500;
		artilleryCharge = 1;
		artilleryDispersion = 1;
		autoFire = 0;
		burst = 3;
		burstRangeMax = -1;
		canShootInWater = 0;
		dispersion = 0.0008727;
		displayName = "Semi";
		ffCount = 1;
		ffFrequency = 11;
		ffMagnitude = 0.5;
		flash = "gunfire";
		flashSize = 0.1;
		maxRange = 600;
		maxRangeProbab = 0.01;
		midRange = 500;
		midRangeProbab = 0.4;
		minRange = 400;
		minRangeProbab = 0.05;
		multiplier = 1;
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		reloadTime = 0.066666666666;
		requiredOpticType = -1;
		showToPlayer = 1;
		sound[] = {"",10,1};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundBurst = 0;
		soundClosure[] = {"sound",1};
		soundContinuous = 0;
		soundEnd[] = {};
		soundLoop[] = {};
		sounds[] = {"StandardSound","SilencedSound"};
		textureType = "burst";
		useAction = 0;
		useActionTitle = "";
		weaponSoundEffect = "";
		class BaseSoundModeType
		{};
		class SilencedSound
		{
			begin1[] = {"A3\Sounds_F\weapons\zafir\Silenced_zafir_1",1,1,400};
			begin2[] = {"A3\Sounds_F\weapons\zafir\Silenced_zafir_2",1,1,400};
			begin3[] = {"A3\Sounds_F\weapons\zafir\Silenced_zafir_1",1,1,400};
			begin4[] = {"A3\Sounds_F\weapons\zafir\Silenced_zafir_2",1,1,400};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			soundSetShot[] = {"CUP_M16_Closure_SoundSet","CUP_akm_ShotSD_SoundSet","CUP_rifle1_SD_Tail_SoundSet"};
		};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\zafir\zafir_1a7",1,1,400};
			begin2[] = {"A3\Sounds_F\weapons\zafir\zafir_2a7",1,1,400};
			begin3[] = {"A3\Sounds_F\weapons\zafir\zafir_3a7",1,1,400};
			begin4[] = {"A3\Sounds_F\weapons\zafir\zafir_2a7",1,1,400};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			soundSetShot[] = {"CUP_M16_Closure_SoundSet","CUP_akm_Shot_SoundSet","CUP_lmg1_Tail_SoundSet"};
		};
	};
};