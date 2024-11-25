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
		ADD_MAGA(UK3CB_BAF_SmokeShell,1);
		ADD_MAGA(UK3CB_BAF_SmokeShellRed,2);
		ADD_MAGA(UK3CB_BAF_SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_762_20Rnd,6);
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T,3);
	};
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
};
class TWC_Backpack_ColdWar_Regular_Rifleman: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 290;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_20Rnd,8);
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T,5);
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 2);
	};
};

class TWC_Backpack_ColdWar_Regular_MGASS: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 350;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_20Rnd,4);
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T,2);
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 6);
	};
	class TransportItems {
		ADD_ITEM(ACE_SpareBarrel,1);
	};
};
class TWC_Backpack_ColdWar_Regular_MG: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 300;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 8);
	};
};

class TWC_Backpack_ColdWar_Regular_2iC: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 520;
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_20Rnd, 15);
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T, 6);
		ADD_MAGA(SP_32Rnd_9x19_L2A3_Sterling, 4);
		ADD_MAGA(UK3CB_BAF_SmokeShell, 2);
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 2);
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, 2);
	};
	
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing,15);
		ADD_ITEM(ACE_elasticBandage,10);
		ADD_ITEM(ACE_quikclot,10);
		ADD_ITEM(ACE_packingBandage,15);
		ADD_ITEM(kat_Painkiller,5);
	};
};
class TWC_Backpack_ColdWar_Regular_AT: SP_Backpack_CarlGustavCarrier
{
	scope = 1;
	maximumLoad = 250;
	class TransportMagazines {
		ADD_MAGA(SP_32Rnd_9x19_L2A3_Sterling, 4);
		ADD_MAGA(CUP_MAAWS_HEAT_M,2);
		ADD_MAGA(TWC_Magazine_L14A1_HE,1);
	};
};

class TWC_Backpack_ColdWar_Regular_ASSAT: SP_Backpack_CarlGustavCarrier
{
	scope = 1;
	maximumLoad = 360;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_20Rnd, 4);
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T, 2);
		ADD_MAGA(CUP_MAAWS_HEAT_M,2);
		ADD_MAGA(TWC_Magazine_L14A1_HE,1);
		ADD_MAGA(TWC_Magazine_L14A1_Illum,1);
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
		ADD_MAGA(SP_32Rnd_9x19_L2A3_Sterling, 4);
		ADD_MAGA(UK3CB_BAF_SmokeShell,1);
		ADD_MAGA(UK3CB_BAF_SmokeShellRed,2);
		ADD_MAGA(UK3CB_BAF_SmokeShellBlue,2);
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
		ADD_MAGA(UK3CB_BAF_SmokeShell,3);
		ADD_MAGA(UK3CB_BAF_SmokeShellRed,2);
		ADD_MAGA(UK3CB_BAF_SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_762_20Rnd,14);
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T,5);
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
		ADD_ITEM(ACE_morphine,20);
		ADD_ITEM(ACE_packingBandage,60);
		ADD_ITEM(ACE_epinephrine,20);
		ADD_ITEM(ACE_salineIV,20);
		ADD_ITEM(ACE_salineIV_500,10);
		ADD_ITEM(ACE_tourniquet,10);
		ADD_ITEM(ACE_surgicalKit,1);
		ADD_ITEM(ACE_splint,10);
		ADD_ITEM(kat_IV_16,20);
		ADD_ITEM(kat_AED,1);
		ADD_ITEM(kat_chestSeal,20);
		ADD_ITEM(kat_IO_FAST,20);
		ADD_ITEM(kat_Painkiller,5);
	};
};
class TWC_Backpack_ColdWar_Regular_Platoon_Mortar: SP_Backpack_2InchCarrier
{
	scope = 1;
	maximumLoad = 600;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Shells, 16);
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White, 4);
	};
};