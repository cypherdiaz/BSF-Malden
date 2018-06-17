/*
	Truck Crash: Medical
	Created by Cypherdiaz for BS-Free Servers
	Based on work by Defent and Eraser1	

	Moderate Mission
	Features:
		6-8 AI	
		1 AI Patrol Vehicles
			Specific: SUV Classic with M134 Minigun			
		
	Crate Info:
		No Weapons/Backpacks
		High Drop of Custom DMS_BoxTruckMed Loot List.

*/

private ["_num", "_side", "_OK", "_group", "_pos", "_difficulty", "_AICount", "_type", "_launcher", "_crate", "_building", "_vehicle", "_crate_loot_values", "_missionAIUnits", "_missionObjs", "_msgStart", "_msgWIN", "_msgLOSE", "_missionName", "_markers", "_time", "_added", "_cleanup"];

// For logging purposes
_num = DMS_MissionCount;


// Set mission side
_side = "bandit";


// This part is unnecessary, but exists just as an example to format the parameters for "DMS_fnc_MissionParams" if you want to explicitly define the calling parameters for DMS_fnc_FindSafePos.
// It also allows anybody to modify the default calling parameters easily.
if ((isNil "_this") || {_this isEqualTo [] || {!(_this isEqualType [])}}) then
{
	_this =
	[
		[10,DMS_WaterNearBlacklist,DMS_MinSurfaceNormal,DMS_SpawnZoneNearBlacklist,DMS_TraderZoneNearBlacklist,DMS_MissionNearBlacklist,DMS_PlayerNearBlacklist,DMS_TerritoryNearBlacklist,DMS_ThrottleBlacklists],
		[
			[]
		],
		_this
	];
};

// Check calling parameters for manually defined mission position.
// This mission doesn't use "_extraParams" in any way currently.
_OK = (_this call DMS_fnc_MissionParams) params
[
	["_pos",[],[[]],[3]],
	["_extraParams",[]]
];

if !(_OK) exitWith
{
	diag_log format ["DMS ERROR :: Called MISSION medical.sqf with invalid parameters: %1",_this];
};


// Set general mission difficulty
_difficulty = "moderate";

// Create AI
_AICount = 6 + (round (random 2));

_group =
[
	_pos,					// Position of AI
	_AICount,				// Number of AI
	"difficult",			// "random","hardcore","difficult","moderate", or "easy"
	"random", 				// "random","assault","MG","sniper" or "unarmed" OR [_type,_launcher]
	_side 					// "bandit","hero", etc.
] call DMS_fnc_SpawnAIGroup;

// add vehicle patrol
_veh =
[
	[
		[(_pos select 0) -50,(_pos select 1)+50,0]
	],
	_group,
	"assault",
	_difficulty,
	_side
	"Exile_Car_SUV_Armed_Black"
] call DMS_fnc_SpawnAIVehicle;

// Create Crate
_crate = ["Box_NATO_Wps_F",_pos] call DMS_fnc_SpawnCrate;

_building = createVehicle ["Land_Medevac_HQ_V1_F",[(_pos select 0) - 10, (_pos select 1),-0.1],[], 0, "CAN_COLLIDE"];

_wreck = createVehicle ["Land_Wreck_Ural_F",[(_pos select 0) - 10, (_pos select 1),-0.2],[], 0, "CAN_COLLIDE"];


// Define mission-spawned AI Units
_missionAIUnits =
[
	_group 		// We only spawned the single group for this mission
];

// Define mission-spawned objects and loot values
_missionObjs =
[
	[_building]+[_wreck]+[_veh],			// No spawned buildings
	[],
	[[_crate,"TCMedical"]]
];

// Define Mission Start message
_msgStart = ['#FFFF00',"Hey! These idiots can't drive. They crashed their truck full of Medical supplies! Go take it off their hands!"];

// Define Mission Win message
_msgWIN = ['#0080ff',"Nice job claiming the medical supplies for your own Convict!"];

// Define Mission Lose message
_msgLOSE = ['#FF0000',"The tow truck showed up before you did! Everything is gone!"];

// Define mission name (for map marker and logging)
_missionName = "Medical Truck Crash";

// Create Markers
_markers =
[
	_pos,
	_missionName,
	_difficulty
] call DMS_fnc_CreateMarker;

// Record time here (for logging purposes, otherwise you could just put "diag_tickTime" into the "DMS_AddMissionToMonitor" parameters directly)
_time = diag_tickTime;

// Parse and add mission info to missions monitor
_added =
[
	_pos,
	[
		[
			"kill",
			_group
		],
		[
			"playerNear",
			[_pos,DMS_playerNearRadius]
		]
	],
	[
		_time,
		(DMS_MissionTimeOut select 0) + random((DMS_MissionTimeOut select 1) - (DMS_MissionTimeOut select 0))
	],
	_missionAIUnits,
	_missionObjs,
	[_missionName,_msgWIN,_msgLOSE],
	_markers,
	_side,
	_difficulty,
	[]
] call DMS_fnc_AddMissionToMonitor;

// Check to see if it was added correctly, otherwise delete the stuff
if !(_added) exitWith
{
	diag_log format ["DMS ERROR :: Attempt to set up mission %1 with invalid parameters for DMS_AddMissionToMonitor! Deleting mission objects and resetting DMS_MissionCount.",_missionName];

	// Delete AI units and the crate. I could do it in one line but I just made a little function that should work for every mission (provided you defined everything correctly)
	_cleanup = [];
	{
		_cleanup pushBack _x;
	} forEach _missionAIUnits;

	_cleanup pushBack ((_missionObjs select 0)+(_missionObjs select 1));

	{
		_cleanup pushBack (_x select 0);
	} foreach (_missionObjs select 2);

	_cleanup call DMS_fnc_CleanUp;


	// Delete the markers directly
	{deleteMarker _x;} forEach _markers;


	// Reset the mission count
	DMS_MissionCount = DMS_MissionCount - 1;
};


// Notify players
[_missionName,_msgStart] call DMS_fnc_BroadcastMissionStatus;



if (DMS_DEBUG) then
{
	(format ["MISSION: (%1) :: Mission #%2 started at %3 with %4 AI units and %5 difficulty at time %6",_missionName,_num,_pos,_AICount,_difficulty,_time]) call DMS_fnc_DebugLog;
};