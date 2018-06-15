/*
	Custom configs for Altis.
	Sample by eraser1

	All of these configs exist in the main config. The configs below will simply override any config from the main config (although the majority of them are the same).
	Explanations to all of these configs also exist in the main config.
*/

DMS_findSafePosBlacklist append
[
	[[23600,18200],1500]		// Salt flats are blacklisted for Altis by default.
];

// These configs are the default values from the main config. Just included here as an example.
DMS_PlayerNearBlacklist				= 1500;
DMS_SpawnZoneNearBlacklist			= 1800;
DMS_TraderZoneNearBlacklist			= 1800;
DMS_MissionNearBlacklist			= 1800;
DMS_WaterNearBlacklist				= 500;

// Altis is pretty flat, so we can make the min surfaceNormal ... stricter? more strict? Who cares, you get the idea.
DMS_MinSurfaceNormal				= 0.95;


// Making these configs below as strict as possible will help in reducing the number of attempts taken to find a valid position, and as a result, improve performance.

DMS_MinDistFromWestBorder			= 2000;	// There's at least 2km of ocean from the west edge to the first bit of land.
DMS_MinDistFromEastBorder			= 2250;	// There's over 2km of ocean from the east edge to the first bit of land.
DMS_MinDistFromSouthBorder			= 5000;	// There's about 5km of ocean from the south edge to the first bit of land.
DMS_MinDistFromNorthBorder			= 5200;	// There's around 5km of ocean from the north edge to the first bit of land (including the island).


// Add the "saltflats" and "slums" mission to the existing mission types.
DMS_StaticMissionTypes append 
			[
			["saltflats",6],
			["slums",6],
//			["kastro_castle",7],
			["check",6],
//			["donmd",6],
			["kweis",6],
//			["opbackfire",7],
			["bomos",3],
			["a_village",6],
//			["ai_island",6],
//			["castle_183",6],
			["kore_factory",7],
//			["mayor",6],
			["military_junkyard",6],
			["Military_Raid",6],
			["storage_invasion",7]
			
			];

// Add the "salt flats base" and "slums" to the "bases" to spawn on server startup. NOTE: "append" and "pushback" are NOT the same.
DMS_BasesToImportOnServerStart append 
			[
			"saltflatsbase",
			"slums_objects",
//			"kastro_castle_buildings",
			"check",
//			"donmd",
			"kweis",
//			"opbackfire",
			"bomos_buildings",
			"a_village_buildings",
//			"ai_island_buildings",
			"ai_island_bridge",
//			"castle_183_buildings",
			"kore_factory_buildings",
//			"mayor_buildings",
			"military_junkyard_buildings",
			"storage_invasion_buildings",
			"Military_Raid_Buildings"
			];
