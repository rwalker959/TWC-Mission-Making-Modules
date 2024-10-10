class CfgVehicles {
	class Logic;
	class ModuleOrdnanceMortar_F;
	
	class Module_Base: Logic {
		class AttributesBase;
		class ModuleDescription;
	};

	class Module_F: Module_Base {
		class AttributesBase: AttributesBase {
			class Default;
			class Edit;
			class Combo;
			class CheckBox;
			class CheckBoxNumber;
			class ModuleDescription;
			class Units;
		};
		
		class ModuleDescription: ModuleDescription {
			class Player;
		};
	};

	class ModuleCAS_F;

	
	class TWC_ModuleOrdnanceMortar_HE_Rocket: ModuleOrdnanceMortar_F {
		scope = 1;
		ammo = "12Rnd_230mm_rockets";
	};
	class TWC_ModuleOrdnanceMortar_Dummy_small: ModuleOrdnanceMortar_F {
		scope = 1;
		ammo = "twc_dummyround_artillery_small";
	};
	class TWC_ModuleOrdnanceMortar_Dummy_medium: ModuleOrdnanceMortar_F {
		scope = 1;
		ammo = "twc_dummyround_artillery_medium";
	};
	class TWC_ModuleOrdnanceMortar_Dummy_big: ModuleOrdnanceMortar_F {
		scope = 1;
		ammo = "twc_dummyround_artillery_big";
	};
	class TWC_ModuleOrdnanceMortar_Smoke: ModuleOrdnanceMortar_F {
		scope = 1;
		ammo = "twc_ammo_smoke";
	};
	class TWC_ModuleOrdnanceMortar_Illum: ModuleOrdnanceMortar_F {
		scope = 1;
		ammo = "twc_ammo_artillery_illumination";
	};
	class TWC_ModuleOrdnanceMortar_Illum_IR: ModuleOrdnanceMortar_F {
		scope = 1;
		ammo = "twc_ammo_artillery_illumination_ir";
	};

	class TWC_Module_VirtualArtillery: Module_F {
		author = "[TWC] Bosenator & jayman & Rik";
		category = "twc_mission_framework";
		displayName = "Virtual Artillery";
		function = "twc_fnc_moduleVirtualArtillery";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_framework\ui\virtual_artillery_ca.paa";
		functionPriority = 1;
		class Arguments {
			class Type
			{
				displayName="Type";
				description="Type Of Ordinance";
				typeName="STRING";
				defaultValue="HE";
				class values
				{
					class HE
					{
						name="HE";
						value="HE";
					};
					class HE_Harmless_small
					{
						name="HE Harmless (81mm Mortar)";
						value="HE_Harmless_Small";
					};
					class HE_Harmless_medium
					{
						name="HE Harmless (155mm Artillery)";
						value="HE_Harmless_Medium";
					};
					class HE_Harmless_big
					{
						name="HE Harmless (230mm Rocket)";
						value="HE_Harmless_Big";
					};
					class Smoke
					{
						name="Smoke";
						value="SMOKE";
					};
					class Illum
					{
						name="Illum";
						value="ILLUM";
					};
					class Illum_IR
					{
						name = "Illum IR";
						value = "ILLUM_IR";
					};
				};
			};
			class Rounds
			{
				displayName = "Rounds";
				description="Number of rounds";
				typeName="Number";
				defaultValue=5;
			};
			class Dispersion
			{
				displayName = "Dispersion";
				description="Dispersion diameter";
				typeName="Number";
				defaultValue=250;
			};
			class Delay
			{
				displayName = "Delay";
				description="Delay between rounds";
				typeName="Number";
				defaultValue=10;
			};
			class SafeArea
			{
				displayName = "SafeArea";
				description="Area marker defined SafeZone";
				typeName="String";
				defaultValue="nil";
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Call in Virtual Artillery";
			sync[] = {"EmptyDetector"};
		};
	};
		class TWC_Module_Ambient_AttackPlane: ModuleCAS_F {
		author = "[TWC] Rik";
		category = "twc_mission_framework";
		displayName = "Ambient Attack Plane";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_framework\ui\attack_plane_ca.paa";
		functionPriority = 1;
		class Arguments
		{
			class Type
			{
				description = "";
				displayName = "Type";
				typeName = "NUMBER";
				class values
				{
					class Bomb
					{
						name = "CAS - Bomb Strike";
						value = 3;
					};
					class Gun
					{
						default = 1;
						name = "CAS - Gun Run";
						value = 0;
					};
					class GunMissiles
					{
						name = "CAS - Gun and Missiles";
						value = 2;
					};
					class Missiles
					{
						name = "CAS - Missile Strike";
						value = 1;
					};
				};
			};
			class Vehicle
			{
				description = "";
				displayName = "Plane";
				class values
				{
					class Bf110_DE
					{
						name = "Bf-110 (DE)";
						value = "sab_bf110";
					};
					class Fw190_DE
					{
						name = "Fw-190 (DE)";
						value = "LIB_FW190F8_2";
					};
					class Fw190_DE_Desert
					{
						name = "Fw-190 (DE, Desert)";
						value = "LIB_FW190F8_Italy";
					};
					class Ju87_DE
					{
						name = "Ju-87 (DE)";
						value = "TWC_B_Ju87_SingleSeat";
					};
					class Ju87_DE_Italy
					{
						name = "Ju-87 (DE, Italy)";
						value = "TWC_B_Ju87_SingleSeat_Italy";
					};
					class Ju87_DE_Desert
					{
						name = "Ju-87 (DE, Desert)";
						value = "TWC_B_Ju87_SingleSeat_Desert";
					};
					class He111_DE
					{
						name = "He-111 (DE)";
						value = "TWC_B_He111_SingleSeat";
					};
					class Spitfire_UK
					{
						name = "Spitfire (UK)";
						value = "spitfire_v_G";
					};
					class Hellcat_US
					{
						name = "Hellcat (US)";
						value = "fow_va_f6f_c";
					};
					class Hellcat_UK
					{
						name = "Hellcat (UK)";
						value = "fow_va_f6f_c_faa";
					};
					class P47_US
					{
						name = "P-47 (US)";
						value = "LIB_P47";
					};
					class SU34_RU
					{
						name = "Su-34 (RU)";
						value = "CUP_O_SU34_RU";
					};
					class SU25_RU
					{
						name = "Su-25 (RU)";
						value = "CUP_O_Su25_Dyn_RU";
					};
					class SU17_RU
					{
						name = "Su-17 (RU)";
						value = "BCCCCP_Su17";
					};
					class SU34_SLA
					{
						name = "SU-34 (SLA)";
						value = "CUP_O_SU34_SLA";
					};
					class SU25_SLA
					{
						name = "SU-25 (SLA)";
						value = "CUP_O_Su25_Dyn_SLA";
					};
					class SU25_TK
					{
						name = "SU-25 (TK)";
						value = "CUP_O_Su25_Dyn_TKA";
					};
					class L39_TK
					{
						name = "L-39 (TK)";
						value = "CUP_O_L39_TK";
					};
					class AV8B_USMC
					{
						name = "AV-8B (USMC)";
						value = "CUP_B_AV8B_DYN_USMC";
					};
					class F35B_USMC
					{
						name = "F35B (USMC)";
						value = "CUP_B_F35B_USMC";
					};
					class A10_US
					{
						name = "A-10 (US)";
						value = "CUP_B_A10_DYN_USA";
					};
					class HGR3_UK
					{
						name = "Harrier GR.3 (UK)";
						value = "TWC_Vehicle_ColdWar_HarrierGR3_RAF";
					};
					class HGR5_UK
					{
						name = "Harrier GR.5 (UK)";
						value = "TWC_Vehicle_Millennial_HarrierGR5_RAF";
					};
					class HGR9_UK
					{
						name = "Harrier GR.9 (UK)";
						value = "TWC_Vehicle_Modern_HarrierGR9_RAF";
					};
					class F35_UK
					{
						name = "F35B (UK)";
						value = "CUP_B_F35B_BAF";
					};
					class L39_CZ
					{
						name = "L-39 (CZ)";
						value = "CUP_B_L39_CZ_GREY";
					};
					class SU25_CDF
					{
						name = "SU-25 (CDF)";
						value = "CUP_B_Su25_Dyn_CDF";
					};
					class SU34_CDF
					{
						name = "SU-34 (CDF)";
						value = "CUP_B_SU34_CDF";
					};
				};
			};
		};
		class ModuleDescription {
			description = "Call in Ambient Attack Plane, automatically despawned";
			sync[] = {""};
		};
	};
	class TWC_Module_Ambient_AttackPlane_Gun: TWC_Module_Ambient_AttackPlane {
		displayName = "Ambient Attack Plane (Gun)";
		category = "twc_zeus";
		scope = 1;
		scopeCurator = 2;
		isTriggerActivated = 0;
		curatorCanAttach = 1;
		curatorInfoType = "RscDisplayAttributesModuleCAS";
		moduleCAStype = 0;
	};
	class TWC_Module_Ambient_AttackPlane_Missile: TWC_Module_Ambient_AttackPlane_Gun {
		displayName = "Ambient Attack Plane (Missile)";
		moduleCAStype = 1;
	};
	class TWC_Module_Ambient_AttackPlane_GunMissile: TWC_Module_Ambient_AttackPlane_Gun {
		displayName = "Ambient Attack Plane (Gun/Missile)";
		moduleCAStype = 2;
	};
	class TWC_Module_Ambient_AttackPlane_Bomb: TWC_Module_Ambient_AttackPlane_Gun {
		displayName = "Ambient Attack Plane (Bomb)";
		moduleCAStype = 3;
	};
	class TWC_Module_LightsSwitch: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Lights Switch";
		function = "twc_fnc_moduleLightsSwitch";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		icon = "\twc_framework\ui\light_switch_ca.paa";
		functionPriority = 1;
		isDisposable = 0;
		class Arguments
		{
			class Status
			{
				displayName="On/Off";
				description="Select On or Off";
				typeName="Number";
				defaultValue=0.95;
				class values
				{
					class On
					{
						name="On";
						value=0;
					};
					class Off
					{
						name="Off";
						value=0.95;
					};
				};
			};
			class Radius
			{
				displayName="Radius";
				description="Radius from module to disable lights";
				typeName="Number";
				defaultValue=0;
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Turn off the lights";
			sync[] = {""};
		};
	};
	
	class TWC_Module_DaisyCutter: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Daisy Cutter";
		function = "twc_fnc_moduleDaisyCutter";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_framework\ui\daisy_cutter_ca.paa";
		functionPriority = 1;
		class ModuleDescription: ModuleDescription {
			description = "Boom";
			sync[] = {""};
		};
	};
	
	class TWC_Module_StationaryUnits: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Set Stationary Units";
		function = "twc_fnc_moduleStationaryUnits";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		icon = "\twc_framework\ui\stationary_units_ca.paa";
		functionPriority = 1;
		class Arguments {};
		class ModuleDescription: ModuleDescription {
			description = "Set Unit(s) as Stationary";
			sync[] = {"AnyAI"};
		};
	};
	
	class TWC_Module_MovableUnits: Module_F {
		author = "[TWC] Bosenator";
		category = "twc_mission_framework";
		displayName = "Set Movable Units";
		function = "twc_fnc_moduleMovableUnits";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_framework\ui\movable_units_ca.paa";
		functionPriority = 1;
		class Arguments {};
		class ModuleDescription: ModuleDescription {
			description = "Set Unit(s) as Movable";
			sync[] = {"AnyAI"};
		};
	};
	class TWC_Module_dostop: Module_F {
		author = "[TWC] Ross";
		category = "twc_mission_framework";
		displayName = "Set Combat Ready Units";
		description = "Set Unit(s) as Stationary until contacted by players";
		function = "twc_fnc_moduledostop";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		icon = "\twc_framework\ui\stationary_units_ca.paa";
		functionPriority = 1;
		class Arguments {};
		class ModuleDescription: ModuleDescription {
			description = "Set Unit(s) as Stationary until contacted by players";
			sync[] = {"AnyAI"};
		};
	};
class TWC_Module_AttackPlane: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Attack Plane";
		function = "twc_fnc_moduleAttackPlane";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_framework\ui\attack_plane_ca.paa";
		functionPriority = 1;
		class Arguments
		{
			class Patrol
			{
				displayName="Patrol";
				description="Marker plane will patrol around";
				typeName="String";
				defaultValue="";
			};
			class Radius
			{
				displayName="Radius";
				description="Radius plane will fly around marker";
				typeName="Number";
				defaultValue=0;
			};
			class Type
			{
				displayName="Type Of Attack Plane";
				description="ClassName";
				typeName="String";
				defaultValue="";
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Call in Attack Plane";
			sync[] = {""};
		};
	};
};