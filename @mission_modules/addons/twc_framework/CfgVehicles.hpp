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
		ammo = "CUP_R_GRAD_HE";
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
		ammo = "SmokeShell";
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
						name="HE Harmless (Small)";
						value="HE_Harmless_Small";
					};
					class HE_Harmless_medium
					{
						name="HE Harmless (Medium)";
						value="HE_Harmless_Medium";
					};
					class HE_Harmless_big
					{
						name="HE Harmless (Big)";
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
	
	class TWC_Module_Artillery: Module_F {
		author = "[TWC] Rik";
		category = "twc_mission_framework";
		displayName = "Artillery";
		function = "twc_fnc_moduleArtillery";
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
		};
		class ModuleDescription: ModuleDescription {
			description = "Call in Virtual Artillery";
			sync[] = {"EmptyDetector"};
		};
	};	

	class TWC_Module_Charge: Module_F {
		author = "[TWC] Rik";
		category = "twc_mission_framework";
		displayName = "Charge";
		function = "twc_fnc_moduleCharge";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		icon = "\twc_framework\ui\movable_units_ca.paa";
		functionPriority = 5;
		isDisposable = 0;

		class Arguments {
			class Banzai {
				displayName = "Banzai Sounds";
				description = "Whether the units should yell Banzai every 8 seconds";
				typeName = "BOOL";
				defaultValue = "Yes";
				class Values {
					class Yes {
						name = "Yes";
						value = true;
					};
					class No {
						name = "No";
						value = false;
					};
				};
			};
		};

		class ModuleDescription: ModuleDescription {
			description = "Makes units charge relentlessly to a location, without stopping to engage until they arrive.";
			sync[] = {"EmptyDetector"};
		};
	};
	
	class TWC_Module_CommandMessage: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Command Message";
		function = "twc_fnc_moduleCommandMessage";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		icon = "\twc_framework\ui\command_message_ca.paa";
		functionPriority = 5;
		isDisposable = 0;

		class Arguments {
			class Message {
				displayName="Message";
				description="Text To Display";
				typeName="String";
				defaultValue="";
			};
		};

		class ModuleDescription: ModuleDescription {
			description = "Send Command A Message";
			sync[] = {"EmptyDetector"};
		};
	};
	
	class TWC_Module_IntelHint: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Intel Action Hint";
		function = "twc_fnc_moduleIntelHint";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		icon = "\twc_framework\ui\intel_action_ca.paa";
		functionPriority = 1;
		isDisposable = 0;
		class Arguments
		{
			class Title
			{
				displayName="Title";
				description="Title To Display";
				typeName="String";
				defaultValue="";
			};
			class Message
			{
				displayName="Message";
				description="Text To Display";
				typeName="String";
				defaultValue="";
			};
			
			class Access {
				displayName = "Who Can Interact";
				description = "Who can activate this hint?";
				typeName = "Number";
				defaultValue = "0";
				
				class Values {
					class 0 {
						name = "Anybody";
						value = 0;
					};
					
					class 1 {
						name = "Highest Two Ranks";
						value = 1;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Intel Hint";
			sync[] = {""};
		};
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
	class TWC_Module_WaveSpawn: Module_F {
		author = "[TWC] Rik";
		category = "twc_mission_framework";
		displayName = "Wave Spawn";
		function = "twc_fnc_moduleWaveSpawn";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		icon = "\twc_framework\ui\wave_spawn_ca.paa";
		functionPriority = 1;
		isDisposable = 0;
		class Arguments {
			class Delay {
				displayName = "Delay";
				description = "Time between Waves in seconds";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class MaxWaves {
				displayName = "Max Waves";
				description = "Maximum amount of Waves to come";
				typeName = "NUMBER";
				defaultValue = 1;
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Wave Spawn";
			sync[] = {""};
		};
	};
};