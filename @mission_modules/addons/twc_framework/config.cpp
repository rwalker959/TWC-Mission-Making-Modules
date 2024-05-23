class CfgPatches {
	class twc_framework {
		units[] = {
			"TWC_Module_CommandMessage",
			"TWC_Module_StationaryUnits",
			"TWC_Module_MovableUnits",
			"TWC_Module_VirtualArtillery",
			"TWC_Module_IntelHint",
			"TWC_Module_dostop"
		};
		
		weapons[] = {};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"cba_ai",
			"A3_Modules_F",
			"ace_magazinerepack",
			"TWC_Core",
			"TWC_Sounds"
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

	class twc_missionSetup: NO_CATEGORY {
		displayName = "TWC - Mission Prep (Mgmt Use Mainly)";
	};

	class twc_zeus: NO_CATEGORY {
		displayName = "TWC - Zeus";
	};
	
	class twc_mission_framework: NO_CATEGORY {
		displayName = "TWC - Mission Framework";
	};
	
	class twc_cache_modules: NO_CATEGORY {
		displayName = "TWC - Cache Modules";
	};
};

class CfgEditorCategories {
	class TWC_Prep {
		displayName = "TWC Operations Mission Prep";
	};
};

class CfgEditorSubcategories {
	class twc_subPrep {
		displayName = "Compositions";
	};
};

class Cfg3DEN {
	class Compositions {
		class TWC_MissionPREP {
			path="twc_framework\compositions\missionprep";
			side = 1;
			displayName = "TWC Mission Prep Comp";
			editorCategory = "TWC_Prep";
			editorSubCategory = "twc_subPrep";
			useSideColorOnIcon = 0;
		};
	};
};

#include "CfgAmmo.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"
#include "CfgWaypoints.hpp"