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
	};
	class twc_dummyround_artillery_medium: ModuleOrdnanceHowitzer_F_ammo
	{
		displayname = "155mm Dummy Round";
		hit = 0;
		indirectHit = 0;
	};
	class twc_dummyround_artillery_big: ModuleOrdnanceRocket_F_ammo
	{
		displayname = "203mm Dummy Round";
		hit = 0;
		indirectHit = 0;
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
};
