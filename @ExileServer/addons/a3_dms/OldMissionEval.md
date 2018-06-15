**Bandits.sqf**
<BR>Diff: Moderate; AI:4-6; Spawns Non-Pr Reward Vic from DMS_ArmedVehicles; No Patrol; No Static; Spawns normal crate.
<BR>Use: Could repurpose to reward a random persistent armed vic like a Prowler/Qilin/LandRover

**bauhaus.sqf**
<BR>Diff: Difficult; AI:6-8; Spawns 2 crates, one of which focuses on building supplies; No Patrol; No Static; No Reward Vic.
<BR>Use:  Could be used to demonstrate dropping 2 crates or how to specify a crate using a singular drop table. Maybe use to drop multiple crates full of totally random stuff?

**beertransport.sqf**
<BR>Diff:Easy; AI:3-5; No Patrol; No Static; No Reward Vic; Normal Crate with gauranteed beer inside of it.
<BR>Use: Filler mission maybe? Otherwise useless. Would need to neuter the crate.

**behindenemylines.sqf**
<BR>Diff: Easy; AI:2-4; No Patrol; No Static; No Reward Vic; Normal Crate; Does spawn a sandbag bunker though.
<BR>Use: Filler? Maybe make a beefed up version with a base included?

**blackhawkdown.sqf**
<BR>Diff: Difficult; AI:6-8; No Patrol, No Static, No Reward Vic; Normal Crate
<BR>Use: Filler?

**cardealer.sqf**
<BR>Diff: Easy; AI:3-5; No Patrol; No Static; Two Non-Pr Vic Rewards; Normal Crate; Spawns a building.
<BR>Use: Useful for the whole double spawning class thing (_veh1, _veh2). General Filler material.

**construction.sqf**
<BR>Diff: Hardcore; AI:5-7; No Patrol; No Static; Spawns Non-Pr Vic Reward using extraparams circuit. Spawns extra pallets. Customized(items) crate.
<BR>Use: Method of crate custom is interesting. The vic spawn is also interesting but meh. The extra pallets do add to the mission atmosphere though.

**donthasslethehoff.sqf**
<BR>Diff: Difficult; AI:6-8; No Patrol; 2 Statics; Spawns Non-Pr Vic Reward using extraparams circuit. Basic crate.
<BR>Use: Not much?

**foodtransport.sqf**
<BR>Diff: Difficult; AI:6-8; No Patrol; No Static; No Vic Reward; Modified Crate to drop extra food.
<BR>Use: Crate modification method. Filler.

**guntransport.sqf**
<BR>Diff: Difficult; AI:6-8; No Patrol; No Static; No Vic Reward; Basic crate with just more 'weapons' selected.
<BR>Use: Filler

**humanitarian.sqf**
<BR>Diff: Mod; AI:3-5;  No Patrol; No Static; No Vic Reward; Modified Crate to drop extra food.
<BR>Use: Very redundant considering foodtransport.

**lost_battalion.sqf**
<BR>Diff: Mod; AI:7-9; No Patrol; No Static; No Vic Reward; Basic Crate.
<BR>Use: Nothing much.

**medical.sqf**
<BR>Diff: Easy; AI:4-6; No Patrol, No Static, Spawns Non-PR Vic Reward. Also spawns a building. Crate is medically customized
<BR>Use: Interesting spawning of a building and non-Pr vehicle. 

**mercbase.sqf**
<BR>Diff: Hardcore; AI:6-8; 1 Patrol, 1 Static, No Reward Vic, Special "Sniper" crate, Special baseobjs "base1" attachment.
<BR>Use: The base attachment is useful, so is the coloring of crate. Would use as  a 'guide' if anything.

**mercenaries.sqf**

**nedbuilding1_mission.sqf**
<BR>Diff: Variable; AI: Variable; 4 Static, 1 Patrol, Persistent Vic on Hardcore, Non-PR Vic on all others.
<BR>Use: Importing base objects. Variable Difficulty setup (Variable loot & AI Count). IF Hardcore logic circuit for persistent vehicle; could be stacked. New style of customized crate contents.

**nedcar_mission.sqf**
<BR>This mission is actually really messed up. Supposed to reward nicer vics for hardcore, but then it cant spawn as hardcore? What.
<BR>Use: Another example of IF Hardcore logic circuit, this time with randomization via a pool of possibilities. Other then that, what not to do.

nedguns1_mission.sqf
<BR>This mission is almost identical to nedbuilding1_mission.sqf except guns vs building materials.

nedhatchback_mission.sqf
<BR>Virtually identical to nedcar_mission.sqf just not horribly broken.
<BR>Use: Tieing a random selected difficulty to the difficulty of the AI.

nedhunter_mission.sqf
<BR>Diff: Variable; AI: Variable; No Per Vic on Easy, 50% Chance for Per Vic on Moderate, 100% Chance for Per Vic on Diff/Hardcore. 
<BR>Use: The variable difficulty system at its max. Single vic reward, but with different options to persistence.

nedifrit_mission.sqf
<BR>See nedhunter

nedlittlebird_mission.sqf
<BR>Diff: Variable; AI: Variable; Spawns Per Vic on everything but easy.
<BR>Use: Yet aother way to spawn a per vic. This one basically does it for anything other than easy. And its from a random list.

nedmedical1_mission.sqf
<BR>See nedlittlebird
<BR>Use: Same as reference but it also includes a custom crate content list and a base obj

nedresearch_mission.sqf
<BR>Diff:Variable; AI: Variable; Custom crate weapon & item list. Building hook. Per vehicle on hardcore.
<BR>Use: Slightly more useful than nedmedical1.sqf as it shows more stuff.

nedsnipercamp_mission.sqf
<BR>Diff:Variable; AI: Variable; Patrol Veh; 2 Statics; Custom crate weapon & item list. Building hook.
<BR>Use: Integrates custom loot lists into the variable difficulty. Sets AI to specific type too.

nedstrider_mission.sqf
<BR>See nedHunter

nedural_mission.sqf
<BR>See nedlittlebird

roguenavyseals.sqf
<BR>Use: None; basic mission.

thieves.sqf
<BR>Use: Handy way to choose a persistent vehicle to spawn from a separate list (DMS_CarThieves). 

walmart.sqf
<BR>Use: Interesting spawning of a base without doing a _baseObjs.  And it just spawns a lot of random items, nothing special.
