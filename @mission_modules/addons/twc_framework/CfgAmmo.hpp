class CfgAmmo
{
	class ModuleOrdnanceMortar_F_ammo;
	class ModuleOrdnanceHowitzer_F_ammo;
	class ModuleOrdnanceRocket_F_ammo;
	class F_40mm_White;
	class F_40mm_Cir;

	class twc_dummyround_artillery_small: ModuleOrdnanceMortar_F_ammo
	{
		displayname = "82mm Dummy Round";
		hit = 0;
		indirectHit = 0;
		explosive = 1;
 		ace_frag_enabled = 0;
		CraterEffects = "ExploAmmoCrater";
	};
	class twc_dummyround_artillery_medium: ModuleOrdnanceHowitzer_F_ammo
	{
		displayname = "155mm Dummy Round";
		hit = 0;
		indirectHit = 0;
		explosive = 1;
		whistleDist = 5000;
		whistleOnFire = 1;
 		ace_frag_enabled = 0;
		CraterEffects = "ExploAmmoCrater";
	};
	class twc_dummyround_artillery_big: ModuleOrdnanceRocket_F_ammo
	{
		displayname = "203mm Dummy Round";
		hit = 0;
		indirectHit = 0;
		explosive = 1;
 		ace_frag_enabled = 0;
		CraterEffects = "ExploAmmoCrater";
	};

	class twc_ammo_artillery_illumination: F_40mm_White
	{
		intensity = 60000;
		coefGravity = 0.25;
	};
	class twc_ammo_artillery_illumination_ir: F_40mm_Cir
	{
		intensity = 60000;
		coefGravity = 0.25;
	};
	
	Class TWC_SmokeExplosion {
	class LightExp {
		simulation = "light";
		type = "ExploLight";
		position[] = {0, 0, 0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 1;
		qualityLevel = -1;     
	};
	class MortarSmoke1 {
		simulation = "particles";
		type = "CloudSmallLight1";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
	class twc_ammo_artillery_smoke : Sh_82mm_AMOS {
		ace_frag_enabled = 0;
		ace_frag_force = 0;
		ExplosionEffects = "TWC_SmokeExplosion";
		CraterEffects = "ATRocketCrater";
		craterShape = "\A3\weapons_f\empty.p3d";	

		soundHit1[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_1", 1, 1, 1000 };
		soundHit2[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_2", 1, 1, 1000 };
		soundHit3[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_3", 1, 1, 1000 };
		soundHit4[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_4", 1, 1, 1000 };
		soundHit5[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_5", 1, 1, 1000 };
		soundHit6[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_6", 1, 1, 1000 };

		multiSoundHit[] = { "soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.1, "soundHit5", 0.15, "soundHit6", 0.15};		
		
		SoundSetExplosion[] = {"","",""};
	};
};
