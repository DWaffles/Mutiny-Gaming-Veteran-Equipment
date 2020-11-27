class CfgPatches
{
	class AK5C
	{
		author="Luca";
		requiredaddons[]=
		{
			"A3_Weapons_F",
			"A3_Data_F"
		};
		requiredversion=1;
		units[]={};
		weapons[]=
		{
			"AK5C",
			"AK5C_Collapsed"
		};
		magazines[]={};
	};
};
class CfgCloudlets
{
	class Default;
	class FA1_FiringSmoke_Effect: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1.1;
		lifeTime=3;
		moveVelocity[]=
		{
			"-0.15*directionX",
			"-0.15*directionY",
			"-0.15*directionZ"
		};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0.1;
		size[]={0.1,0.15000001};
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.31999999},
			{0.30000001,0.30000001,0.30000001,0.28},
			{0.30000001,0.30000001,0.30000001,0.25},
			{0.30000001,0.30000001,0.30000001,0.22},
			{0.30000001,0.30000001,0.30000001,0.1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={2,1};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		blockAIVisibility=0;
		sizeCoef=0.5;
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=20;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
};
class FA1_FiringSmoke
{
	class FA1_FiringSmoke
	{
		simulation="particles";
		type="FA1_FiringSmoke_Effect";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class SlotInfo;
class PointerSlot;
class CowsSlot;
class MuzzleSlot;
class WeaponSlotsInfo;
class GunParticles;
class asdg_OpticRail1913;
class asdg_PistolOpticMount;
class asdg_PistolUnderRail;
class asdg_UnderSlot;
class asdg_FrontSideRail;
class asdg_MuzzleSlot_9MM;
class asdg_MuzzleSlot_45ACP;
class asdg_MuzzleSlot_545R;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;
class CfgWeapons
{
	class Rifle_Base_F;
	class FA1_Base_Rifle: Rifle_Base_F
	{
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		class GunParticles: GunParticles
		{
			class SmokeEffect
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="FA1_FiringSmoke";
			};
		};
		class AnimationSources;
	};
	class MGVE_W_AK5C: FA1_Base_Rifle
	{
		scope=2;
		author="Luca, Model by: A-Editor";
		maxZeroing=600;
		displayName="AK5C";
		descriptionshort="AK5C - Assault Rifle <br/>Caliber: 5.56x45mm";
		model="\AK5C\data\ak5c.p3d";
		magazineWell[]=
		{
			"STANAG_556x45",
			"STANAG_556x45_Large",
			"CBA_556x45_STANAG",
			"CBA_556x45_STANAG_L",
			"CBA_556x45_STANAG_XL",
			"CBA_556x45_STANAG_2D",
			"CBA_556x45_STANAG_2D_XL"
		};
		reloadAction="GestureReloadSPAR_01";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"
		};
		drySound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_dry",
			0.5,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_reload",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_firemode",
			0.60000002,
			1,
			5
		};
		picture="\AK5C\data\icons\AK5c_ca.paa";
		inertia=0.44999999;
		recoil="recoil_aks";
		modes[]=
		{
			"FullAuto",
			"Single"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"AK5C\data\textures\ak5c_co.paa"
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mk20_Shot_SoundSet",
					"Mk20_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"Mk20_silencerShot_SoundSet",
					"Mk20_silencerTail_SoundSet"
				};
			};
			dispersion=0.00132;
			reloadTime=0.0735;
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mk20_Shot_SoundSet",
					"Mk20_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"Mk20_silencerShot_SoundSet",
					"Mk20_silencerTail_SoundSet"
				};
			};
			dispersion=0.00132;
			reloadTime=0.0735;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			allowedSlots[]={901};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconScale=0.1;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconScale=0.1;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconScale=0.1;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconScale=0.1;
			};
		};
	};
	class MGVE_W_AK5C_Collapsed: MGVE_W_AK5C
	{
		scope=2;
		author="Luca, Model by: A-Editor";
		displayName="AK5C (Collapsed)";
		model="\AK5C\data\ak5c_collapsed.p3d";
		inertia=0.34999999;
	};
};
