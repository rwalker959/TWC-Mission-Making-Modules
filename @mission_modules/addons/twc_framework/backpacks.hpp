#define ADD_MAGA(a,b) class _nc_##a {magazine = a; count = b;}
#define ADD_WEAP(a,b) class _nc_##a {weapon = a; count = b;}
#define ADD_ITEM(a,b) class _nc_##a {name = a; count = b;}

//Base Classes
class sp_webbing_58pattern_LargePack;
class SP_Backpack_2InchCarrier;
class SP_Backpack_CarlGustavCarrier;


//Section, regular
class TWC_Backpack_ColdWar_Regular_SectionCommander: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 300;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,1);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_762_20Rnd,5);
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T,3);
	};
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
};
class TWC_Backpack_ColdWar_Regular_Rifleman: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 250;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_20Rnd,8);
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T,5);
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 2);
	};
};

class TWC_Backpack_ColdWar_Regular_MGASS: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 250;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_20Rnd,5);
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T,3);
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 5);
	};
};
class TWC_Backpack_ColdWar_Regular_MG: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 250;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 8);
	};
};

class TWC_Backpack_ColdWar_Regular_2iC: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 350;
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_20Rnd, 6);
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T, 2);
		ADD_MAGA(SP_32Rnd_9x19_L2A3_Sterling, 4);
		ADD_MAGA(SmokeShell, 2);
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 3);
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, 2);
	};
	
	class TransportItems {
		ADD_ITEM(ACE_morphine,4);
		ADD_ITEM(ACE_epinephrine,2);
	};
};
class TWC_Backpack_ColdWar_Regular_AT: SP_Backpack_CarlGustavCarrier
{
	scope = 1;
	maximumLoad = 350;
	class TransportMagazines {
		ADD_MAGA(SP_32Rnd_9x19_L2A3_Sterling, 4);
		ADD_MAGA(MAA_MAAWS_GMM_HEAT,2);
		ADD_MAGA(MAA_MAAWS_HE441_AB500,1);
		ADD_MAGA(MAA_MAAWS_HE441_AB250,1);
	};
};

class TWC_Backpack_ColdWar_Regular_ASSAT: SP_Backpack_CarlGustavCarrier[[["UK3CB_BAF_L1A1_Wood","","","",["UK3CB_BAF_762_20Rnd",20],[],""],[],[],["sp_80para_combats_item",[["FISH_Cream_Kit_Europe",1],["ACE_fieldDressing",4],["ACE_elasticBandage",4],["ACE_packingBandage",4],["ACE_quikclot",4],["kat_chestSeal",1],["ACE_tourniquet",2],["kat_Painkiller",1,4],["murshun_cigs_lighter",1,100],["murshun_cigs_cigpack",1,20]]],["sp_webbing_58pattern_fightingorder_extra",[["UK3CB_BAF_762_20Rnd",4,20],["UK3CB_BAF_762_20Rnd_T",2,20],["UK3CB_BAF_SmokeShell",2,1],["CUP_HandGrenade_L109A1_HE",1,1]]],["SP_Backpack_CarlGustavCarrier",[["MAA_MAAWS_HE441_AB500",1,1],["MAA_MAAWS_GMM_HE",1,1],["MRAWS_HEAT_F",2,1],["UK3CB_BAF_762_20Rnd",1,20]]],"sp_Helmet_Mk3HSAT_Cover_Od_Scrim_3","sp_accessories_scarf_od_brown",[],["","","ItemRadio","ItemCompass","ItemWatch","sp_accessories_gaiters_od"]],[]]
{
	scope = 1;
	maximumLoad = 400;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_20Rnd, 4);
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T, 2);
		ADD_MAGA(MAA_MAAWS_GMM_HEAT,2);
		ADD_MAGA(MAA_MAAWS_GMM_HE,1);
		ADD_MAGA(MAA_MAAWS_HE441_AB250,1);
	};
};


class TWC_Backpack_ColdWar_Regular_Platoon_Commander: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 200;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,1);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_ColdWar_Regular_Platoon_Sergeant: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 600;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
		ADD_ITEM(ACE_wirecutter,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_762_20Rnd,20);
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T,8);
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T,2);
		ADD_MAGA(SP_32Rnd_9x19_L2A3_Sterling,5);
	};
};
class TWC_Backpack_ColdWar_Regular_Platoon_Medic: sp_webbing_58pattern_LargePack
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 500;
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing,20);
		ADD_ITEM(ACE_morphine,10);
		ADD_ITEM(ACE_elasticBandage,20);
		ADD_ITEM(ACE_quikclot,20);
		ADD_ITEM(ACE_packingBandage,20);
		ADD_ITEM(ACE_epinephrine,10);
		ADD_ITEM(ACE_salineIV,20);
		ADD_ITEM(ACE_salineIV_500,10);
		ADD_ITEM(ACE_tourniquet,10);
		ADD_ITEM(ACE_surgicalKit,1);
		ADD_ITEM(ACE_splint,1);
		ADD_ITEM(kat_IV_16,20);
		ADD_ITEM(kat_AED,1);
		ADD_ITEM(kat_chestSeal,10);
		ADD_ITEM(kat_IO_FAST,10);
		ADD_ITEM(kat_Painkiller,5);
	};
};
class TWC_Backpack_ColdWar_Regular_Platoon_Mortar: SP_Backpack_2InchCarrier
{
	scope = 1;
	maximumLoad = 500;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Shells, 10);
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White, 4);
	};
};