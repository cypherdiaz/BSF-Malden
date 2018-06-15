/*
	"The Village from MythDan" static mission for Altis.
	Created by Mythbuster UID 76561198049774329
	Credits to "Mythbuster" for creating the base.
*/

// For logging purposes
_num = DMS_MissionCount;


// Set mission side (only "bandit" is supported for now)
_side = "bandit";

_pos = [13494.1,12029.3,0];

if ([_pos,DMS_StaticMinPlayerDistance] call DMS_fnc_IsPlayerNearby) exitWith {"delay"};


// Set general mission difficulty
_difficulty = "hardcore";


// Define spawn locations for AI Soldiers. These will be used for the initial spawning of AI as well as reinforcements.
// The center spawn location is added 3 times so at least 3 AI will spawn initially at the center location, and so that future reinforcements are more likely to spawn at the center.
// Boni Einheiten
//[13582.5,12187.6,0],
//[13621.8,12177.5,0],
//[13656.2,12265.1,0],
//[13576.2,12162.6,0],
//[13554.6,12059.3,0],
//[13434.5,11890.9,0],
//[13530.6,11985.2,0],
//[13546.6,12209.9,0],
_AISoldierSpawnLocations =
[
	[13605.3,12201.5,0],
	[13592.5,12208.2,0],
	[13645.5,12291.6,0],
	[13584.9,12268.9,0],
	[13626.3,12125.2,0],
	[13595,12129.9,0],
	[13412.9,11885.9,0],
	[13462.2,12002.8,0],
	[13490.2,12070.1,0],
	[13507.3,12116.7,0]
];

// Create AI
_AICount = 20 + (round (random 5));


_group =
[
	_AISoldierSpawnLocations+[_pos,_pos,_pos],			// Pass the regular spawn locations as well as the center pos 3x
	_AICount,
	_difficulty,
	"random",
	_side
] call DMS_fnc_SpawnAIGroup_MultiPos;


_staticGuns =
[
	[
		[13658.7,12123.7,1.01424],
		[13673.2,12088.4,0],
		[13552.6,12143.9,0.542194],
		[13587.7,12176.6,0.674442],
		[13572.4,12185,0],
		[13602.8,12210.2,0.222106],
		[13612.9,12192.7,1.26885],
		[13598.7,12186.4,0],
		[13683.5,12320.6,3.05545],
		[13607.2,12206.3,34.3731]
	],
	_group,
	"assault",
	_difficulty,
	"bandit",
	"random"
] call DMS_fnc_SpawnAIStaticMG;



// Define the classnames and locations where the crates can spawn (at least 2, since we're spawning 2 crates)
_crateClasses_and_Positions =
[
	[[13578.5,12185.2,0],"I_CargoNet_01_ammo_F"],
	[[13582.9,12195.8,0.450961],"I_CargoNet_01_ammo_F"],
	[[13606.3,12193.9,0],"I_CargoNet_01_ammo_F"],
	[[13573.3,12131.3,1.10009],"I_CargoNet_01_ammo_F"],
	[[13418.8,11890.8,0],"I_CargoNet_01_ammo_F"],
	[[13565.4,12175.7,0],"I_CargoNet_01_ammo_F"],
	[[13675.3,12336.7,0],"I_CargoNet_01_ammo_F"],
	[[13583.7,12218,0],"I_CargoNet_01_ammo_F"],
	[[13610.3,12207.7,0],"I_CargoNet_01_ammo_F"],
	[[13601.1,12181.7,3.90112],"I_CargoNet_01_ammo_F"]
];

{
	deleteVehicle (nearestObject _x);		// Make sure to remove any previous crates.
} forEach _crateClasses_and_Positions;

// Shuffle the list
_crateClasses_and_Positions = _crateClasses_and_Positions call ExileClient_util_array_shuffle;


// Create Crates
_crate0 = [_crateClasses_and_Positions select 0 select 1, _crateClasses_and_Positions select 0 select 0] call DMS_fnc_SpawnCrate;
_crate1 = [_crateClasses_and_Positions select 1 select 1, _crateClasses_and_Positions select 1 select 0] call DMS_fnc_SpawnCrate;

// Disable smoke on the crates so that the players have to search for them >:D
{
	_x setVariable ["DMS_AllowSmoke", false];
} forEach [_crate0,_crate1];

/*
// Don't think an armed AI vehicle fit the idea behind the mission. You're welcome to uncomment this if you want.
_veh =
[
	[
		[_pos,100,random 360] call DMS_fnc_SelectOffsetPos,
		_pos
	],
	_group,
	"assault",
	_difficulty,
	_side
] call DMS_fnc_SpawnAIVehicle;
*/


// Define mission-spawned AI Units
_missionAIUnits =
[
	_group 		// We only spawned the single group for this mission
];

// Define the group reinforcements
_groupReinforcementsInfo =
[
	[
		_group,			// pass the group
		[
			[
				0,		// Let's limit number of units instead...
				0
			],
			[
				100,	// Maximum 100 units can be given as reinforcements.
				0
			]
		],
		[
			240,		// About a 4 minute delay between reinforcements.
			diag_tickTime
		],
		_AISoldierSpawnLocations,
		"random",
		_difficulty,
		_side,
		"reinforce",
		[
			10,			// Reinforcements will only trigger if there's fewer than 10 members left in the group
			0			// 7 reinforcement units per wave.
		]
	]
];

// Define mission-spawned objects and loot values
_missionObjs =
[
	_staticGuns,			// static gun(s). Note, we don't add the base itself because it already spawns on server start.
	[],
	[[_crate0,[50,100,2]],[_crate1,[3,150,15]]]
];

// Define Mission Start message
_msgStart = ['#FFFF00', "The Terrorist Don Mythbuster is on his Island and plant a Stop in Pyrgos..."];

// Define Mission Win message
_msgWIN = ['#0080ff',"The Terrorist Don Mythbuster was today killed in part at a Major raid on his Holiday Island in a massive Firefight the Government in Pyrgos with!"];

// Define Mission Lose message
_msgLOSE = ['#FF0000',"The Terrorist Don Mythbuster is submerged..."];

// Define mission name (for map marker and logging)
_missionName = "Operation Little Don Myth";

// Create Markers
_markers =
[
	_pos,
	_missionName,
	_difficulty
] call DMS_fnc_CreateMarker;

_circle = _markers select 1;
_circle setMarkerDir 20;
_circle setMarkerSize [400,400];


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
			[_pos,100]
		]
	],
	_groupReinforcementsInfo,
	[
		_time,
		DMS_StaticMissionTimeOut call DMS_fnc_SelectRandomVal
	],
	_missionAIUnits,
	_missionObjs,
	[_missionName,_msgWIN,_msgLOSE],
	_markers,
	_side,
	_difficulty,
	[[],[]]
] call DMS_fnc_AddMissionToMonitor_Static;

// Check to see if it was added correctly, otherwise delete the stuff
if !(_added) exitWith
{
	diag_log format ["DMS ERROR :: Attempt to set up mission %1 with invalid parameters for DMS_fnc_AddMissionToMonitor_Static! Deleting mission objects and resetting DMS_MissionCount.",_missionName];

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