class CfgFunctions {
	class TWC {
		class functions {
			file = "twc_framework\functions";
			class Artillery{};
			class briefingLoadout {};
			class charge {};
			class daisyCutter{};
			class LightsSwitch{};
			class Retreat{};
			class spawnGroup{};
			class stationaryUnits{};
			class movableUnits{};
			class virtualMortar{};
			class waveSpawn {};
			class doStop{};
			
			/** Player Messaging **/
			class intelHint {};
			class CommandMessage {};
		};
		
		
		class modules {
			file = "twc_framework\modules";
			class moduleStationaryUnits {};
			class moduleMovableUnits {};
			class moduleVirtualArtillery {};
			class moduleWaveSpawn {};
			class moduleWaveSpawnInit {};
			class moduleArtillery {};
			class moduleCommandMessage{};
			class moduleLightsSwitch{};
			class moduleIntelHint{};
			class moduleDaisyCutter{};
			class moduledostop {};
		};

	};
};
