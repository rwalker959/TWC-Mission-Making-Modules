class CfgPatches {
	class twc_framework {
		units[] = {
			"TWC_Module_StationaryUnits",
			"TWC_Module_MovableUnits",
			"TWC_Module_VirtualArtillery",
			"TWC_Module_DaisyCutter",
			"TWC_Module_dostop"
		};
		
		weapons[] = {};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"cba_ai",
			"A3_Modules_F",
			"ace_magazinerepack",
		};

		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};

class CfgFactionClasses {
	class NO_CATEGORY;
	class twc_mission_framework: NO_CATEGORY {
		displayName = "TWC - Mission Framework";
	};
	
};

#include "CfgAmmo.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"
#include "CfgWaypoints.hpp"