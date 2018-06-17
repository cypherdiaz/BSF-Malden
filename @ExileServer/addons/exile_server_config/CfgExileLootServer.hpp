class CfgExileLootServer
{
	class LootTables
	{

		/*
			Percental Item Group Spawn Chances of CivillianLowerClass:

			Restraints        = 0.66%
			Rifles            = 1.32%
			PistolAttachments = 1.99%
			ShotgunAmmo       = 1.99%
			SMGAmmo           = 1.99%
			SMGAttachments    = 1.99%
			Shotguns          = 2.65%
			SMG               = 2.65%
			CivilianVests     = 3.31%
			PistolAmmo        = 3.31%
			Pistols           = 5.30%
			Chemlights        = 5.30%
			CivilianItems     = 5.30%
			RoadFlares        = 5.96%
			CivilianBackpacks = 5.96%
			Drinks            = 6.62%
			CivilianClothing  = 9.27%
			CivilianHeadgear  = 10.60%
			Food              = 10.60%
			Trash             = 13.25%
		*/
		CivillianLowerClass[] = {"CivilianHeadgear", "Food", "CivilianClothing", "Pistols", "Shotguns", "CivilianItems", "Shotguns", "Drinks", "Food", "Drinks", "SMGAttachments", "Food", "RoadFlares", "CivilianHeadgear", "SMG", "Chemlights", "Trash", "CivilianItems", "PistolAmmo", "CivilianClothing", "CivilianHeadgear", "CivilianBackpacks", "Food", "PistolAmmo", "CivilianClothing", "Chemlights", "CivilianBackpacks", "CivilianBackpacks", "Pistols", "RoadFlares", "CivilianClothing", "ShotgunAmmo", "CivilianHeadgear", "CivilianClothing", "CivilianHeadgear", "CivilianBackpacks", "PistolAttachments", "CivilianHeadgear", "Trash", "Food", "Food", "RoadFlares", "Food", "Food", "Rifles", "PistolAmmo", "Trash", "Food", "CivilianItems", "Drinks", "RoadFlares", "Trash", "Drinks", "SMG", "CivilianItems", "SMGAmmo", "Shotguns", "Trash", "Trash", "CivilianHeadgear", "Pistols", "CivilianClothing", "Chemlights", "Trash", "Trash", "CivilianClothing", "RoadFlares", "Trash", "CivilianVests", "CivilianHeadgear", "Chemlights", "CivilianHeadgear", "CivilianHeadgear", "PistolAttachments", "Food", "Food", "ShotgunAmmo", "Pistols", "Shotguns", "CivilianHeadgear", "Trash", "PistolAmmo", "CivilianClothing", "Drinks", "Drinks", "CivilianHeadgear", "CivilianBackpacks", "CivilianClothing", "Drinks", "Trash", "Chemlights", "RoadFlares", "CivilianItems", "CivilianClothing", "CivilianHeadgear", "Trash", "Chemlights", "Food", "CivilianHeadgear", "Food", "Chemlights", "PistolAttachments", "RoadFlares", "Pistols", "RoadFlares", "Trash", "RoadFlares", "Pistols", "CivilianClothing", "CivilianHeadgear", "SMG", "Food", "SMG", "CivilianVests", "Trash", "CivilianBackpacks", "Food", "CivilianVests", "Trash", "CivilianVests", "Trash", "CivilianItems", "CivilianBackpacks", "Food", "Drinks", "CivilianVests", "SMGAttachments", "SMGAmmo", "CivilianItems", "CivilianHeadgear", "CivilianClothing", "Pistols", "Pistols", "CivilianItems", "Restraints", "SMGAmmo", "Rifles", "Chemlights", "SMGAttachments", "Drinks", "Trash", "Drinks", "Trash", "CivilianBackpacks", "Trash", "PistolAmmo", "Trash", "CivilianClothing", "ShotgunAmmo", "CivilianBackpacks", "CivilianClothing"};

		/*
			Percental Item Group Spawn Chances of CivillianUpperClass:

			Restraints        = 0.59%
			PistolAttachments = 1.76%
			RifleAmmo         = 1.76%
			RifleAttachments  = 1.76%
			Rifles            = 1.76%
			ShotgunAmmo       = 1.76%
			SMGAmmo           = 1.76%
			SMGAttachments    = 1.76%
			Shotguns          = 2.35%
			SMG               = 2.35%
			CivilianVests     = 2.94%
			PistolAmmo        = 2.94%
			Pistols           = 4.71%
			Chemlights        = 5.88%
			CivilianItems     = 5.88%
			Drinks            = 5.88%
			RoadFlares        = 5.88%
			CivilianBackpacks = 6.47%
			CivilianClothing  = 8.82%
			CivilianHeadgear  = 8.82%
			Food              = 11.76%
			Trash             = 12.35%
		*/
		CivillianUpperClass[] = {"Pistols", "CivilianClothing", "Drinks", "CivilianClothing", "PistolAttachments", "Food", "CivilianClothing", "Food", "CivilianHeadgear", "SMGAmmo", "RifleAmmo", "RoadFlares", "RoadFlares", "Rifles", "SMGAttachments", "Trash", "Trash", "CivilianHeadgear", "Trash", "RifleAmmo", "CivilianClothing", "CivilianBackpacks", "CivilianBackpacks", "SMGAttachments", "CivilianHeadgear", "RoadFlares", "CivilianHeadgear", "CivilianClothing", "CivilianClothing", "Drinks", "CivilianHeadgear", "CivilianBackpacks", "RifleAttachments", "Chemlights", "CivilianClothing", "Trash", "Drinks", "Food", "Trash", "Rifles", "Trash", "Food", "CivilianHeadgear", "Chemlights", "Pistols", "Pistols", "Food", "Food", "PistolAmmo", "Drinks", "CivilianItems", "Drinks", "Shotguns", "SMG", "SMG", "PistolAttachments", "Chemlights", "RifleAttachments", "Chemlights", "Food", "RoadFlares", "Food", "RifleAttachments", "Shotguns", "Food", "CivilianItems", "CivilianBackpacks", "Trash", "CivilianHeadgear", "ShotgunAmmo", "Trash", "Trash", "CivilianBackpacks", "ShotgunAmmo", "CivilianItems", "PistolAttachments", "RoadFlares", "Pistols", "RifleAmmo", "Trash", "RoadFlares", "CivilianVests", "Food", "CivilianItems", "CivilianVests", "CivilianVests", "SMG", "RoadFlares", "Food", "Food", "Trash", "Pistols", "CivilianItems", "Chemlights", "Trash", "RoadFlares", "Drinks", "Trash", "Food", "CivilianClothing", "CivilianHeadgear", "Chemlights", "Food", "CivilianClothing", "CivilianHeadgear", "Trash", "Rifles", "RoadFlares", "Chemlights", "CivilianBackpacks", "CivilianClothing", "CivilianItems", "Drinks", "Trash", "SMG", "Drinks", "SMGAmmo", "Trash", "CivilianClothing", "Food", "Drinks", "Shotguns", "CivilianItems", "CivilianVests", "SMGAttachments", "Trash", "PistolAmmo", "CivilianClothing", "CivilianHeadgear", "Pistols", "CivilianClothing", "PistolAmmo", "SMGAmmo", "Trash", "PistolAmmo", "Food", "Restraints", "Pistols", "RoadFlares", "Trash", "Pistols", "Food", "ShotgunAmmo", "CivilianHeadgear", "Trash", "CivilianClothing", "CivilianVests", "Food", "Chemlights", "Drinks", "PistolAmmo", "CivilianBackpacks", "CivilianHeadgear", "CivilianBackpacks", "Trash", "Food", "CivilianHeadgear", "CivilianItems", "Chemlights", "CivilianBackpacks", "Shotguns", "CivilianItems", "CivilianHeadgear", "CivilianBackpacks", "CivilianHeadgear", "CivilianItems", "Chemlights", "Food", "CivilianBackpacks", "CivilianClothing"};

		/*
			Percental Item Group Spawn Chances of Shop:

			CivilianClothing  = 0.87%
			CivilianVests     = 0.87%
			PistolAttachments = 0.87%
			ShotgunAmmo       = 0.87%
			SMGAmmo           = 0.87%
			SMGAttachments    = 0.87%
			PistolAmmo        = 1.74%
			CivilianHeadgear  = 2.61%
			IndustrialItems   = 2.61%
			MedicalItems      = 2.61%
			Restraints        = 2.61%
			Shotguns          = 3.48%
			SmokeGrenades     = 3.48%
			Chemlights        = 4.35%
			CivilianBackpacks = 4.35%
			RoadFlares        = 4.35%
			SMG               = 4.35%
			CivilianItems     = 6.09%
			Pistols           = 8.70%
			Drinks            = 13.04%
			Food              = 13.04%
			Trash             = 17.39%
		*/
		Shop[] = {"Trash", "Food", "Food", "Trash", "Food", "SMG", "CivilianItems", "Drinks", "Pistols", "IndustrialItems", "Trash", "Pistols", "CivilianItems", "CivilianItems", "Food", "RoadFlares", "Restraints", "Restraints", "CivilianBackpacks", "Pistols", "Drinks", "Trash", "Food", "SmokeGrenades", "Pistols", "Food", "Pistols", "CivilianVests", "CivilianItems", "Food", "Drinks", "PistolAmmo", "ShotgunAmmo", "SMG", "Chemlights", "Food", "Pistols", "Chemlights", "Drinks", "Pistols", "Trash", "Trash", "Trash", "RoadFlares", "Trash", "Trash", "Trash", "Drinks", "Pistols", "Drinks", "Chemlights", "Trash", "PistolAttachments", "Trash", "CivilianClothing", "CivilianBackpacks", "Drinks", "Trash", "PistolAmmo", "Food", "Drinks", "Trash", "Shotguns", "Trash", "Trash", "CivilianBackpacks", "CivilianHeadgear", "CivilianBackpacks", "Trash", "Food", "Food", "MedicalItems", "CivilianHeadgear", "SMG", "Pistols", "RoadFlares", "Drinks", "SMG", "SMGAmmo", "CivilianBackpacks", "SmokeGrenades", "SMGAttachments", "Chemlights", "IndustrialItems", "CivilianItems", "SMG", "Drinks", "Shotguns", "RoadFlares", "Restraints", "Food", "CivilianItems", "Food", "Drinks", "Food", "MedicalItems", "SmokeGrenades", "Trash", "Pistols", "Drinks", "Shotguns", "Trash", "SmokeGrenades", "Drinks", "CivilianHeadgear", "Shotguns", "Drinks", "Food", "Drinks", "CivilianItems", "Trash", "MedicalItems", "Chemlights", "IndustrialItems", "RoadFlares"};

		/*
			Percental Item Group Spawn Chances of Industrial:

			Restraints      = 4.35%
			RoadFlares      = 13.04%
			Vehicle         = 21.74%
			Trash           = 26.09%
			IndustrialItems = 34.78%
		*/
		Industrial[] = {"Trash", "IndustrialItems", "Vehicle", "Vehicle", "Restraints", "Vehicle", "Trash", "Trash", "IndustrialItems", "Vehicle", "Trash", "IndustrialItems", "IndustrialItems", "IndustrialItems", "Trash", "RoadFlares", "RoadFlares", "Trash", "IndustrialItems", "IndustrialItems", "Vehicle", "RoadFlares", "IndustrialItems"};

		/*
			Percental Item Group Spawn Chances of Factories:

			Electronics     = 10.00%
			Trash           = 40.00%
			IndustrialItems = 50.00%
		*/
		Factories[] = {"Trash", "IndustrialItems", "IndustrialItems", "Trash", "IndustrialItems", "IndustrialItems", "Electronics", "Trash", "IndustrialItems", "Trash"};

		/*
			Percental Item Group Spawn Chances of VehicleService:

			SMG             = 4.17%
			Restraints      = 4.17%
			RoadFlares      = 12.50%
			IndustrialItems = 20.83%
			Trash           = 25.00%
			Vehicle         = 33.33%
		*/
		VehicleService[] = {"Trash", "RoadFlares", "RoadFlares", "SMG", "Vehicle", "Vehicle", "IndustrialItems", "Vehicle", "Vehicle", "Trash", "Trash", "IndustrialItems", "IndustrialItems", "Vehicle", "Vehicle", "Trash", "Restraints", "Trash", "RoadFlares", "IndustrialItems", "Vehicle", "IndustrialItems", "Trash", "Vehicle"};

		/*
			Percental Item Group Spawn Chances of Military:

			DLCGhillies       = 0.58%
			Ghillies          = 0.58%
			Rebreathers       = 0.58%
			Bipods            = 1.16%
			DLCAmmo           = 1.16%
			DLCOptics         = 1.16%
			DLCSupressor      = 1.16%
			LMGAmmo           = 1.16%
			MedicalItems      = 1.16%
			Restraints        = 1.16%
			SniperAmmo        = 1.16%
			SniperAttachments = 1.16%
			DLCRifles         = 1.74%
			DLCVests          = 1.74%
			GuerillaHeadgear  = 1.74%
			GuerillaVests     = 1.74%
			HandGrenades      = 1.74%
			HEGrenades        = 1.74%
			MilitaryBackpacks = 1.74%
			MilitaryHeadgear  = 1.74%
			MilitaryVests     = 1.74%
			RifleAmmo         = 1.74%
			RifleAttachments  = 1.74%
			SmokeGrenades     = 1.74%
			Snipers           = 1.74%
			UGLFlares         = 1.74%
			UGLSmokes         = 1.74%
			CivilianItems     = 2.33%
			GuerillaBackpacks = 2.33%
			GuerillaItems     = 2.33%
			LMG               = 2.33%
			Explosives        = 2.91%
			GuerillaClothing  = 2.91%
			MilitaryClothing  = 2.91%
			Rifles            = 2.91%
			Trash             = 40.70%
		*/
		Military[] = {"MilitaryBackpacks", "DLCVests", "GuerillaBackpacks", "Explosives", "Trash", "DLCVests", "LMG", "Trash", "Trash", "MilitaryVests", "Trash", "Trash", "LMGAmmo", "Trash", "Rifles", "HEGrenades", "GuerillaBackpacks", "MilitaryClothing", "DLCVests", "DLCAmmo", "Trash", "Trash", "LMGAmmo", "Explosives", "MilitaryClothing", "Trash", "GuerillaVests", "Snipers", "GuerillaItems", "MilitaryHeadgear", "HEGrenades", "DLCOptics", "Ghillies", "MilitaryHeadgear", "Trash", "RifleAttachments", "Trash", "UGLFlares", "Trash", "Trash", "Rebreathers", "RifleAmmo", "Explosives", "CivilianItems", "GuerillaVests", "Trash", "Trash", "Restraints", "Trash", "Trash", "SniperAttachments", "Trash", "Trash", "DLCOptics", "SmokeGrenades", "Trash", "LMG", "Trash", "Trash", "Trash", "Trash", "Trash", "DLCGhillies", "Trash", "Explosives", "GuerillaHeadgear", "SniperAmmo", "SniperAmmo", "MilitaryClothing", "Snipers", "Trash", "MedicalItems", "Rifles", "UGLSmokes", "HandGrenades", "GuerillaClothing", "Trash", "Trash", "MedicalItems", "GuerillaItems", "LMG", "DLCRifles", "LMG", "Trash", "RifleAmmo", "DLCRifles", "Trash", "Trash", "Trash", "Trash", "Trash", "GuerillaBackpacks", "GuerillaBackpacks", "UGLSmokes", "Explosives", "Trash", "Bipods", "Trash", "GuerillaHeadgear", "GuerillaClothing", "Trash", "GuerillaVests", "UGLFlares", "RifleAttachments", "Trash", "Trash", "Trash", "HEGrenades", "Trash", "Trash", "Trash", "MilitaryVests", "Trash", "CivilianItems", "Snipers", "DLCSupressor", "Trash", "DLCAmmo", "Bipods", "UGLSmokes", "MilitaryBackpacks", "SmokeGrenades", "Trash", "MilitaryVests", "Trash", "Trash", "Trash", "GuerillaClothing", "GuerillaHeadgear", "Trash", "GuerillaItems", "DLCRifles", "MilitaryBackpacks", "SniperAttachments", "Trash", "CivilianItems", "RifleAmmo", "Trash", "Trash", "GuerillaClothing", "Trash", "Trash", "Trash", "Trash", "Rifles", "Trash", "GuerillaClothing", "Trash", "UGLFlares", "Restraints", "GuerillaItems", "Trash", "HandGrenades", "MilitaryClothing", "Trash", "Trash", "Trash", "Trash", "SmokeGrenades", "Trash", "Rifles", "DLCSupressor", "RifleAttachments", "MilitaryHeadgear", "Trash", "Trash", "Trash", "Rifles", "MilitaryClothing", "Trash", "HandGrenades", "CivilianItems"};

		/*
			Percental Item Group Spawn Chances of Medical:

			Pistols      = 9.09%
			Trash        = 27.27%
			MedicalItems = 63.64%
		*/
		Medical[] = {"MedicalItems", "MedicalItems", "MedicalItems", "MedicalItems", "Trash", "MedicalItems", "MedicalItems", "Trash", "MedicalItems", "Pistols", "Trash"};

		/*
			Percental Item Group Spawn Chances of Tourist:

			DLCAmmo           = 2.22%
			DLCOptics         = 2.22%
			DLCSupressor      = 2.22%
			SniperAmmo        = 2.22%
			SniperAttachments = 2.22%
			CivilianItems     = 4.44%
			Explosives        = 4.44%
			HandGrenades      = 4.44%
			MedicalItems      = 4.44%
			Restraints        = 4.44%
			DLCGhillies       = 6.67%
			Ghillies          = 6.67%
			MilitaryBackpacks = 8.89%
			MilitaryHeadgear  = 8.89%
			DLCRifles         = 17.78%
			Snipers           = 17.78%
		*/
		Tourist[] = {"Ghillies", "CivilianItems", "MilitaryBackpacks", "DLCSupressor", "DLCRifles", "Restraints", "Snipers", "Ghillies", "Ghillies", "MilitaryHeadgear", "HandGrenades", "DLCRifles", "Snipers", "Restraints", "SniperAmmo", "MilitaryBackpacks", "MilitaryHeadgear", "MedicalItems", "Snipers", "MilitaryHeadgear", "CivilianItems", "Explosives", "MilitaryHeadgear", "Snipers", "DLCGhillies", "MilitaryBackpacks", "Snipers", "Snipers", "DLCGhillies", "Explosives", "DLCGhillies", "DLCAmmo", "DLCOptics", "Snipers", "DLCRifles", "HandGrenades", "DLCRifles", "DLCRifles", "DLCRifles", "DLCRifles", "MedicalItems", "MilitaryBackpacks", "Snipers", "DLCRifles", "SniperAttachments"};

		/*
			Percental Item Group Spawn Chances of Radiation:

			DLCAmmo           = 2.27%
			DLCOptics         = 2.27%
			DLCSupressor      = 2.27%
			SniperAmmo        = 2.27%
			SniperAttachments = 2.27%
			EpicWeapons       = 4.55%
			HandGrenades      = 4.55%
			MedicalItems      = 4.55%
			Restraints        = 4.55%
			DLCGhillies       = 6.82%
			Ghillies          = 6.82%
			Explosives        = 11.36%
			MilitaryBackpacks = 11.36%
			MilitaryHeadgear  = 11.36%
			DLCRifles         = 11.36%
			Snipers           = 11.36%
		*/
		Radiation[] = {"MedicalItems", "MilitaryBackpacks", "Restraints", "DLCRifles", "MedicalItems", "MilitaryBackpacks", "Explosives", "Snipers", "MilitaryHeadgear", "DLCSupressor", "HandGrenades", "DLCGhillies", "DLCGhillies", "Ghillies", "Ghillies", "MilitaryHeadgear", "Explosives", "DLCRifles", "Restraints", "Snipers", "Snipers", "Explosives", "MilitaryHeadgear", "MilitaryHeadgear", "Explosives", "MilitaryHeadgear", "SniperAttachments", "DLCRifles", "MilitaryBackpacks", "Snipers", "Ghillies", "DLCRifles", "EpicWeapons", "Explosives", "DLCGhillies", "MilitaryBackpacks", "DLCAmmo", "HandGrenades", "MilitaryBackpacks", "DLCRifles", "SniperAmmo", "Snipers", "DLCOptics", "EpicWeapons"};
	};

	class ItemGroups
	{

		/*
			Percental Item Spawn Chances of Food:

			Exile_Item_GloriousKnakworst_Cooked = 0.59%
			Exile_Item_Surstromming_Cooked      = 0.59%
			Exile_Item_SausageGravy_Cooked      = 0.59%
			Exile_Item_Catfood_Cooked           = 0.59%
			Exile_Item_ChristmasTinner_Cooked   = 0.59%
			Exile_Item_BBQSandwich_Cooked       = 0.59%
			Exile_Item_CatSharkFilet_Raw        = 0.59%
			Exile_Item_TunaFilet_Raw            = 0.59%
			Exile_Item_AlsatianSteak_Raw        = 0.59%
			Exile_Item_TurtleFilet_Raw          = 0.59%
			Exile_Item_SheepSteak_Raw           = 0.59%
			Exile_Item_FinSteak_Raw             = 0.59%
			Exile_Item_GoatSteak_Raw            = 0.59%
			Exile_Item_ChickenFilet_Raw         = 0.59%
			Exile_Item_RoosterFilet_Raw         = 0.59%
			Exile_Item_MackerelFilet_Raw        = 0.59%
			Exile_Item_MulletFilet_Raw          = 0.59%
			Exile_Item_OrnateFilet_Raw          = 0.59%
			Exile_Item_RabbitSteak_Raw          = 0.59%
			Exile_Item_SalemaFilet_Raw          = 0.59%
			Exile_Item_SnakeFilet_Raw           = 0.59%
			rzinfection_antivirus_pills         = 1.18%
			rzinfection_antivirus_injector      = 1.18%
			Exile_Item_CookingPot               = 1.78%
			Exile_Item_CanOpener                = 2.96%
			Exile_Item_Matches                  = 2.96%
			Exile_Item_EMRE                     = 1.78%
			Exile_Item_GloriousKnakworst        = 3.55%
			Exile_Item_Surstromming             = 4.14%
			Exile_Item_SausageGravy             = 4.14%
			Exile_Item_ChristmasTinner          = 4.14%
			Exile_Item_MacasCheese              = 4.14%
			Exile_Item_BBQSandwich              = 4.14%
			Exile_Item_CatFood                  = 4.14%
			Exile_Item_Dogfood                  = 4.14%
			Exile_Item_BeefParts                = 4.14%
			Exile_Item_Cheathas                 = 4.14%
			Exile_Item_DsNuts                   = 4.14%
			Exile_Item_Noodles                  = 4.14%
			Exile_Item_CockONut                 = 4.73%
			Exile_Item_SeedAstics               = 4.73%
			Exile_Item_Raisins                  = 5.33%
			Exile_Item_Moobar                   = 5.33%
			Exile_Item_InstantCoffee            = 6.51%
		*/
		Food[] = {"Exile_Item_BBQSandwich", "Exile_Item_SeedAstics", "Exile_Item_Surstromming", "Exile_Item_CatSharkFilet_Raw", "Exile_Item_Cheathas", "Exile_Item_DsNuts", "rzinfection_antivirus_injector", "Exile_Item_DsNuts", "Exile_Item_RabbitSteak_Raw", "Exile_Item_Moobar", "Exile_Item_Raisins", "Exile_Item_Catfood_Cooked", "Exile_Item_Raisins", "rzinfection_antivirus_pills", "Exile_Item_DsNuts", "Exile_Item_Noodles", "Exile_Item_Surstromming", "Exile_Item_SausageGravy", "Exile_Item_BBQSandwich", "rzinfection_antivirus_injector", "Exile_Item_BeefParts", "Exile_Item_BeefParts", "Exile_Item_MackerelFilet_Raw", "Exile_Item_CockONut", "Exile_Item_Noodles", "Exile_Item_SausageGravy", "Exile_Item_BeefParts", "Exile_Item_CatFood", "Exile_Item_Dogfood", "Exile_Item_SeedAstics", "Exile_Item_Moobar", "Exile_Item_CockONut", "Exile_Item_GloriousKnakworst", "Exile_Item_MacasCheese", "Exile_Item_Matches", "Exile_Item_ChristmasTinner", "Exile_Item_SnakeFilet_Raw", "Exile_Item_Cheathas", "Exile_Item_BBQSandwich", "Exile_Item_Noodles", "Exile_Item_InstantCoffee", "Exile_Item_Moobar", "Exile_Item_CookingPot", "Exile_Item_InstantCoffee", "Exile_Item_Noodles", "Exile_Item_AlsatianSteak_Raw", "Exile_Item_SeedAstics", "Exile_Item_GloriousKnakworst", "Exile_Item_InstantCoffee", "Exile_Item_Matches", "Exile_Item_BBQSandwich", "Exile_Item_GoatSteak_Raw", "Exile_Item_ChristmasTinner", "Exile_Item_RoosterFilet_Raw", "Exile_Item_CatFood", "Exile_Item_CockONut", "Exile_Item_CookingPot", "Exile_Item_Raisins", "Exile_Item_Cheathas", "Exile_Item_CookingPot", "Exile_Item_Dogfood", "Exile_Item_MacasCheese", "Exile_Item_InstantCoffee", "Exile_Item_BBQSandwich", "Exile_Item_Noodles", "Exile_Item_TurtleFilet_Raw", "Exile_Item_Raisins", "Exile_Item_BeefParts", "Exile_Item_EMRE", "Exile_Item_InstantCoffee", "Exile_Item_GloriousKnakworst", "Exile_Item_CockONut", "Exile_Item_CatFood", "Exile_Item_Matches", "Exile_Item_Surstromming", "Exile_Item_BeefParts", "Exile_Item_Surstromming_Cooked", "Exile_Item_Noodles", "Exile_Item_Surstromming", "Exile_Item_Raisins", "Exile_Item_CatFood", "Exile_Item_Dogfood", "Exile_Item_SeedAstics", "Exile_Item_FinSteak_Raw", "Exile_Item_InstantCoffee", "Exile_Item_Moobar", "Exile_Item_DsNuts", "Exile_Item_SeedAstics", "Exile_Item_Dogfood", "Exile_Item_CockONut", "Exile_Item_Cheathas", "Exile_Item_Dogfood", "Exile_Item_ChristmasTinner", "Exile_Item_SalemaFilet_Raw", "Exile_Item_GloriousKnakworst", "Exile_Item_Matches", "Exile_Item_CanOpener", "Exile_Item_ChristmasTinner", "Exile_Item_DsNuts", "Exile_Item_SeedAstics", "Exile_Item_Cheathas", "Exile_Item_InstantCoffee", "Exile_Item_SeedAstics", "Exile_Item_DsNuts", "Exile_Item_CatFood", "Exile_Item_BBQSandwich", "Exile_Item_InstantCoffee", "Exile_Item_MacasCheese", "Exile_Item_SeedAstics", "Exile_Item_Moobar", "Exile_Item_MacasCheese", "Exile_Item_MulletFilet_Raw", "Exile_Item_SausageGravy", "Exile_Item_CatFood", "Exile_Item_MacasCheese", "Exile_Item_ChristmasTinner", "Exile_Item_ChristmasTinner", "Exile_Item_Moobar", "Exile_Item_Surstromming", "Exile_Item_Raisins", "Exile_Item_CockONut", "Exile_Item_CockONut", "Exile_Item_Moobar", "Exile_Item_Raisins", "Exile_Item_InstantCoffee", "Exile_Item_SausageGravy", "Exile_Item_Matches", "Exile_Item_Dogfood", "rzinfection_antivirus_pills", "Exile_Item_Cheathas", "Exile_Item_SausageGravy_Cooked", "Exile_Item_CatFood", "Exile_Item_InstantCoffee", "Exile_Item_ChickenFilet_Raw", "Exile_Item_EMRE", "Exile_Item_OrnateFilet_Raw", "Exile_Item_DsNuts", "Exile_Item_TunaFilet_Raw", "Exile_Item_BBQSandwich", "Exile_Item_SausageGravy", "Exile_Item_SausageGravy", "Exile_Item_MacasCheese", "Exile_Item_SheepSteak_Raw", "Exile_Item_GloriousKnakworst", "Exile_Item_GloriousKnakworst", "Exile_Item_InstantCoffee", "Exile_Item_BeefParts", "Exile_Item_Raisins", "Exile_Item_Raisins", "Exile_Item_BeefParts", "Exile_Item_CanOpener", "Exile_Item_Surstromming", "Exile_Item_Surstromming", "Exile_Item_ChristmasTinner_Cooked", "Exile_Item_Cheathas", "Exile_Item_BBQSandwich_Cooked", "Exile_Item_MacasCheese", "Exile_Item_Moobar", "Exile_Item_Dogfood", "Exile_Item_ChristmasTinner", "Exile_Item_CanOpener", "Exile_Item_GloriousKnakworst_Cooked", "Exile_Item_CanOpener", "Exile_Item_EMRE", "Exile_Item_SausageGravy", "Exile_Item_Moobar", "Exile_Item_CockONut", "Exile_Item_CanOpener", "Exile_Item_Noodles"};

		/*
			Percental Item Spawn Chances of Drinks:

			Exile_Item_Beer                    = 7.14%
			Exile_Item_EnergyDrink             = 7.14%
			Exile_Item_PlasticBottleFreshWater = 7.14%
			Exile_Item_PowerDrink              = 7.14%
			Exile_Item_MountainDupe            = 14.29%
			Exile_Item_ChocolateMilk           = 21.43%
			Exile_Item_PlasticBottleDirtyWater = 35.71%
		*/
		Drinks[] = {"Exile_Item_Beer", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_ChocolateMilk", "Exile_Item_ChocolateMilk", "Exile_Item_MountainDupe", "Exile_Item_MountainDupe", "Exile_Item_PlasticBottleFreshWater", "Exile_Item_PowerDrink", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_ChocolateMilk", "Exile_Item_EnergyDrink"};

		/*
			Percental Item Spawn Chances of Pistols:

			rhs_weap_pya            = 3.85%
			rhsusf_weap_glock17g4   = 3.85%
			rhsusf_weap_m9          = 3.85%
			rhs_weap_pp2000_folded  = 3.85%
			bnae_l35_virtual        = 3.85%
			bnae_r1_t_virtual       = 3.85%
			bnae_r1_m_virtual       = 3.85%
			bnae_saa_virtual        = 3.85%
			bnae_saa_c_virtual      = 3.85%
			bnae_l35_c_virtual      = 3.85%
			bnae_r1_virtual         = 3.85%
			bnae_r1_e_virtual       = 3.85%
			bnae_r1_c_virtual       = 3.85%
			Exile_Weapon_Colt1911   = 3.85%
			Exile_Weapon_Makarov    = 3.85%
			Exile_Weapon_Taurus     = 3.85%
			Exile_Weapon_TaurusGold = 3.85%
			hgun_P07_khk_F          = 3.85%
			hgun_Pistol_01_F        = 3.85%
			hgun_Pistol_heavy_01_F  = 3.85%
			hgun_Pistol_heavy_02_F  = 3.85%
			hgun_Pistol_Signal_F    = 3.85%
			hgun_ACPC2_F            = 3.85%
			hgun_P07_F              = 3.85%
			hgun_Rook40_F           = 3.85%
			Exile_Weapon_SA61       = 3.85%
		*/
		Pistols[] = {"Exile_Weapon_SA61", "hgun_Rook40_F", "hgun_Pistol_heavy_01_F", "bnae_r1_e_virtual", "hgun_Pistol_heavy_02_F", "hgun_Pistol_Signal_F", "Exile_Weapon_Makarov", "bnae_l35_virtual", "Exile_Weapon_TaurusGold", "rhs_weap_pya", "bnae_l35_c_virtual", "Exile_Weapon_Colt1911", "rhsusf_weap_glock17g4", "Exile_Weapon_Taurus", "bnae_saa_virtual", "rhs_weap_pp2000_folded", "bnae_r1_m_virtual", "bnae_r1_t_virtual", "hgun_P07_khk_F", "bnae_r1_c_virtual", "hgun_P07_F", "rhsusf_weap_m9", "bnae_r1_virtual", "bnae_saa_c_virtual", "hgun_ACPC2_F", "hgun_Pistol_01_F"};

		/*
			Percental Item Spawn Chances of PistolAmmo:

			8Rnd_45GAP_Magazine              = 1.61%
			8Rnd_45ACP_Magazine              = 1.61%
			8Rnd_45Super_Magazine            = 1.61%
			6Rnd_357M_Magazine               = 1.61%
			8Rnd_9x19_Magazine               = 1.61%
			6Rnd_GreenSignal_F               = 1.61%
			6Rnd_RedSignal_F                 = 1.61%
			16Rnd_9x21_Mag                   = 1.61%
			6Rnd_45ACP_Cylinder              = 3.23%
			10Rnd_9x21_Mag                   = 6.45%
			11Rnd_45ACP_Mag                  = 6.45%
			30Rnd_9x21_Mag                   = 6.45%
			9Rnd_45ACP_Mag                   = 6.45%
			Exile_Magazine_6Rnd_45ACP        = 6.45%
			Exile_Magazine_7Rnd_45ACP        = 6.45%
			Exile_Magazine_8Rnd_9x18         = 6.45%
			Exile_Magazine_10Rnd_765x17_SA61 = 6.45%
			Exile_Magazine_20Rnd_765x17_SA61 = 6.45%
			rhs_mag_9x19_17                  = 6.45%
			rhsusf_mag_17Rnd_9x19_JHP        = 6.45%
			rhsusf_mag_15Rnd_9x19_JHP        = 6.45%
			rhs_mag_9x19mm_7n21_20           = 6.45%
		*/
		PistolAmmo[] = {"Exile_Magazine_6Rnd_45ACP", "10Rnd_9x21_Mag", "rhs_mag_9x19mm_7n21_20", "8Rnd_45Super_Magazine", "rhs_mag_9x19mm_7n21_20", "11Rnd_45ACP_Mag", "Exile_Magazine_8Rnd_9x18", "rhsusf_mag_15Rnd_9x19_JHP", "30Rnd_9x21_Mag", "11Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "Exile_Magazine_7Rnd_45ACP", "rhsusf_mag_15Rnd_9x19_JHP", "8Rnd_45GAP_Magazine", "rhs_mag_9x19_17", "6Rnd_RedSignal_F", "Exile_Magazine_20Rnd_765x17_SA61", "6Rnd_45ACP_Cylinder", "Exile_Magazine_10Rnd_765x17_SA61", "9Rnd_45ACP_Mag", "30Rnd_9x21_Mag", "11Rnd_45ACP_Mag", "10Rnd_9x21_Mag", "6Rnd_45ACP_Cylinder", "rhs_mag_9x19_17", "16Rnd_9x21_Mag", "rhsusf_mag_15Rnd_9x19_JHP", "rhs_mag_9x19_17", "8Rnd_9x19_Magazine", "9Rnd_45ACP_Mag", "Exile_Magazine_7Rnd_45ACP", "rhsusf_mag_15Rnd_9x19_JHP", "Exile_Magazine_10Rnd_765x17_SA61", "8Rnd_45ACP_Magazine", "rhsusf_mag_17Rnd_9x19_JHP", "rhsusf_mag_17Rnd_9x19_JHP", "Exile_Magazine_6Rnd_45ACP", "rhs_mag_9x19mm_7n21_20", "Exile_Magazine_20Rnd_765x17_SA61", "11Rnd_45ACP_Mag", "Exile_Magazine_10Rnd_765x17_SA61", "Exile_Magazine_8Rnd_9x18", "Exile_Magazine_6Rnd_45ACP", "rhs_mag_9x19_17", "Exile_Magazine_8Rnd_9x18", "rhs_mag_9x19mm_7n21_20", "6Rnd_GreenSignal_F", "9Rnd_45ACP_Mag", "10Rnd_9x21_Mag", "Exile_Magazine_7Rnd_45ACP", "6Rnd_357M_Magazine", "Exile_Magazine_20Rnd_765x17_SA61", "30Rnd_9x21_Mag", "Exile_Magazine_20Rnd_765x17_SA61", "Exile_Magazine_6Rnd_45ACP", "Exile_Magazine_7Rnd_45ACP", "rhsusf_mag_17Rnd_9x19_JHP", "rhsusf_mag_17Rnd_9x19_JHP", "Exile_Magazine_8Rnd_9x18", "30Rnd_9x21_Mag", "10Rnd_9x21_Mag", "Exile_Magazine_10Rnd_765x17_SA61"};

		/*
			Percental Item Spawn Chances of PistolAttachments:

			optic_MRD       = 20.00%
			muzzle_snds_acp = 40.00%
			muzzle_snds_L   = 40.00%
		*/
		PistolAttachments[] = {"muzzle_snds_acp", "muzzle_snds_L", "optic_MRD", "muzzle_snds_L", "muzzle_snds_acp"};

		/*
			Percental Item Spawn Chances of Shotguns:

			Exile_Weapon_M1014           = 11.11%
			rhs_weap_M590_8RD            = 11.11%
			rhs_weap_M590_5RD            = 11.11%
			bnae_m97_virtual             = 11.11%
			bnae_m97_camo1_virtual       = 11.11%
			bnae_spr220_virtual          = 11.11%
			bnae_spr220_camo1_virtual    = 11.11%
			bnae_spr220_so_virtual       = 11.11%
			bnae_spr220_so_camo1_virtual = 11.11%
		*/
		Shotguns[] = {"bnae_spr220_virtual", "bnae_spr220_so_virtual", "Exile_Weapon_M1014", "bnae_spr220_camo1_virtual", "rhs_weap_M590_8RD", "bnae_m97_camo1_virtual", "bnae_m97_virtual", "rhs_weap_M590_5RD", "bnae_spr220_so_camo1_virtual"};

		/*
			Percental Item Spawn Chances of ShotgunAmmo:

			Exile_Magazine_8Rnd_74Slug = 14.29%
			rhsusf_8Rnd_00Buck         = 14.29%
			rhsusf_8Rnd_Slug           = 14.29%
			6Rnd_Slug_Magazine         = 14.29%
			6Rnd_00_Buckshot_Magazine  = 14.29%
			2Rnd_Slug_Magazine         = 14.29%
			2Rnd_00_Buckshot_Magazine  = 14.29%
		*/
		ShotgunAmmo[] = {"Exile_Magazine_8Rnd_74Slug", "rhsusf_8Rnd_00Buck", "6Rnd_Slug_Magazine", "rhsusf_8Rnd_Slug", "2Rnd_00_Buckshot_Magazine", "2Rnd_Slug_Magazine", "6Rnd_00_Buckshot_Magazine"};

		/*
			Percental Item Spawn Chances of SMG:

			SMG_01_F       = 25.00%
			SMG_02_F       = 25.00%
			SMG_05_F       = 25.00%
			hgun_PDW2000_F = 25.00%
		*/
		SMG[] = {"SMG_05_F", "SMG_02_F", "hgun_PDW2000_F", "SMG_01_F"};

		/*
			Percental Item Spawn Chances of SMGAmmo:

			30Rnd_45ACP_Mag_SMG_01              = 16.67%
			30Rnd_45ACP_Mag_SMG_01_Tracer_Green = 16.67%
			30Rnd_9x21_Mag_SMG_02               = 16.67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Red    = 16.67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Yellow = 16.67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Green  = 16.67%
		*/
		SMGAmmo[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", "30Rnd_9x21_Mag_SMG_02", "30Rnd_45ACP_Mag_SMG_01"};

		/*
			Percental Item Spawn Chances of SMGAttachments:

			optic_Holosight_smg       = 16.67%
			optic_Holosight_smg_blk_F = 16.67%
			optic_ACO_grn_smg         = 16.67%
			optic_Aco_smg             = 16.67%
			optic_ACO_grn             = 16.67%
			optic_Aco                 = 16.67%
		*/
		SMGAttachments[] = {"optic_ACO_grn_smg", "optic_Holosight_smg", "optic_Holosight_smg_blk_F", "optic_ACO_grn", "optic_Aco_smg", "optic_Aco"};

		/*
			Percental Item Spawn Chances of Rifles:

			rhsusf_weap_MP7A1_aor1     = 1.02%
			rhsusf_weap_MP7A1_desert   = 1.02%
			rhsusf_weap_MP7A1_winter   = 1.02%
			rhs_weap_hk416d10          = 1.02%
			rhs_weap_hk416d10_m320     = 1.02%
			rhs_weap_hk416d10_LMT      = 1.02%
			rhs_weap_hk416d145         = 1.02%
			rhs_weap_hk416d145_m320    = 1.02%
			rhs_weap_m4a1_d_mstock     = 1.02%
			rhs_weap_m4a1_d            = 1.02%
			rhs_weap_m4a1_m203s_d      = 1.02%
			rhs_weap_m16a4             = 1.02%
			rhs_weap_m4                = 1.02%
			rhs_weap_m4_m203           = 1.02%
			rhs_weap_m4_m320           = 1.02%
			rhs_weap_m4a1              = 1.02%
			rhs_weap_m4a1_m203         = 1.02%
			rhs_weap_m4a1_m320         = 1.02%
			rhs_weap_m4a1_blockII      = 1.02%
			rhs_weap_m4a1_blockII_KAC  = 1.02%
			rhs_weap_m4a1_blockII_M203 = 1.02%
			rhs_weap_mk18              = 1.02%
			rhs_weap_mk18_KAC          = 1.02%
			rhs_weap_mk18_m320         = 1.02%
			rhs_weap_akm               = 1.02%
			rhs_weap_akm_gp25          = 1.02%
			rhs_weap_akms              = 1.02%
			rhs_weap_akms_gp25         = 1.02%
			bnae_rk95_virtual          = 1.02%
			bnae_rk95_camo1_virtual    = 1.02%
			bnae_rk95r_virtual         = 1.02%
			bnae_rk95r_camo1_virtual   = 1.02%
			arifle_Katiba_GL_F         = 1.02%
			arifle_Mk20_GL_F           = 1.02%
			arifle_MX_GL_Black_F       = 1.02%
			arifle_MX_GL_F             = 1.02%
			arifle_MXM_F               = 1.02%
			arifle_TRG21_GL_F          = 1.02%
			Exile_Weapon_AK107_GL      = 1.02%
			Exile_Weapon_AK74_GL       = 1.02%
			arifle_AK12_GL_F           = 1.02%
			arifle_AKM_F               = 1.02%
			arifle_AKM_FL_F            = 1.02%
			arifle_AKS_F               = 1.02%
			arifle_ARX_blk_F           = 1.02%
			arifle_ARX_ghex_F          = 1.02%
			arifle_ARX_hex_F           = 1.02%
			arifle_CTAR_blk_F          = 1.02%
			arifle_CTAR_ghex_F         = 1.02%
			arifle_CTAR_GL_blk_F       = 1.02%
			arifle_CTAR_hex_F          = 1.02%
			arifle_CTARS_blk_F         = 1.02%
			arifle_CTARS_ghex_F        = 1.02%
			arifle_CTARS_hex_F         = 1.02%
			arifle_Katiba_F            = 1.02%
			arifle_Mk20_F              = 1.02%
			arifle_Mk20C_F             = 1.02%
			arifle_MX_Black_F          = 1.02%
			arifle_MX_F                = 1.02%
			arifle_MXC_Black_F         = 1.02%
			arifle_MXC_F               = 1.02%
			arifle_MXM_Black_F         = 1.02%
			arifle_SDAR_F              = 1.02%
			arifle_SPAR_01_blk_F       = 1.02%
			arifle_SPAR_01_GL_blk_F    = 1.02%
			arifle_SPAR_01_GL_khk_F    = 1.02%
			arifle_SPAR_01_GL_snd_F    = 1.02%
			arifle_SPAR_01_khk_F       = 1.02%
			arifle_SPAR_01_snd_F       = 1.02%
			arifle_SPAR_02_blk_F       = 1.02%
			arifle_SPAR_02_khk_F       = 1.02%
			arifle_SPAR_02_snd_F       = 1.02%
			arifle_SPAR_03_blk_F       = 1.02%
			arifle_SPAR_03_khk_F       = 1.02%
			arifle_SPAR_03_snd_F       = 1.02%
			arifle_TRG20_F             = 1.02%
			arifle_TRG21_F             = 1.02%
			Exile_Weapon_AK107         = 1.02%
			Exile_Weapon_AK74          = 1.02%
			Exile_Weapon_DMR           = 1.02%
			arifle_MXM_khk_F           = 1.02%
			Exile_Weapon_AK47          = 1.02%
			Exile_Weapon_AKS_Gold      = 1.02%
			Exile_Weapon_SVD           = 1.02%
			Exile_Weapon_SVDCamo       = 1.02%
			Exile_Weapon_VSSVintorez   = 1.02%
			arifle_MX_GL_khk_F         = 1.02%
			arifle_AK12_F              = 1.02%
			Exile_Weapon_CZ550         = 1.02%
			arifle_MX_khk_F            = 1.02%
			arifle_MXC_khk_F           = 1.02%
			Exile_Weapon_M4            = 1.02%
			Exile_Weapon_M16A4         = 1.02%
			Exile_Weapon_M16A2         = 1.02%
			Exile_Weapon_LeeEnfield    = 4.08%
		*/
		Rifles[] = {"arifle_CTAR_hex_F", "rhs_weap_hk416d10", "arifle_AK12_F", "arifle_SDAR_F", "arifle_SPAR_01_blk_F", "Exile_Weapon_AK107_GL", "arifle_MXC_khk_F", "rhs_weap_mk18", "arifle_SPAR_01_khk_F", "bnae_rk95_camo1_virtual", "Exile_Weapon_M16A4", "arifle_TRG21_GL_F", "arifle_SPAR_03_snd_F", "arifle_MX_GL_F", "arifle_MX_GL_khk_F", "rhsusf_weap_MP7A1_winter", "rhs_weap_m4_m320", "arifle_SPAR_01_GL_khk_F", "Exile_Weapon_SVDCamo", "Exile_Weapon_AK47", "arifle_SPAR_02_khk_F", "bnae_rk95r_camo1_virtual", "Exile_Weapon_CZ550", "rhs_weap_m4a1", "Exile_Weapon_M4", "rhs_weap_akms", "arifle_MX_khk_F", "arifle_MX_Black_F", "arifle_MXM_khk_F", "arifle_SPAR_02_blk_F", "arifle_Mk20_GL_F", "Exile_Weapon_LeeEnfield", "rhs_weap_m4a1_blockII_KAC", "arifle_MX_GL_Black_F", "rhs_weap_hk416d10_LMT", "rhs_weap_akm_gp25", "arifle_AK12_GL_F", "Exile_Weapon_SVD", "arifle_CTAR_GL_blk_F", "rhsusf_weap_MP7A1_aor1", "arifle_MXC_Black_F", "Exile_Weapon_AK74", "arifle_CTARS_hex_F", "Exile_Weapon_DMR", "rhs_weap_m4a1_d", "bnae_rk95r_virtual", "Exile_Weapon_AK107", "arifle_ARX_hex_F", "arifle_AKS_F", "arifle_Katiba_F", "rhs_weap_hk416d145_m320", "arifle_MXM_Black_F", "rhs_weap_akms_gp25", "rhs_weap_hk416d10_m320", "arifle_Mk20C_F", "arifle_MXM_F", "rhs_weap_m4a1_blockII_M203", "bnae_rk95_virtual", "rhs_weap_mk18_m320", "rhs_weap_mk18_KAC", "arifle_ARX_blk_F", "Exile_Weapon_LeeEnfield", "arifle_SPAR_03_khk_F", "arifle_SPAR_03_blk_F", "arifle_Katiba_GL_F", "arifle_SPAR_01_GL_snd_F", "arifle_SPAR_02_snd_F", "arifle_CTARS_blk_F", "Exile_Weapon_LeeEnfield", "Exile_Weapon_VSSVintorez", "arifle_AKM_F", "rhsusf_weap_MP7A1_desert", "arifle_TRG20_F", "rhs_weap_m4a1_m320", "rhs_weap_m4a1_d_mstock", "arifle_SPAR_01_snd_F", "Exile_Weapon_AK74_GL", "rhs_weap_hk416d145", "rhs_weap_m16a4", "rhs_weap_m4a1_m203s_d", "arifle_CTAR_blk_F", "arifle_TRG21_F", "Exile_Weapon_LeeEnfield", "arifle_AKM_FL_F", "rhs_weap_m4_m203", "arifle_MX_F", "arifle_Mk20_F", "arifle_CTARS_ghex_F", "Exile_Weapon_AKS_Gold", "Exile_Weapon_M16A2", "arifle_CTAR_ghex_F", "rhs_weap_m4a1_blockII", "rhs_weap_m4", "arifle_ARX_ghex_F", "rhs_weap_akm", "arifle_SPAR_01_GL_blk_F", "rhs_weap_m4a1_m203", "arifle_MXC_F"};

		/*
			Percental Item Spawn Chances of RifleAmmo:

			30Rnd_762x39_Magazine                        = 0.99%
			rhs_mag_30Rnd_556x45_Mk318_Stanag            = 0.99%
			rhs_mag_30Rnd_556x45_Mk262_Stanag            = 0.99%
			rhs_mag_30Rnd_556x45_M855A1_Stanag           = 0.99%
			rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer = 0.99%
			rhsusf_20Rnd_762x51_m993_Mag                 = 0.99%
			rhsusf_5Rnd_300winmag_xm2010                 = 0.99%
			rhsusf_20Rnd_762x51_m118_special_Mag         = 0.99%
			rhsusf_20Rnd_762x51_m62_Mag                  = 0.99%
			rhsusf_mag_40Rnd_46x30_FMJ                   = 0.99%
			20Rnd_556x45_UW_mag                          = 1.98%
			30Rnd_556x45_Stanag                          = 1.98%
			30Rnd_556x45_Stanag_green                    = 1.98%
			30Rnd_556x45_Stanag_red                      = 1.98%
			30Rnd_556x45_Stanag_Tracer_Green             = 1.98%
			30Rnd_556x45_Stanag_Tracer_Red               = 1.98%
			30Rnd_556x45_Stanag_Tracer_Yellow            = 1.98%
			30Rnd_65x39_caseless_green                   = 1.98%
			30Rnd_65x39_caseless_green_mag_Tracer        = 1.98%
			30Rnd_65x39_caseless_mag                     = 1.98%
			30Rnd_65x39_caseless_mag_Tracer              = 1.98%
			Exile_Magazine_10Rnd_303                     = 9.90%
			Exile_Magazine_30Rnd_762x39_AK               = 1.98%
			Exile_Magazine_30Rnd_545x39_AK               = 1.98%
			Exile_Magazine_30Rnd_545x39_AK_Green         = 1.98%
			Exile_Magazine_30Rnd_545x39_AK_Red           = 1.98%
			Exile_Magazine_30Rnd_545x39_AK_White         = 1.98%
			Exile_Magazine_30Rnd_545x39_AK_Yellow        = 1.98%
			Exile_Magazine_20Rnd_762x51_DMR              = 0.99%
			Exile_Magazine_20Rnd_762x51_DMR_Yellow       = 0.99%
			Exile_Magazine_20Rnd_762x51_DMR_Red          = 0.99%
			Exile_Magazine_20Rnd_762x51_DMR_Green        = 0.99%
			Exile_Magazine_20Rnd_762x51_DMR_White        = 0.99%
			Exile_Magazine_5Rnd_22LR                     = 1.98%
			Exile_Magazine_10Rnd_762x54                  = 1.98%
			Exile_Magazine_10Rnd_9x39                    = 1.98%
			Exile_Magazine_20Rnd_9x39                    = 1.98%
			30Rnd_762x39_Mag_F                           = 1.98%
			30Rnd_762x39_Mag_Green_F                     = 1.98%
			30Rnd_762x39_Mag_Tracer_F                    = 1.98%
			30Rnd_762x39_Mag_Tracer_Green_F              = 1.98%
			30Rnd_762x39_AK47_M                          = 1.98%
			30Rnd_545x39_Mag_F                           = 1.98%
			30Rnd_545x39_Mag_Green_F                     = 1.98%
			30Rnd_545x39_Mag_Tracer_F                    = 1.98%
			30Rnd_545x39_Mag_Tracer_Green_F              = 1.98%
			10Rnd_50BW_Mag_F                             = 1.98%
			30Rnd_580x42_Mag_F                           = 1.98%
			30Rnd_580x42_Mag_Tracer_F                    = 1.98%
			100Rnd_580x42_Mag_F                          = 1.98%
			100Rnd_580x42_Mag_Tracer_F                   = 1.98%
			150Rnd_556x45_Drum_Mag_F                     = 1.98%
			150Rnd_556x45_Drum_Mag_Tracer_F              = 1.98%
			20Rnd_762x51_Mag                             = 1.98%
		*/
		RifleAmmo[] = {"30Rnd_545x39_Mag_Green_F", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_762x39_AK47_M", "Exile_Magazine_30Rnd_545x39_AK_Green", "Exile_Magazine_10Rnd_303", "30Rnd_762x39_Mag_Tracer_F", "Exile_Magazine_20Rnd_9x39", "rhsusf_20Rnd_762x51_m993_Mag", "20Rnd_556x45_UW_mag", "Exile_Magazine_20Rnd_762x51_DMR_White", "Exile_Magazine_30Rnd_545x39_AK", "rhsusf_20Rnd_762x51_m118_special_Mag", "Exile_Magazine_10Rnd_303", "30Rnd_762x39_Mag_F", "rhsusf_5Rnd_300winmag_xm2010", "100Rnd_580x42_Mag_F", "Exile_Magazine_30Rnd_545x39_AK_Red", "Exile_Magazine_5Rnd_22LR", "30Rnd_556x45_Stanag_Tracer_Green", "rhsusf_20Rnd_762x51_m62_Mag", "Exile_Magazine_10Rnd_9x39", "Exile_Magazine_20Rnd_762x51_DMR_Red", "30Rnd_545x39_Mag_Tracer_F", "30Rnd_556x45_Stanag_Tracer_Green", "Exile_Magazine_30Rnd_545x39_AK_White", "30Rnd_556x45_Stanag", "20Rnd_556x45_UW_mag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_762x39_Mag_Green_F", "Exile_Magazine_30Rnd_762x39_AK", "30Rnd_762x39_Magazine", "Exile_Magazine_30Rnd_545x39_AK_Yellow", "30Rnd_65x39_caseless_mag", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_65x39_caseless_green_mag_Tracer", "100Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "rhsusf_mag_40Rnd_46x30_FMJ", "Exile_Magazine_10Rnd_303", "Exile_Magazine_10Rnd_303", "30Rnd_545x39_Mag_Tracer_Green_F", "Exile_Magazine_10Rnd_303", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "30Rnd_556x45_Stanag", "30Rnd_65x39_caseless_mag_Tracer", "150Rnd_556x45_Drum_Mag_Tracer_F", "Exile_Magazine_20Rnd_762x51_DMR", "30Rnd_545x39_Mag_Tracer_F", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "150Rnd_556x45_Drum_Mag_Tracer_F", "150Rnd_556x45_Drum_Mag_F", "Exile_Magazine_30Rnd_545x39_AK_Green", "Exile_Magazine_20Rnd_762x51_DMR_Yellow", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "Exile_Magazine_30Rnd_762x39_AK", "30Rnd_556x45_Stanag_green", "100Rnd_580x42_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_762x39_Mag_Tracer_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_Green_F", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_762x39_AK47_M", "Exile_Magazine_10Rnd_303", "30Rnd_580x42_Mag_F", "30Rnd_65x39_caseless_green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", "Exile_Magazine_30Rnd_545x39_AK_Yellow", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_762x39_Mag_Tracer_Green_F", "Exile_Magazine_20Rnd_762x51_DMR_Green", "30Rnd_556x45_Stanag_green", "Exile_Magazine_10Rnd_303", "30Rnd_762x39_Mag_F", "100Rnd_580x42_Mag_Tracer_F", "30Rnd_556x45_Stanag_red", "Exile_Magazine_10Rnd_303", "Exile_Magazine_10Rnd_762x54", "Exile_Magazine_5Rnd_22LR", "Exile_Magazine_10Rnd_303", "20Rnd_762x51_Mag", "150Rnd_556x45_Drum_Mag_F", "30Rnd_65x39_caseless_green", "30Rnd_580x42_Mag_F", "Exile_Magazine_10Rnd_9x39", "30Rnd_556x45_Stanag_Tracer_Red", "Exile_Magazine_30Rnd_545x39_AK", "Exile_Magazine_30Rnd_545x39_AK_Red", "30Rnd_545x39_Mag_Tracer_Green_F", "10Rnd_50BW_Mag_F", "30Rnd_762x39_Mag_Green_F", "Exile_Magazine_10Rnd_762x54", "30Rnd_556x45_Stanag_red", "Exile_Magazine_10Rnd_303", "Exile_Magazine_20Rnd_9x39", "10Rnd_50BW_Mag_F", "20Rnd_762x51_Mag", "30Rnd_556x45_Stanag_Tracer_Red", "Exile_Magazine_30Rnd_545x39_AK_White"};

		/*
			Percental Item Spawn Chances of RifleAttachments:

			muzzle_snds_M            = 3.39%
			muzzle_snds_H            = 3.39%
			muzzle_snds_H_khk_F      = 3.39%
			muzzle_snds_H_snd_F      = 3.39%
			muzzle_snds_58_blk_F     = 3.39%
			muzzle_snds_m_khk_F      = 3.39%
			muzzle_snds_m_snd_F      = 3.39%
			muzzle_snds_58_wdm_F     = 3.39%
			muzzle_snds_65_TI_blk_F  = 3.39%
			muzzle_snds_65_TI_hex_F  = 3.39%
			muzzle_snds_65_TI_ghex_F = 3.39%
			muzzle_snds_H_MG_blk_F   = 3.39%
			muzzle_snds_H_MG_khk_F   = 3.39%
			optic_Arco               = 3.39%
			optic_Arco_blk_F         = 3.39%
			optic_Arco_ghex_F        = 3.39%
			optic_Hamr               = 3.39%
			optic_Hamr_khk_F         = 3.39%
			optic_Holosight          = 3.39%
			optic_Holosight_blk_F    = 3.39%
			optic_Holosight_khk_F    = 3.39%
			acc_flashlight           = 3.39%
			acc_pointer_IR           = 3.39%
			optic_MRCO               = 3.39%
			optic_DMS                = 3.39%
			optic_DMS_ghex_F         = 3.39%
			optic_ERCO_blk_F         = 3.39%
			optic_ERCO_khk_F         = 3.39%
			optic_ERCO_snd_F         = 3.39%
			optic_NVS                = 1.69%
		*/
		RifleAttachments[] = {"muzzle_snds_58_wdm_F", "optic_DMS", "muzzle_snds_65_TI_blk_F", "optic_ERCO_snd_F", "muzzle_snds_H_khk_F", "optic_Arco_ghex_F", "optic_Holosight_blk_F", "optic_Holosight", "optic_Arco_blk_F", "muzzle_snds_58_wdm_F", "muzzle_snds_m_snd_F", "muzzle_snds_H_MG_khk_F", "optic_Hamr_khk_F", "optic_Arco", "acc_flashlight", "muzzle_snds_m_khk_F", "muzzle_snds_H_khk_F", "optic_Hamr", "optic_Holosight", "muzzle_snds_H", "optic_ERCO_blk_F", "optic_Holosight_blk_F", "optic_Holosight_khk_F", "optic_ERCO_blk_F", "optic_Hamr_khk_F", "optic_Hamr", "optic_ERCO_snd_F", "muzzle_snds_65_TI_ghex_F", "optic_MRCO", "optic_Arco_ghex_F", "muzzle_snds_H_snd_F", "optic_DMS_ghex_F", "muzzle_snds_H_MG_blk_F", "optic_Arco", "acc_pointer_IR", "muzzle_snds_58_blk_F", "muzzle_snds_m_khk_F", "muzzle_snds_65_TI_blk_F", "muzzle_snds_H", "acc_pointer_IR", "muzzle_snds_H_snd_F", "optic_Holosight_khk_F", "muzzle_snds_M", "muzzle_snds_65_TI_ghex_F", "optic_ERCO_khk_F", "optic_ERCO_khk_F", "muzzle_snds_H_MG_khk_F", "acc_flashlight", "optic_NVS", "muzzle_snds_H_MG_blk_F", "muzzle_snds_M", "muzzle_snds_m_snd_F", "muzzle_snds_65_TI_hex_F", "optic_DMS_ghex_F", "optic_DMS", "optic_MRCO", "muzzle_snds_58_blk_F", "muzzle_snds_65_TI_hex_F", "optic_Arco_blk_F"};

		/*
			Percental Item Spawn Chances of LMG:

			rhs_weap_m27iar          = 5.00%
			rhs_weap_m249_pip_L      = 5.00%
			rhs_weap_m249_pip_L_para = 5.00%
			rhs_weap_m249_pip_L_vfg  = 5.00%
			rhs_weap_m249_pip_S      = 5.00%
			rhs_weap_m249_pip_S_para = 5.00%
			rhs_weap_m249_pip_S_vfg  = 5.00%
			rhs_weap_m240B           = 5.00%
			rhs_weap_m240B_CAP       = 5.00%
			rhs_weap_m240G           = 5.00%
			rhs_weap_pkm             = 5.00%
			rhs_weap_pkp             = 5.00%
			arifle_MX_SW_Black_F     = 5.00%
			arifle_MX_SW_F           = 5.00%
			LMG_Mk200_F              = 5.00%
			LMG_Zafir_F              = 5.00%
			Exile_Weapon_RPK         = 5.00%
			Exile_Weapon_PK          = 5.00%
			Exile_Weapon_PKP         = 5.00%
			LMG_03_F                 = 5.00%
		*/
		LMG[] = {"LMG_Mk200_F", "rhs_weap_m249_pip_L_vfg", "rhs_weap_pkp", "LMG_Zafir_F", "rhs_weap_m240G", "arifle_MX_SW_F", "rhs_weap_m249_pip_S_vfg", "Exile_Weapon_PKP", "arifle_MX_SW_Black_F", "Exile_Weapon_PK", "rhs_weap_m240B", "rhs_weap_m249_pip_L_para", "rhs_weap_pkm", "rhs_weap_m249_pip_S_para", "rhs_weap_m240B_CAP", "LMG_03_F", "Exile_Weapon_RPK", "rhs_weap_m249_pip_S", "rhs_weap_m249_pip_L", "rhs_weap_m27iar"};

		/*
			Percental Item Spawn Chances of LMGAmmo:

			rhs_mag_30Rnd_556x45_M855_Stanag      = 2.63%
			rhs_mag_30Rnd_556x45_Mk318_Stanag     = 2.63%
			rhsusf_50Rnd_762x51                   = 2.63%
			rhs_100Rnd_762x54mmR                  = 2.63%
			100Rnd_65x39_caseless_mag             = 5.26%
			100Rnd_65x39_caseless_mag_Tracer      = 7.89%
			150Rnd_762x54_Box                     = 7.89%
			150Rnd_762x54_Box_Tracer              = 2.63%
			130Rnd_338_Mag                        = 13.16%
			150Rnd_93x64_Mag                      = 13.16%
			Exile_Magazine_45Rnd_545x39_RPK_Green = 2.63%
			Exile_Magazine_75Rnd_545x39_RPK_Green = 2.63%
			Exile_Magazine_100Rnd_762x54_PK_Green = 2.63%
			200Rnd_65x39_cased_Box                = 21.05%
			200Rnd_556x45_Box_F                   = 2.63%
			200Rnd_556x45_Box_Red_F               = 2.63%
			200Rnd_556x45_Box_Tracer_F            = 2.63%
			200Rnd_556x45_Box_Tracer_Red_F        = 2.63%
		*/
		LMGAmmo[] = {"200Rnd_65x39_cased_Box", "100Rnd_65x39_caseless_mag_Tracer", "150Rnd_93x64_Mag", "Exile_Magazine_45Rnd_545x39_RPK_Green", "130Rnd_338_Mag", "130Rnd_338_Mag", "200Rnd_65x39_cased_Box", "Exile_Magazine_100Rnd_762x54_PK_Green", "200Rnd_65x39_cased_Box", "rhs_mag_30Rnd_556x45_M855_Stanag", "150Rnd_762x54_Box", "200Rnd_556x45_Box_Tracer_Red_F", "150Rnd_762x54_Box", "200Rnd_65x39_cased_Box", "100Rnd_65x39_caseless_mag_Tracer", "200Rnd_65x39_cased_Box", "100Rnd_65x39_caseless_mag", "150Rnd_762x54_Box_Tracer", "200Rnd_556x45_Box_Red_F", "150Rnd_762x54_Box", "200Rnd_65x39_cased_Box", "150Rnd_93x64_Mag", "rhsusf_50Rnd_762x51", "200Rnd_556x45_Box_Tracer_F", "150Rnd_93x64_Mag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "Exile_Magazine_75Rnd_545x39_RPK_Green", "200Rnd_65x39_cased_Box", "130Rnd_338_Mag", "150Rnd_93x64_Mag", "200Rnd_65x39_cased_Box", "200Rnd_556x45_Box_F", "130Rnd_338_Mag", "130Rnd_338_Mag", "100Rnd_65x39_caseless_mag", "rhs_100Rnd_762x54mmR", "100Rnd_65x39_caseless_mag_Tracer", "150Rnd_93x64_Mag"};

		/*
			Percental Item Spawn Chances of Snipers:

			bnae_falkor_blk_virtual         = 2.44%
			bnae_falkor_snd_virtual         = 2.44%
			bnae_falkor_camo1_virtual       = 2.44%
			bnae_falkor_camo2_virtual       = 2.44%
			bnae_mk1_virtual                = 2.44%
			bnae_mk1_t_virtual              = 2.44%
			bnae_mk1_t_camo1_virtual        = 2.44%
			bnae_trg42_virtual              = 2.44%
			bnae_trg42_camo1_virtual        = 2.44%
			bnae_trg42_camo2_virtual        = 2.44%
			bnae_trg42_mmrs_virtual         = 2.44%
			bnae_trg42_mmrs_camo1_virtual   = 2.44%
			bnae_trg42_f_mmrs_virtual       = 2.44%
			bnae_trg42_f_camo1_virtual      = 2.44%
			bnae_trg42_f_virtual            = 2.44%
			bnae_trg42_f_mmrs_camo1_virtual = 2.44%
			srifle_DMR_01_F                 = 2.44%
			srifle_EBR_F                    = 2.44%
			srifle_GM6_F                    = 2.44%
			srifle_LRR_F                    = 2.44%
			srifle_LRR_tna_F                = 2.44%
			srifle_GM6_ghex_F               = 2.44%
			srifle_DMR_07_blk_F             = 2.44%
			srifle_DMR_07_hex_F             = 2.44%
			srifle_DMR_07_ghex_F            = 2.44%
			Exile_Weapon_m107               = 2.44%
			rhs_weap_sr25                   = 2.44%
			rhs_weap_sr25_ec                = 2.44%
			rhs_weap_m14ebrri               = 2.44%
			rhs_weap_XM2010                 = 2.44%
			rhs_weap_XM2010_wd              = 2.44%
			rhs_weap_XM2010_d               = 2.44%
			rhs_weap_XM2010_sa              = 2.44%
			rhs_weap_svd                    = 2.44%
			rhs_weap_svdp_wd                = 2.44%
			rhs_weap_svdp_wd_npz            = 2.44%
			rhs_weap_svdp_npz               = 2.44%
			rhs_weap_svds                   = 2.44%
			rhs_weap_svds_npz               = 2.44%
			rhs_weap_asval_npz              = 2.44%
			rhs_weap_vvs_npz                = 2.44%
		*/
		Snipers[] = {"srifle_GM6_F", "srifle_LRR_tna_F", "bnae_trg42_camo2_virtual", "bnae_trg42_virtual", "srifle_DMR_01_F", "rhs_weap_m14ebrri", "bnae_falkor_blk_virtual", "bnae_trg42_f_virtual", "bnae_trg42_f_camo1_virtual", "bnae_falkor_camo2_virtual", "srifle_LRR_F", "bnae_trg42_mmrs_virtual", "rhs_weap_svdp_wd", "bnae_trg42_f_mmrs_camo1_virtual", "rhs_weap_XM2010", "rhs_weap_svdp_npz", "srifle_DMR_07_ghex_F", "bnae_mk1_virtual", "rhs_weap_XM2010_d", "bnae_falkor_camo1_virtual", "rhs_weap_vvs_npz", "srifle_GM6_ghex_F", "bnae_mk1_t_camo1_virtual", "Exile_Weapon_m107", "srifle_EBR_F", "bnae_trg42_mmrs_camo1_virtual", "rhs_weap_asval_npz", "rhs_weap_svdp_wd_npz", "srifle_DMR_07_blk_F", "rhs_weap_XM2010_sa", "rhs_weap_svds", "bnae_trg42_f_mmrs_virtual", "rhs_weap_sr25", "bnae_falkor_snd_virtual", "bnae_trg42_camo1_virtual", "rhs_weap_sr25_ec", "bnae_mk1_t_virtual", "rhs_weap_svd", "srifle_DMR_07_hex_F", "rhs_weap_XM2010_wd", "rhs_weap_svds_npz"};

		/*
			Percental Item Spawn Chances of SniperAmmo:

			Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag      = 0.68%
			Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag = 0.68%
			Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag      = 1.36%
			Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag           = 1.36%
			Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag      = 2.04%
			Exile_Magazine_7Rnd_408_Bullet_Cam_Mag               = 2.04%
			10Rnd_300WM_Magazine                                 = 2.04%
			10Rnd_303_Magazine                                   = 2.04%
			5Rnd_APDS_338LM_Magazine                             = 2.04%
			5Rnd_338LM_Magazine                                  = 2.04%
			Exile_Magazine_10Rnd_338_Bullet_Cam_Mag              = 3.40%
			Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag     = 3.40%
			Exile_Magazine_5Rnd_127x108_APDS_KSVK                = 5.44%
			5Rnd_127x108_APDS_Mag                                = 5.44%
			5Rnd_127x108_Mag                                     = 6.80%
			Exile_Magazine_10Rnd_127x99_m107                     = 6.80%
			Exile_Magazine_5Rnd_127x108_KSVK                     = 6.80%
			7Rnd_408_Mag                                         = 6.80%
			10Rnd_762x54_Mag                                     = 11.56%
			20Rnd_762x51_Mag                                     = 12.93%
			20Rnd_650x39_Cased_Mag_F                             = 14.29%
		*/
		SniperAmmo[] = {"Exile_Magazine_10Rnd_127x99_m107", "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", "5Rnd_127x108_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "5Rnd_127x108_Mag", "7Rnd_408_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_300WM_Magazine", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag", "5Rnd_127x108_APDS_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_KSVK", "5Rnd_127x108_APDS_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "10Rnd_300WM_Magazine", "10Rnd_762x54_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "20Rnd_762x51_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "10Rnd_303_Magazine", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag", "7Rnd_408_Mag", "5Rnd_APDS_338LM_Magazine", "Exile_Magazine_5Rnd_127x108_KSVK", "10Rnd_762x54_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "10Rnd_762x54_Mag", "10Rnd_303_Magazine", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "5Rnd_127x108_Mag", "7Rnd_408_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "5Rnd_127x108_Mag", "10Rnd_762x54_Mag", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "7Rnd_408_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "5Rnd_127x108_Mag", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag", "5Rnd_127x108_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "Exile_Magazine_10Rnd_127x99_m107", "5Rnd_338LM_Magazine", "Exile_Magazine_10Rnd_127x99_m107", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "Exile_Magazine_5Rnd_127x108_KSVK", "20Rnd_762x51_Mag", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "Exile_Magazine_10Rnd_127x99_m107", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "5Rnd_338LM_Magazine", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "7Rnd_408_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "Exile_Magazine_10Rnd_127x99_m107", "20Rnd_650x39_Cased_Mag_F", "5Rnd_APDS_338LM_Magazine", "10Rnd_762x54_Mag", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "7Rnd_408_Mag", "Exile_Magazine_10Rnd_127x99_m107", "Exile_Magazine_10Rnd_127x99_m107", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_127x99_m107", "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "5Rnd_127x108_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_127x99_m107", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "7Rnd_408_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_300WM_Magazine", "10Rnd_762x54_Mag", "5Rnd_127x108_APDS_Mag", "10Rnd_762x54_Mag", "5Rnd_338LM_Magazine", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag", "5Rnd_APDS_338LM_Magazine", "Exile_Magazine_10Rnd_127x99_m107", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag", "10Rnd_303_Magazine", "5Rnd_127x108_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "20Rnd_650x39_Cased_Mag_F"};

		/*
			Percental Item Spawn Chances of SniperAttachments:

			muzzle_snds_B_khk_F = 11.11%
			muzzle_snds_B_snd_F = 11.11%
			muzzle_snds_B       = 11.11%
			optic_LRPS          = 11.11%
			optic_LRPS_ghex_F   = 11.11%
			optic_LRPS_tna_F    = 11.11%
			optic_SOS           = 11.11%
			optic_SOS_khk_F     = 11.11%
			optic_DMS           = 11.11%
		*/
		SniperAttachments[] = {"muzzle_snds_B", "optic_SOS", "optic_LRPS", "optic_LRPS_ghex_F", "muzzle_snds_B_snd_F", "muzzle_snds_B_khk_F", "optic_DMS", "optic_SOS_khk_F", "optic_LRPS_tna_F"};

		/*
			Percental Item Spawn Chances of DLCRifles:

			srifle_DMR_03_F          = 4.05%
			srifle_DMR_03_khaki_F    = 4.05%
			srifle_DMR_03_tan_F      = 4.05%
			srifle_DMR_03_woodland_F = 4.05%
			srifle_DMR_06_camo_F     = 4.05%
			srifle_DMR_06_olive_F    = 4.05%
			srifle_DMR_02_camo_F     = 8.11%
			srifle_DMR_02_F          = 8.11%
			srifle_DMR_02_sniper_F   = 8.11%
			srifle_DMR_04_F          = 9.46%
			srifle_DMR_04_Tan_F      = 9.46%
			srifle_DMR_05_blk_F      = 10.81%
			srifle_DMR_05_hex_F      = 10.81%
			srifle_DMR_05_tan_F      = 10.81%
		*/
		DLCRifles[] = {"srifle_DMR_04_Tan_F", "srifle_DMR_05_hex_F", "srifle_DMR_02_F", "srifle_DMR_04_Tan_F", "srifle_DMR_05_tan_F", "srifle_DMR_03_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_sniper_F", "srifle_DMR_06_olive_F", "srifle_DMR_05_blk_F", "srifle_DMR_02_F", "srifle_DMR_06_olive_F", "srifle_DMR_03_tan_F", "srifle_DMR_03_tan_F", "srifle_DMR_02_sniper_F", "srifle_DMR_04_F", "srifle_DMR_05_hex_F", "srifle_DMR_04_Tan_F", "srifle_DMR_05_tan_F", "srifle_DMR_04_F", "srifle_DMR_02_F", "srifle_DMR_03_khaki_F", "srifle_DMR_03_woodland_F", "srifle_DMR_05_hex_F", "srifle_DMR_05_blk_F", "srifle_DMR_04_Tan_F", "srifle_DMR_02_sniper_F", "srifle_DMR_03_khaki_F", "srifle_DMR_06_olive_F", "srifle_DMR_02_F", "srifle_DMR_04_Tan_F", "srifle_DMR_04_F", "srifle_DMR_05_hex_F", "srifle_DMR_03_tan_F", "srifle_DMR_05_hex_F", "srifle_DMR_05_hex_F", "srifle_DMR_04_Tan_F", "srifle_DMR_02_camo_F", "srifle_DMR_05_blk_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_camo_F", "srifle_DMR_03_F", "srifle_DMR_05_tan_F", "srifle_DMR_03_khaki_F", "srifle_DMR_05_blk_F", "srifle_DMR_04_F", "srifle_DMR_04_F", "srifle_DMR_02_F", "srifle_DMR_05_blk_F", "srifle_DMR_02_camo_F", "srifle_DMR_02_sniper_F", "srifle_DMR_05_hex_F", "srifle_DMR_02_sniper_F", "srifle_DMR_02_camo_F", "srifle_DMR_04_F", "srifle_DMR_05_tan_F", "srifle_DMR_04_Tan_F", "srifle_DMR_05_blk_F", "srifle_DMR_03_woodland_F", "srifle_DMR_03_woodland_F", "srifle_DMR_05_tan_F", "srifle_DMR_05_hex_F", "srifle_DMR_05_blk_F", "srifle_DMR_03_F", "srifle_DMR_02_sniper_F", "srifle_DMR_02_camo_F", "srifle_DMR_05_blk_F", "srifle_DMR_02_F", "srifle_DMR_06_camo_F", "srifle_DMR_02_camo_F", "srifle_DMR_05_tan_F", "srifle_DMR_06_camo_F", "srifle_DMR_06_camo_F", "srifle_DMR_04_F"};

		/*
			Percental Item Spawn Chances of DLCAmmo:

			150Rnd_93x64_Mag       = 30.77%
			130Rnd_338_Mag         = 30.77%
			10Rnd_127x54_Mag       = 7.69%
			20Rnd_762x51_Mag       = 7.69%
			10Rnd_338_Mag          = 11.54%
			10Rnd_93x64_DMR_05_Mag = 11.54%
		*/
		DLCAmmo[] = {"10Rnd_93x64_DMR_05_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "150Rnd_93x64_Mag", "20Rnd_762x51_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "10Rnd_338_Mag", "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "10Rnd_93x64_DMR_05_Mag", "20Rnd_762x51_Mag", "150Rnd_93x64_Mag", "10Rnd_127x54_Mag", "150Rnd_93x64_Mag", "130Rnd_338_Mag", "10Rnd_93x64_DMR_05_Mag", "130Rnd_338_Mag", "150Rnd_93x64_Mag", "130Rnd_338_Mag", "10Rnd_127x54_Mag", "130Rnd_338_Mag", "150Rnd_93x64_Mag"};

		/*
			Percental Item Spawn Chances of DLCOptics:

			optic_AMS     = 14.29%
			optic_AMS_khk = 14.29%
			optic_AMS_snd = 14.29%
			optic_KHS_blk = 14.29%
			optic_KHS_hex = 14.29%
			optic_KHS_old = 14.29%
			optic_KHS_tan = 14.29%
		*/
		DLCOptics[] = {"optic_AMS_khk", "optic_KHS_hex", "optic_KHS_old", "optic_AMS", "optic_KHS_blk", "optic_KHS_tan", "optic_AMS_snd"};

		/*
			Percental Item Spawn Chances of DLCSupressor:

			muzzle_snds_338_black = 16.67%
			muzzle_snds_338_green = 16.67%
			muzzle_snds_338_sand  = 16.67%
			muzzle_snds_93mmg     = 16.67%
			muzzle_snds_93mmg_tan = 16.67%
			muzzle_snds_B         = 16.67%
		*/
		DLCSupressor[] = {"muzzle_snds_93mmg_tan", "muzzle_snds_93mmg", "muzzle_snds_338_black", "muzzle_snds_338_sand", "muzzle_snds_338_green", "muzzle_snds_B"};

		/*
			Percental Item Spawn Chances of EpicWeapons:

			MMG_01_hex_F   = 20.00%
			MMG_01_tan_F   = 20.00%
			MMG_02_black_F = 20.00%
			MMG_02_camo_F  = 20.00%
			MMG_02_sand_F  = 20.00%
		*/
		EpicWeapons[] = {"MMG_02_sand_F", "MMG_02_camo_F", "MMG_02_black_F", "MMG_01_tan_F", "MMG_01_hex_F"};

		/*
			Percental Item Spawn Chances of Bipods:

			bipod_03_F_oli = 11.11%
			bipod_03_F_blk = 11.11%
			bipod_02_F_tan = 11.11%
			bipod_02_F_hex = 11.11%
			bipod_02_F_blk = 11.11%
			bipod_01_F_snd = 11.11%
			bipod_01_F_mtp = 11.11%
			bipod_01_F_blk = 11.11%
			bipod_01_F_khk = 11.11%
		*/
		Bipods[] = {"bipod_01_F_khk", "bipod_03_F_oli", "bipod_01_F_mtp", "bipod_02_F_blk", "bipod_01_F_snd", "bipod_02_F_hex", "bipod_02_F_tan", "bipod_03_F_blk", "bipod_01_F_blk"};

		/*
			Percental Item Spawn Chances of HEGrenades:

			3Rnd_HE_Grenade_shell = 25.00%
			1Rnd_HE_Grenade_shell = 75.00%
		*/
		HEGrenades[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};

		/*
			Percental Item Spawn Chances of UGLFlares:

			3Rnd_UGL_FlareGreen_F  = 6.25%
			3Rnd_UGL_FlareRed_F    = 6.25%
			3Rnd_UGL_FlareWhite_F  = 6.25%
			3Rnd_UGL_FlareYellow_F = 6.25%
			UGL_FlareGreen_F       = 18.75%
			UGL_FlareRed_F         = 18.75%
			UGL_FlareWhite_F       = 18.75%
			UGL_FlareYellow_F      = 18.75%
		*/
		UGLFlares[] = {"3Rnd_UGL_FlareYellow_F", "UGL_FlareYellow_F", "UGL_FlareYellow_F", "3Rnd_UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareRed_F", "3Rnd_UGL_FlareRed_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareGreen_F", "UGL_FlareWhite_F", "3Rnd_UGL_FlareGreen_F"};

		/*
			Percental Item Spawn Chances of UGLSmokes:

			3Rnd_Smoke_Grenade_shell       = 3.57%
			3Rnd_SmokeBlue_Grenade_shell   = 3.57%
			3Rnd_SmokeGreen_Grenade_shell  = 3.57%
			3Rnd_SmokeOrange_Grenade_shell = 3.57%
			3Rnd_SmokePurple_Grenade_shell = 3.57%
			3Rnd_SmokeRed_Grenade_shell    = 3.57%
			3Rnd_SmokeYellow_Grenade_shell = 3.57%
			1Rnd_Smoke_Grenade_shell       = 10.71%
			1Rnd_SmokeBlue_Grenade_shell   = 10.71%
			1Rnd_SmokeGreen_Grenade_shell  = 10.71%
			1Rnd_SmokeOrange_Grenade_shell = 10.71%
			1Rnd_SmokePurple_Grenade_shell = 10.71%
			1Rnd_SmokeRed_Grenade_shell    = 10.71%
			1Rnd_SmokeYellow_Grenade_shell = 10.71%
		*/
		UGLSmokes[] = {"1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "3Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "3Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "3Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "3Rnd_SmokeGreen_Grenade_shell", "3Rnd_SmokeYellow_Grenade_shell"};

		/*
			Percental Item Spawn Chances of HandGrenades:

			HandGrenade = 50.00%
			MiniGrenade = 50.00%
		*/
		HandGrenades[] = {"MiniGrenade", "HandGrenade"};

		/*
			Percental Item Spawn Chances of Explosives:

			APERSBoundingMine_Range_Mag = 20.00%
			APERSMine_Range_Mag         = 20.00%
			APERSTripMine_Wire_Mag      = 20.00%
			IEDLandSmall_Remote_Mag     = 20.00%
			IEDUrbanSmall_Remote_Mag    = 20.00%
		*/
		Explosives[] = {"APERSBoundingMine_Range_Mag", "APERSTripMine_Wire_Mag", "IEDLandSmall_Remote_Mag", "APERSBoundingMine_Range_Mag", "IEDLandSmall_Remote_Mag", "APERSMine_Range_Mag", "APERSBoundingMine_Range_Mag", "APERSMine_Range_Mag", "APERSTripMine_Wire_Mag", "APERSMine_Range_Mag", "IEDUrbanSmall_Remote_Mag", "APERSTripMine_Wire_Mag", "IEDUrbanSmall_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "IEDLandSmall_Remote_Mag"};

		/*
			Percental Item Spawn Chances of CivilianItems:

			Exile_Item_MobilePhone = 2.78%
			Binocular              = 11.11%
			ItemGPS                = 11.11%
			ItemRadio              = 16.67%
			ItemWatch              = 16.67%
			ItemMap                = 19.44%
			Exile_Item_Heatpack    = 22.22%
		*/
		CivilianItems[] = {"ItemRadio", "ItemWatch", "ItemMap", "ItemWatch", "Binocular", "ItemWatch", "Exile_Item_Heatpack", "ItemRadio", "Exile_Item_MobilePhone", "ItemRadio", "Exile_Item_Heatpack", "ItemRadio", "ItemWatch", "Exile_Item_Heatpack", "ItemRadio", "ItemWatch", "ItemMap", "ItemMap", "ItemGPS", "ItemRadio", "Exile_Item_Heatpack", "ItemMap", "Exile_Item_Heatpack", "ItemMap", "ItemMap", "Binocular", "ItemGPS", "ItemMap", "Exile_Item_Heatpack", "ItemGPS", "ItemGPS", "Binocular", "Exile_Item_Heatpack", "Binocular", "ItemWatch", "Exile_Item_Heatpack"};

		/*
			Percental Item Spawn Chances of CivilianClothing:

			U_NikosAgedBody          = 0.58%
			U_NikosBody              = 0.58%
			U_OrestesBody            = 0.58%
			U_C_Man_casual_1_F       = 2.92%
			U_C_Man_casual_2_F       = 2.92%
			U_C_Man_casual_3_F       = 2.92%
			U_C_Man_casual_4_F       = 2.92%
			U_C_Man_casual_5_F       = 2.92%
			U_C_Man_casual_6_F       = 2.92%
			U_C_man_sport_1_F        = 2.92%
			U_C_man_sport_2_F        = 2.92%
			U_C_man_sport_3_F        = 2.92%
			U_I_C_Soldier_Bandit_1_F = 2.92%
			U_I_C_Soldier_Bandit_2_F = 2.92%
			U_I_C_Soldier_Bandit_3_F = 2.92%
			U_I_C_Soldier_Bandit_4_F = 2.92%
			U_I_C_Soldier_Bandit_5_F = 2.92%
			U_C_Poloshirt_blue       = 4.09%
			U_C_Poloshirt_burgundy   = 4.09%
			U_C_Poloshirt_salmon     = 4.09%
			U_C_Poloshirt_stripped   = 4.09%
			U_C_Poloshirt_tricolour  = 4.09%
			U_C_HunterBody_grn       = 5.26%
			U_C_Journalist           = 5.26%
			U_C_Poor_1               = 5.26%
			U_C_Poor_2               = 5.26%
			U_C_Poor_shorts_1        = 5.26%
			U_C_Scientist            = 5.26%
			U_Rangemaster            = 5.26%
		*/
		CivilianClothing[] = {"U_Rangemaster", "U_I_C_Soldier_Bandit_5_F", "U_C_Man_casual_2_F", "U_C_Poor_shorts_1", "U_C_Poloshirt_burgundy", "U_C_Poloshirt_tricolour", "U_C_Poor_2", "U_I_C_Soldier_Bandit_2_F", "U_C_Poloshirt_stripped", "U_C_Man_casual_2_F", "U_C_Poor_1", "U_I_C_Soldier_Bandit_1_F", "U_C_Poor_shorts_1", "U_C_Poloshirt_blue", "U_I_C_Soldier_Bandit_4_F", "U_C_Scientist", "U_C_Man_casual_3_F", "U_C_Scientist", "U_C_Poor_1", "U_C_Scientist", "U_C_Man_casual_3_F", "U_C_Man_casual_6_F", "U_C_Man_casual_1_F", "U_C_Poor_shorts_1", "U_C_Journalist", "U_C_Poloshirt_tricolour", "U_Rangemaster", "U_C_Man_casual_3_F", "U_C_Poloshirt_stripped", "U_C_man_sport_3_F", "U_I_C_Soldier_Bandit_2_F", "U_C_Poloshirt_blue", "U_C_Scientist", "U_C_man_sport_1_F", "U_C_Poor_1", "U_C_Man_casual_5_F", "U_C_man_sport_1_F", "U_I_C_Soldier_Bandit_3_F", "U_I_C_Soldier_Bandit_5_F", "U_C_Scientist", "U_C_Poor_1", "U_C_Poor_1", "U_C_Poloshirt_tricolour", "U_C_Scientist", "U_C_Man_casual_4_F", "U_C_Poor_2", "U_C_man_sport_2_F", "U_C_Man_casual_5_F", "U_C_man_sport_1_F", "U_C_Man_casual_4_F", "U_C_Poor_2", "U_C_Man_casual_5_F", "U_C_Man_casual_2_F", "U_C_man_sport_1_F", "U_C_Poloshirt_salmon", "U_I_C_Soldier_Bandit_5_F", "U_C_Man_casual_4_F", "U_C_man_sport_2_F", "U_C_HunterBody_grn", "U_I_C_Soldier_Bandit_1_F", "U_C_Poloshirt_tricolour", "U_C_Poor_2", "U_I_C_Soldier_Bandit_2_F", "U_C_Poloshirt_tricolour", "U_C_HunterBody_grn", "U_C_man_sport_3_F", "U_C_Poor_1", "U_C_Poloshirt_salmon", "U_Rangemaster", "U_C_Poor_shorts_1", "U_C_Poloshirt_burgundy", "U_C_HunterBody_grn", "U_C_Poor_2", "U_C_Poloshirt_salmon", "U_C_Poloshirt_burgundy", "U_C_Journalist", "U_C_HunterBody_grn", "U_C_Journalist", "U_C_Poloshirt_tricolour", "U_I_C_Soldier_Bandit_1_F", "U_C_Poloshirt_burgundy", "U_C_Man_casual_1_F", "U_C_HunterBody_grn", "U_NikosAgedBody", "U_C_Poloshirt_tricolour", "U_I_C_Soldier_Bandit_5_F", "U_C_Man_casual_6_F", "U_C_man_sport_3_F", "U_C_Poloshirt_stripped", "U_C_Journalist", "U_C_Journalist", "U_Rangemaster", "U_C_Man_casual_6_F", "U_C_man_sport_2_F", "U_C_Man_casual_1_F", "U_C_Journalist", "U_Rangemaster", "U_C_Poor_1", "U_C_Scientist", "U_C_Man_casual_2_F", "U_C_Man_casual_1_F", "U_C_Man_casual_5_F", "U_I_C_Soldier_Bandit_3_F", "U_C_man_sport_3_F", "U_C_man_sport_3_F", "U_C_Man_casual_2_F", "U_C_Poor_shorts_1", "U_C_Poor_1", "U_C_Man_casual_4_F", "U_Rangemaster", "U_C_Poloshirt_blue", "U_C_Poor_shorts_1", "U_C_Poloshirt_blue", "U_C_Scientist", "U_C_HunterBody_grn", "U_C_Poloshirt_salmon", "U_C_Poor_shorts_1", "U_Rangemaster", "U_C_Poloshirt_stripped", "U_I_C_Soldier_Bandit_1_F", "U_C_Poloshirt_stripped", "U_C_Man_casual_3_F", "U_C_HunterBody_grn", "U_I_C_Soldier_Bandit_4_F", "U_Rangemaster", "U_C_Poor_2", "U_I_C_Soldier_Bandit_4_F", "U_OrestesBody", "U_I_C_Soldier_Bandit_2_F", "U_C_Poor_2", "U_C_Poloshirt_salmon", "U_C_Poloshirt_burgundy", "U_C_HunterBody_grn", "U_C_man_sport_2_F", "U_C_Man_casual_5_F", "U_C_Poloshirt_burgundy", "U_C_Journalist", "U_C_Man_casual_1_F", "U_Rangemaster", "U_C_Poor_shorts_1", "U_C_man_sport_2_F", "U_C_Man_casual_4_F", "U_C_Poloshirt_salmon", "U_I_C_Soldier_Bandit_2_F", "U_C_Man_casual_6_F", "U_C_Scientist", "U_I_C_Soldier_Bandit_3_F", "U_C_Journalist", "U_I_C_Soldier_Bandit_5_F", "U_C_Poloshirt_blue", "U_C_Poor_shorts_1", "U_C_Poloshirt_salmon", "U_NikosBody", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Bandit_3_F", "U_C_man_sport_1_F", "U_C_Poor_2", "U_C_Poloshirt_blue", "U_C_Poloshirt_blue", "U_C_Man_casual_6_F", "U_C_Poloshirt_stripped", "U_C_Poloshirt_stripped", "U_C_HunterBody_grn", "U_C_Poor_1", "U_C_Poloshirt_burgundy", "U_C_Poor_2", "U_I_C_Soldier_Bandit_3_F", "U_C_Man_casual_3_F", "U_I_C_Soldier_Bandit_4_F", "U_C_Journalist", "U_I_C_Soldier_Bandit_1_F"};

		/*
			Percental Item Spawn Chances of CivilianBackpacks:

			B_Kitbag_cbr        = 6.67%
			B_Kitbag_mcamo      = 6.67%
			B_Kitbag_sgg        = 6.67%
			B_AssaultPack_blk   = 6.67%
			B_AssaultPack_cbr   = 6.67%
			B_AssaultPack_dgtl  = 6.67%
			B_AssaultPack_khk   = 6.67%
			B_AssaultPack_mcamo = 6.67%
			B_AssaultPack_rgr   = 6.67%
			B_AssaultPack_sgg   = 6.67%
			B_AssaultPack_tna_F = 6.67%
			B_HuntingBackpack   = 6.67%
			B_OutdoorPack_blu   = 6.67%
			B_OutdoorPack_tan   = 6.67%
			B_OutdoorPack_blk   = 6.67%
		*/
		CivilianBackpacks[] = {"B_AssaultPack_tna_F", "B_AssaultPack_blk", "B_AssaultPack_dgtl", "B_AssaultPack_rgr", "B_Kitbag_cbr", "B_HuntingBackpack", "B_AssaultPack_mcamo", "B_Kitbag_mcamo", "B_AssaultPack_sgg", "B_OutdoorPack_blu", "B_OutdoorPack_blk", "B_AssaultPack_khk", "B_Kitbag_sgg", "B_OutdoorPack_tan", "B_AssaultPack_cbr"};

		/*
			Percental Item Spawn Chances of CivilianVests:

			V_Press_F            = 25.00%
			V_TacVest_blk_POLICE = 25.00%
			V_Rangemaster_belt   = 50.00%
		*/
		CivilianVests[] = {"V_TacVest_blk_POLICE", "V_Press_F", "V_Rangemaster_belt", "V_Rangemaster_belt"};

		/*
			Percental Item Spawn Chances of CivilianHeadgear:

			H_Bandanna_surfer  = 5.56%
			H_Beret_blk_POLICE = 5.56%
			H_Cap_blk          = 5.56%
			H_Cap_blk_Raven    = 5.56%
			H_Cap_blu          = 5.56%
			H_Cap_grn          = 5.56%
			H_Cap_headphones   = 5.56%
			H_Cap_oli          = 5.56%
			H_Cap_press        = 5.56%
			H_Cap_red          = 5.56%
			H_Cap_tan          = 5.56%
			H_Hat_blue         = 5.56%
			H_Hat_brown        = 5.56%
			H_Hat_checker      = 5.56%
			H_Hat_grey         = 5.56%
			H_Hat_tan          = 5.56%
			H_StrawHat         = 5.56%
			H_StrawHat_dark    = 5.56%
		*/
		CivilianHeadgear[] = {"H_Cap_oli", "H_Hat_tan", "H_Cap_blk_Raven", "H_Hat_blue", "H_StrawHat_dark", "H_Cap_tan", "H_Beret_blk_POLICE", "H_Hat_grey", "H_Cap_blk", "H_Hat_brown", "H_Hat_checker", "H_Cap_red", "H_Bandanna_surfer", "H_Cap_blu", "H_Cap_grn", "H_Cap_headphones", "H_StrawHat", "H_Cap_press"};

		/*
			Percental Item Spawn Chances of GuerillaItems:

			Rangefinder        = 6.25%
			ItemCompass        = 62.50%
			NVGoggles          = 6.25%
			NVGoggles_tna_F    = 6.25%
			O_NVGoggles_ghex_F = 6.25%
			O_NVGoggles_hex_F  = 6.25%
			O_NVGoggles_urb_F  = 6.25%
		*/
		GuerillaItems[] = {"Rangefinder", "NVGoggles_tna_F", "ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass", "NVGoggles", "O_NVGoggles_urb_F", "ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass", "O_NVGoggles_hex_F", "O_NVGoggles_ghex_F", "ItemCompass"};

		/*
			Percental Item Spawn Chances of GuerillaClothing:

			U_I_G_resistanceLeader_F = 1.75%
			U_I_C_Soldier_Camo_F     = 5.26%
			U_I_C_Soldier_Para_1_F   = 5.26%
			U_I_C_Soldier_Para_2_F   = 5.26%
			U_I_C_Soldier_Para_3_F   = 5.26%
			U_I_C_Soldier_Para_4_F   = 5.26%
			U_I_C_Soldier_Para_5_F   = 5.26%
			U_IG_leader              = 7.02%
			U_IG_Guerilla3_1         = 8.77%
			U_IG_Guerilla3_2         = 8.77%
			U_IG_Guerilla1_1         = 10.53%
			U_IG_Guerilla2_1         = 10.53%
			U_IG_Guerilla2_2         = 10.53%
			U_IG_Guerilla2_3         = 10.53%
		*/
		GuerillaClothing[] = {"U_IG_Guerilla2_2", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_3_F", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla2_3", "U_IG_Guerilla3_2", "U_IG_Guerilla2_2", "U_IG_Guerilla3_2", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla3_1", "U_IG_Guerilla3_2", "U_IG_Guerilla2_3", "U_IG_Guerilla2_2", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla3_2", "U_IG_Guerilla2_1", "U_IG_leader", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla3_1", "U_IG_Guerilla2_2", "U_IG_Guerilla3_1", "U_IG_Guerilla2_1", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_1_F", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla2_1", "U_IG_Guerilla2_3", "U_I_C_Soldier_Camo_F", "U_I_C_Soldier_Para_1_F", "U_IG_leader", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla3_2", "U_IG_Guerilla3_1", "U_IG_Guerilla1_1", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla2_2", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla2_1", "U_IG_Guerilla3_1", "U_IG_Guerilla2_1", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_1_F", "U_IG_leader", "U_IG_Guerilla2_2", "U_I_G_resistanceLeader_F", "U_I_C_Soldier_Para_4_F", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla2_3", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_2_F", "U_IG_leader"};

		/*
			Percental Item Spawn Chances of GuerillaBackpacks:

			B_Bergen_blk               = 1.82%
			B_Bergen_mcamo             = 1.82%
			B_Bergen_rgr               = 1.82%
			B_Bergen_sgg               = 1.82%
			B_FieldPack_ghex_F         = 1.82%
			B_ViperHarness_base_F      = 3.64%
			B_ViperHarness_blk_F       = 3.64%
			B_ViperHarness_ghex_F      = 3.64%
			B_ViperHarness_hex_F       = 3.64%
			B_ViperHarness_khk_F       = 3.64%
			B_ViperHarness_oli_F       = 3.64%
			B_ViperLightHarness_base_F = 5.45%
			B_ViperLightHarness_blk_F  = 5.45%
			B_ViperLightHarness_ghex_F = 5.45%
			B_ViperLightHarness_hex_F  = 5.45%
			B_ViperLightHarness_khk_F  = 5.45%
			B_ViperLightHarness_oli_F  = 5.45%
			B_FieldPack_blk            = 9.09%
			B_FieldPack_cbr            = 9.09%
			B_FieldPack_ocamo          = 9.09%
			B_FieldPack_oucamo         = 9.09%
		*/
		GuerillaBackpacks[] = {"B_FieldPack_cbr", "B_FieldPack_oucamo", "B_ViperLightHarness_base_F", "B_FieldPack_blk", "B_ViperLightHarness_ghex_F", "B_ViperLightHarness_ghex_F", "B_ViperLightHarness_ghex_F", "B_ViperLightHarness_hex_F", "B_FieldPack_ocamo", "B_FieldPack_oucamo", "B_ViperHarness_base_F", "B_ViperLightHarness_blk_F", "B_FieldPack_ocamo", "B_ViperLightHarness_oli_F", "B_FieldPack_ocamo", "B_ViperLightHarness_base_F", "B_ViperLightHarness_oli_F", "B_FieldPack_blk", "B_FieldPack_blk", "B_ViperLightHarness_hex_F", "B_ViperHarness_khk_F", "B_FieldPack_blk", "B_FieldPack_cbr", "B_Bergen_sgg", "B_ViperLightHarness_khk_F", "B_ViperLightHarness_khk_F", "B_ViperHarness_oli_F", "B_ViperLightHarness_hex_F", "B_ViperHarness_blk_F", "B_FieldPack_cbr", "B_FieldPack_oucamo", "B_ViperHarness_khk_F", "B_ViperHarness_base_F", "B_FieldPack_ghex_F", "B_FieldPack_ocamo", "B_FieldPack_blk", "B_ViperHarness_ghex_F", "B_ViperLightHarness_blk_F", "B_ViperLightHarness_blk_F", "B_ViperHarness_hex_F", "B_FieldPack_cbr", "B_FieldPack_cbr", "B_Bergen_mcamo", "B_ViperLightHarness_oli_F", "B_ViperHarness_ghex_F", "B_ViperLightHarness_khk_F", "B_FieldPack_oucamo", "B_ViperHarness_hex_F", "B_ViperLightHarness_base_F", "B_FieldPack_ocamo", "B_Bergen_rgr", "B_ViperHarness_oli_F", "B_ViperHarness_blk_F", "B_Bergen_blk", "B_FieldPack_oucamo"};

		/*
			Percental Item Spawn Chances of GuerillaVests:

			V_I_G_resistanceLeader_F = 3.23%
			V_BandollierB_blk        = 6.45%
			V_BandollierB_cbr        = 6.45%
			V_BandollierB_khk        = 6.45%
			V_BandollierB_oli        = 6.45%
			V_BandollierB_rgr        = 6.45%
			V_Chestrig_blk           = 6.45%
			V_Chestrig_khk           = 6.45%
			V_Chestrig_oli           = 6.45%
			V_Chestrig_rgr           = 6.45%
			V_HarnessO_brn           = 6.45%
			V_HarnessO_gry           = 6.45%
			V_HarnessOGL_brn         = 6.45%
			V_HarnessOGL_gry         = 6.45%
			V_HarnessOSpec_brn       = 6.45%
			V_HarnessOSpec_gry       = 6.45%
		*/
		GuerillaVests[] = {"V_HarnessO_gry", "V_HarnessOGL_brn", "V_BandollierB_oli", "V_Chestrig_rgr", "V_BandollierB_cbr", "V_HarnessO_brn", "V_HarnessOSpec_brn", "V_Chestrig_oli", "V_Chestrig_blk", "V_Chestrig_khk", "V_HarnessO_gry", "V_BandollierB_oli", "V_HarnessOSpec_gry", "V_HarnessOGL_gry", "V_Chestrig_blk", "V_Chestrig_oli", "V_BandollierB_blk", "V_BandollierB_rgr", "V_BandollierB_khk", "V_BandollierB_blk", "V_BandollierB_khk", "V_HarnessOSpec_brn", "V_Chestrig_khk", "V_BandollierB_rgr", "V_Chestrig_rgr", "V_HarnessOGL_gry", "V_I_G_resistanceLeader_F", "V_HarnessO_brn", "V_HarnessOSpec_gry", "V_HarnessOGL_brn", "V_BandollierB_cbr"};

		/*
			Percental Item Spawn Chances of GuerillaHeadgear:

			H_Beret_02                = 0.82%
			H_Beret_blk               = 0.82%
			H_Beret_brn_SF            = 0.82%
			H_Beret_Colonel           = 0.82%
			H_Beret_grn               = 0.82%
			H_Beret_grn_SF            = 0.82%
			H_Beret_ocamo             = 0.82%
			H_Beret_red               = 0.82%
			H_Booniehat_tna_F         = 1.64%
			H_Cap_blk_Syndikat_F      = 1.64%
			H_Cap_grn_Syndikat_F      = 1.64%
			H_Cap_oli_Syndikat_F      = 1.64%
			H_Cap_tan_Syndikat_F      = 1.64%
			H_FakeHeadgear_Syndikat_F = 1.64%
			H_MilCap_gen_F            = 1.64%
			H_MilCap_ghex_F           = 1.64%
			H_MilCap_tna_F            = 1.64%
			H_Shemag_khk              = 1.64%
			H_Shemag_olive            = 1.64%
			H_Shemag_olive_hs         = 1.64%
			H_Shemag_tan              = 1.64%
			H_ShemagOpen_khk          = 1.64%
			H_ShemagOpen_tan          = 1.64%
			H_TurbanO_blk             = 1.64%
			H_Watchcap_camo           = 1.64%
			H_Watchcap_sgg            = 1.64%
			H_Bandanna_camo           = 2.46%
			H_Bandanna_cbr            = 2.46%
			H_Bandanna_gry            = 2.46%
			H_Bandanna_khk            = 2.46%
			H_Bandanna_khk_hs         = 2.46%
			H_Bandanna_mcamo          = 2.46%
			H_Bandanna_sgg            = 2.46%
			H_BandMask_blk            = 2.46%
			H_Cap_brn_SPECOPS         = 2.46%
			H_Cap_khaki_specops_UK    = 2.46%
			H_Cap_tan_specops_US      = 2.46%
			H_Hat_camo                = 2.46%
			H_Watchcap_blk            = 2.46%
			H_Watchcap_khk            = 2.46%
			Exile_Headgear_GasMask    = 3.28%
			H_Booniehat_dgtl          = 3.28%
			H_Booniehat_dirty         = 3.28%
			H_Booniehat_grn           = 3.28%
			H_Booniehat_indp          = 3.28%
			H_Booniehat_khk           = 3.28%
			H_Booniehat_khk_hs        = 3.28%
			H_Booniehat_mcamo         = 3.28%
			H_Booniehat_tan           = 3.28%
		*/
		GuerillaHeadgear[] = {"H_Booniehat_mcamo", "H_Watchcap_sgg", "H_Bandanna_camo", "H_Booniehat_indp", "H_Bandanna_khk", "H_MilCap_gen_F", "H_Cap_brn_SPECOPS", "H_Beret_Colonel", "H_Booniehat_tan", "H_Shemag_olive", "H_Watchcap_khk", "H_Bandanna_camo", "H_Hat_camo", "H_Booniehat_khk", "H_Cap_oli_Syndikat_F", "H_Cap_oli_Syndikat_F", "H_Beret_grn_SF", "H_Bandanna_gry", "H_Booniehat_mcamo", "H_Beret_ocamo", "H_Shemag_olive_hs", "H_Booniehat_indp", "H_Bandanna_khk", "H_Booniehat_indp", "H_Booniehat_indp", "H_ShemagOpen_tan", "H_Hat_camo", "H_Bandanna_mcamo", "H_Beret_blk", "H_Booniehat_tna_F", "H_ShemagOpen_tan", "H_Booniehat_dirty", "H_Booniehat_grn", "H_Bandanna_cbr", "H_BandMask_blk", "H_Shemag_olive_hs", "H_Shemag_tan", "H_Booniehat_grn", "H_Cap_brn_SPECOPS", "H_Booniehat_khk_hs", "H_Cap_brn_SPECOPS", "H_Booniehat_dgtl", "H_Booniehat_tan", "Exile_Headgear_GasMask", "H_Booniehat_tan", "H_Bandanna_sgg", "H_MilCap_ghex_F", "H_Cap_tan_Syndikat_F", "H_MilCap_tna_F", "H_Cap_tan_Syndikat_F", "H_Booniehat_khk_hs", "H_BandMask_blk", "H_Watchcap_camo", "H_Beret_02", "H_FakeHeadgear_Syndikat_F", "H_Cap_blk_Syndikat_F", "H_ShemagOpen_khk", "H_Booniehat_tna_F", "H_Watchcap_sgg", "H_Bandanna_khk", "H_Booniehat_dgtl", "H_Cap_tan_specops_US", "H_Watchcap_blk", "H_Cap_blk_Syndikat_F", "Exile_Headgear_GasMask", "H_Beret_brn_SF", "H_Beret_red", "H_Cap_tan_specops_US", "H_Bandanna_khk_hs", "H_ShemagOpen_khk", "H_FakeHeadgear_Syndikat_F", "H_Booniehat_mcamo", "Exile_Headgear_GasMask", "H_Bandanna_mcamo", "Exile_Headgear_GasMask", "H_MilCap_tna_F", "H_Bandanna_khk_hs", "H_Booniehat_dirty", "H_Hat_camo", "H_TurbanO_blk", "H_Watchcap_blk", "H_Booniehat_dirty", "H_MilCap_ghex_F", "H_MilCap_gen_F", "H_Watchcap_camo", "H_Shemag_khk", "H_Booniehat_tan", "H_Watchcap_khk", "H_Shemag_olive", "H_Beret_grn", "H_Booniehat_khk_hs", "H_Cap_grn_Syndikat_F", "H_Cap_khaki_specops_UK", "H_Watchcap_blk", "H_Bandanna_cbr", "H_Bandanna_camo", "H_Cap_grn_Syndikat_F", "H_Bandanna_sgg", "H_Cap_khaki_specops_UK", "H_Bandanna_gry", "H_Cap_khaki_specops_UK", "H_Bandanna_cbr", "H_Booniehat_khk", "H_Watchcap_khk", "H_Bandanna_sgg", "H_Booniehat_khk_hs", "H_Bandanna_gry", "H_Bandanna_khk_hs", "H_Booniehat_khk", "H_Cap_tan_specops_US", "H_Shemag_khk", "H_Booniehat_khk", "H_Shemag_tan", "H_Bandanna_mcamo", "H_Booniehat_dgtl", "H_Booniehat_mcamo", "H_Booniehat_grn", "H_TurbanO_blk", "H_Booniehat_dirty", "H_Booniehat_dgtl", "H_BandMask_blk", "H_Booniehat_grn"};

		/*
			Percental Item Spawn Chances of MilitaryClothing:

			U_B_Wetsuit                   = 1.32%
			U_I_OfficerUniform            = 1.32%
			U_I_Wetsuit                   = 1.32%
			U_O_CombatUniform_ocamo       = 1.32%
			U_O_CombatUniform_oucamo      = 1.32%
			U_O_OfficerUniform_ocamo      = 1.32%
			U_O_SpecopsUniform_blk        = 1.32%
			U_O_SpecopsUniform_ocamo      = 1.32%
			U_O_V_Soldier_Viper_F         = 1.32%
			U_O_V_Soldier_Viper_hex_F     = 1.32%
			U_O_Wetsuit                   = 1.32%
			U_B_SpecopsUniform_sgg        = 1.97%
			U_B_HeliPilotCoveralls        = 2.63%
			U_B_PilotCoveralls            = 2.63%
			U_I_CombatUniform             = 2.63%
			U_I_CombatUniform_shortsleeve = 2.63%
			U_I_CombatUniform_tshirt      = 2.63%
			U_I_HeliPilotCoveralls        = 2.63%
			U_I_pilotCoveralls            = 2.63%
			U_O_PilotCoveralls            = 2.63%
			U_B_CombatUniform_mcam        = 3.29%
			U_B_CombatUniform_mcam_tshirt = 3.29%
			U_B_CombatUniform_mcam_vest   = 3.29%
			U_B_CombatUniform_mcam_worn   = 3.29%
			U_B_CTRG_1                    = 3.29%
			U_B_CTRG_2                    = 3.29%
			U_B_CTRG_3                    = 3.29%
			U_B_CTRG_Soldier_2_F          = 3.29%
			U_B_CTRG_Soldier_3_F          = 3.29%
			U_B_CTRG_Soldier_F            = 3.29%
			U_B_CTRG_Soldier_urb_1_F      = 3.29%
			U_B_CTRG_Soldier_urb_2_F      = 3.29%
			U_B_CTRG_Soldier_urb_3_F      = 3.29%
			U_B_GEN_Commander_F           = 3.29%
			U_B_GEN_Soldier_F             = 3.29%
			U_B_T_Soldier_AR_F            = 3.29%
			U_B_T_Soldier_SL_F            = 3.29%
			U_O_T_Officer_F               = 3.29%
			U_O_T_Soldier_F               = 3.29%
		*/
		MilitaryClothing[] = {"U_B_CTRG_Soldier_F", "U_B_T_Soldier_SL_F", "U_I_CombatUniform_tshirt", "U_B_CTRG_Soldier_3_F", "U_B_CTRG_Soldier_urb_1_F", "U_B_HeliPilotCoveralls", "U_O_T_Officer_F", "U_B_CTRG_Soldier_urb_1_F", "U_O_T_Soldier_F", "U_O_PilotCoveralls", "U_O_PilotCoveralls", "U_O_PilotCoveralls", "U_B_SpecopsUniform_sgg", "U_B_CTRG_3", "U_I_CombatUniform", "U_B_CTRG_1", "U_B_CTRG_Soldier_3_F", "U_B_CombatUniform_mcam_worn", "U_I_pilotCoveralls", "U_I_CombatUniform_tshirt", "U_B_GEN_Commander_F", "U_B_CTRG_2", "U_B_CTRG_Soldier_2_F", "U_B_CombatUniform_mcam_vest", "U_I_pilotCoveralls", "U_B_CTRG_1", "U_B_CTRG_Soldier_3_F", "U_B_CombatUniform_mcam_vest", "U_B_CTRG_Soldier_urb_2_F", "U_O_SpecopsUniform_blk", "U_B_GEN_Commander_F", "U_O_Wetsuit", "U_B_CTRG_2", "U_B_CTRG_Soldier_urb_3_F", "U_I_CombatUniform", "U_B_GEN_Soldier_F", "U_I_HeliPilotCoveralls", "U_I_OfficerUniform", "U_O_V_Soldier_Viper_F", "U_O_T_Soldier_F", "U_B_CombatUniform_mcam_tshirt", "U_B_GEN_Soldier_F", "U_B_CTRG_3", "U_I_CombatUniform_shortsleeve", "U_O_CombatUniform_ocamo", "U_B_CombatUniform_mcam", "U_O_T_Soldier_F", "U_O_T_Officer_F", "U_B_CTRG_Soldier_urb_1_F", "U_B_T_Soldier_AR_F", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_Soldier_urb_3_F", "U_O_CombatUniform_ocamo", "U_O_OfficerUniform_ocamo", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_Soldier_3_F", "U_B_CTRG_Soldier_F", "U_I_CombatUniform", "U_I_HeliPilotCoveralls", "U_B_GEN_Commander_F", "U_B_CombatUniform_mcam", "U_O_V_Soldier_Viper_hex_F", "U_O_SpecopsUniform_ocamo", "U_B_HeliPilotCoveralls", "U_B_CTRG_Soldier_2_F", "U_B_GEN_Soldier_F", "U_B_PilotCoveralls", "U_B_CTRG_Soldier_F", "U_I_Wetsuit", "U_O_T_Soldier_F", "U_B_CTRG_Soldier_3_F", "U_B_T_Soldier_AR_F", "U_B_T_Soldier_SL_F", "U_B_CombatUniform_mcam_worn", "U_B_T_Soldier_SL_F", "U_B_CTRG_2", "U_I_CombatUniform_shortsleeve", "U_B_PilotCoveralls", "U_B_CTRG_Soldier_urb_2_F", "U_O_T_Officer_F", "U_B_T_Soldier_SL_F", "U_O_T_Officer_F", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_2", "U_B_T_Soldier_SL_F", "U_B_GEN_Commander_F", "U_B_SpecopsUniform_sgg", "U_B_CombatUniform_mcam_vest", "U_B_CombatUniform_mcam_tshirt", "U_I_OfficerUniform", "U_B_CombatUniform_mcam_tshirt", "U_B_CombatUniform_mcam_worn", "U_I_pilotCoveralls", "U_B_CTRG_1", "U_O_V_Soldier_Viper_hex_F", "U_B_CombatUniform_mcam_worn", "U_B_PilotCoveralls", "U_B_CTRG_2", "U_B_GEN_Soldier_F", "U_B_CombatUniform_mcam", "U_O_V_Soldier_Viper_F", "U_O_SpecopsUniform_blk", "U_O_PilotCoveralls", "U_B_CombatUniform_mcam", "U_B_CTRG_Soldier_urb_1_F", "U_B_CTRG_3", "U_B_T_Soldier_AR_F", "U_I_CombatUniform_tshirt", "U_B_CTRG_Soldier_F", "U_O_T_Officer_F", "U_I_CombatUniform_shortsleeve", "U_B_CombatUniform_mcam_tshirt", "U_I_HeliPilotCoveralls", "U_I_CombatUniform_shortsleeve", "U_B_Wetsuit", "U_O_Wetsuit", "U_O_CombatUniform_oucamo", "U_B_CombatUniform_mcam_tshirt", "U_B_PilotCoveralls", "U_B_CombatUniform_mcam_vest", "U_B_HeliPilotCoveralls", "U_B_CTRG_1", "U_B_CTRG_Soldier_urb_1_F", "U_B_CombatUniform_mcam_worn", "U_B_CTRG_1", "U_O_CombatUniform_oucamo", "U_I_CombatUniform_tshirt", "U_B_HeliPilotCoveralls", "U_B_GEN_Commander_F", "U_O_SpecopsUniform_ocamo", "U_B_CTRG_3", "U_B_CTRG_Soldier_urb_2_F", "U_B_GEN_Soldier_F", "U_B_CTRG_Soldier_urb_3_F", "U_I_CombatUniform", "U_B_CTRG_3", "U_B_CTRG_Soldier_F", "U_B_CTRG_Soldier_urb_2_F", "U_I_pilotCoveralls", "U_O_OfficerUniform_ocamo", "U_B_CTRG_Soldier_2_F", "U_B_CombatUniform_mcam_vest", "U_B_CombatUniform_mcam", "U_B_CTRG_Soldier_2_F", "U_B_CTRG_Soldier_2_F", "U_I_HeliPilotCoveralls", "U_O_T_Soldier_F", "U_B_T_Soldier_AR_F", "U_I_Wetsuit", "U_B_SpecopsUniform_sgg", "U_B_T_Soldier_AR_F", "U_B_Wetsuit"};

		/*
			Percental Item Spawn Chances of MilitaryBackpacks:

			B_Bergen_Base_F   = 5.26%
			B_Bergen_dgtl_F   = 5.26%
			B_Bergen_hex_F    = 5.26%
			B_Bergen_mcamo_F  = 5.26%
			B_Bergen_tna_F    = 5.26%
			B_Carryall_mcamo  = 10.53%
			B_Carryall_ocamo  = 10.53%
			B_Carryall_oucamo = 10.53%
			B_Carryall_khk    = 10.53%
			B_Carryall_oli    = 10.53%
			B_Carryall_cbr    = 10.53%
			B_Carryall_ghex_F = 10.53%
		*/
		MilitaryBackpacks[] = {"B_Bergen_tna_F", "B_Bergen_dgtl_F", "B_Carryall_mcamo", "B_Carryall_khk", "B_Carryall_oucamo", "B_Carryall_oli", "B_Carryall_cbr", "B_Carryall_ghex_F", "B_Carryall_oucamo", "B_Bergen_Base_F", "B_Carryall_khk", "B_Bergen_mcamo_F", "B_Carryall_ghex_F", "B_Carryall_ocamo", "B_Carryall_oli", "B_Carryall_ocamo", "B_Carryall_cbr", "B_Bergen_hex_F", "B_Carryall_mcamo"};

		/*
			Percental Item Spawn Chances of MilitaryVests:

			V_PlateCarrierH_CTRG    = 5.00%
			V_PlateCarrierL_CTRG    = 5.00%
			V_PlateCarrier1_blk     = 10.00%
			V_PlateCarrier1_rgr     = 10.00%
			V_PlateCarrier2_rgr     = 10.00%
			V_PlateCarrier3_rgr     = 10.00%
			V_PlateCarrierGL_rgr    = 10.00%
			V_PlateCarrierIA1_dgtl  = 10.00%
			V_PlateCarrierIA2_dgtl  = 10.00%
			V_PlateCarrierIAGL_dgtl = 10.00%
			V_PlateCarrierSpec_rgr  = 10.00%
		*/
		MilitaryVests[] = {"V_PlateCarrierGL_rgr", "V_PlateCarrierH_CTRG", "V_PlateCarrierIA2_dgtl", "V_PlateCarrier2_rgr", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierSpec_rgr", "V_PlateCarrier1_blk", "V_PlateCarrierSpec_rgr", "V_PlateCarrierIA1_dgtl", "V_PlateCarrier2_rgr", "V_PlateCarrier3_rgr", "V_PlateCarrier1_rgr", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrier1_blk", "V_PlateCarrierL_CTRG", "V_PlateCarrierGL_rgr", "V_PlateCarrierIA2_dgtl", "V_PlateCarrier1_rgr", "V_PlateCarrier3_rgr", "V_PlateCarrierIA1_dgtl"};

		/*
			Percental Item Spawn Chances of MilitaryHeadgear:

			H_CrewHelmetHeli_B        = 0.81%
			H_CrewHelmetHeli_I        = 0.81%
			H_CrewHelmetHeli_O        = 0.81%
			H_HelmetB_camo            = 0.81%
			H_HelmetCrew_B            = 0.81%
			H_HelmetCrew_I            = 0.81%
			H_HelmetCrew_O            = 0.81%
			H_HelmetLeaderO_ocamo     = 0.81%
			H_HelmetLeaderO_oucamo    = 0.81%
			H_HelmetO_ghex_F          = 0.81%
			H_HelmetO_ocamo           = 0.81%
			H_HelmetO_oucamo          = 0.81%
			H_HelmetSpecO_blk         = 0.81%
			H_HelmetSpecO_ocamo       = 0.81%
			H_PilotHelmetFighter_B    = 0.81%
			H_PilotHelmetFighter_I    = 0.81%
			H_PilotHelmetFighter_O    = 0.81%
			H_PilotHelmetHeli_B       = 0.81%
			H_PilotHelmetHeli_I       = 0.81%
			H_PilotHelmetHeli_O       = 0.81%
			H_BandMask_demon          = 1.63%
			H_BandMask_khk            = 1.63%
			H_BandMask_reaper         = 1.63%
			H_Beret_gen_F             = 1.63%
			H_Helmet_Skate            = 1.63%
			H_HelmetB_black           = 1.63%
			H_HelmetB_desert          = 1.63%
			H_HelmetB_Enh_tna_F       = 1.63%
			H_HelmetB_grass           = 1.63%
			H_HelmetB_light_black     = 1.63%
			H_HelmetB_light_desert    = 1.63%
			H_HelmetB_light_grass     = 1.63%
			H_HelmetB_light_sand      = 1.63%
			H_HelmetB_light_snakeskin = 1.63%
			H_HelmetB_Light_tna_F     = 1.63%
			H_HelmetB_sand            = 1.63%
			H_HelmetB_snakeskin       = 1.63%
			H_HelmetB_TI_tna_F        = 1.63%
			H_HelmetB_tna_F           = 1.63%
			H_HelmetCrew_O_ghex_F     = 1.63%
			H_HelmetIA_camo           = 1.63%
			H_HelmetIA_net            = 1.63%
			H_HelmetLeaderO_ghex_F    = 1.63%
			H_HelmetSpecO_ghex_F      = 1.63%
			H_HelmetB                 = 2.44%
			H_HelmetB_light           = 2.44%
			H_HelmetB_paint           = 2.44%
			H_HelmetB_plain_blk       = 2.44%
			H_HelmetIA                = 2.44%
			H_HelmetSpecB             = 2.44%
			H_HelmetSpecB_blk         = 2.44%
			H_HelmetSpecB_paint1      = 2.44%
			H_HelmetSpecB_paint2      = 2.44%
			Exile_Headgear_GasMask    = 3.25%
			H_MilCap_blue             = 3.25%
			H_MilCap_dgtl             = 3.25%
			H_MilCap_mcamo            = 3.25%
			H_MilCap_ocamo            = 3.25%
			H_MilCap_oucamo           = 3.25%
			H_MilCap_rucamo           = 3.25%
		*/
		MilitaryHeadgear[] = {"H_MilCap_mcamo", "H_HelmetSpecB_paint2", "H_HelmetIA_net", "H_HelmetSpecO_blk", "H_HelmetCrew_B", "H_HelmetIA", "H_MilCap_rucamo", "H_HelmetLeaderO_ghex_F", "Exile_Headgear_GasMask", "H_HelmetB_light_snakeskin", "H_HelmetSpecB_paint2", "H_HelmetB_grass", "H_HelmetSpecB_blk", "H_BandMask_khk", "H_HelmetSpecB", "H_HelmetB_paint", "H_HelmetB_TI_tna_F", "H_MilCap_dgtl", "H_CrewHelmetHeli_B", "H_HelmetB_light", "H_HelmetCrew_O_ghex_F", "H_HelmetB_snakeskin", "H_MilCap_blue", "H_BandMask_demon", "H_HelmetB_light", "H_HelmetIA_net", "H_HelmetB_light_black", "H_PilotHelmetHeli_O", "H_MilCap_rucamo", "H_HelmetB", "H_Helmet_Skate", "H_HelmetSpecB_paint1", "H_HelmetSpecO_ghex_F", "H_HelmetSpecB_paint1", "H_MilCap_mcamo", "H_HelmetB_black", "H_HelmetB_plain_blk", "H_HelmetB_light_desert", "H_HelmetB_tna_F", "H_HelmetO_oucamo", "H_HelmetB_light_sand", "H_HelmetB_grass", "H_HelmetB_Enh_tna_F", "H_HelmetB_light_grass", "H_HelmetSpecB_paint1", "H_CrewHelmetHeli_O", "H_MilCap_dgtl", "H_HelmetB_light_grass", "H_HelmetCrew_O_ghex_F", "H_BandMask_khk", "H_HelmetB_plain_blk", "H_HelmetLeaderO_ghex_F", "H_PilotHelmetFighter_O", "H_MilCap_mcamo", "H_HelmetSpecO_ghex_F", "H_MilCap_blue", "H_CrewHelmetHeli_I", "H_HelmetB_Enh_tna_F", "H_HelmetB_light_snakeskin", "Exile_Headgear_GasMask", "H_HelmetSpecB_blk", "H_MilCap_ocamo", "H_HelmetSpecB", "H_Helmet_Skate", "H_HelmetIA_camo", "H_HelmetIA", "H_BandMask_demon", "H_HelmetSpecB_blk", "H_PilotHelmetHeli_B", "H_HelmetSpecO_ocamo", "H_HelmetB_light", "H_MilCap_oucamo", "H_MilCap_blue", "H_Beret_gen_F", "H_MilCap_dgtl", "H_PilotHelmetFighter_B", "H_HelmetB_tna_F", "H_HelmetB_TI_tna_F", "H_HelmetB_light_black", "H_MilCap_oucamo", "H_HelmetB_plain_blk", "H_MilCap_rucamo", "Exile_Headgear_GasMask", "H_HelmetB_camo", "H_Beret_gen_F", "H_HelmetB_paint", "H_HelmetB", "H_HelmetIA", "H_HelmetB_black", "H_HelmetB_sand", "H_HelmetCrew_O", "H_BandMask_reaper", "H_PilotHelmetHeli_I", "H_HelmetB_desert", "H_HelmetIA_camo", "H_HelmetB_light_desert", "H_HelmetLeaderO_ocamo", "H_HelmetB_sand", "H_HelmetB", "H_MilCap_ocamo", "H_HelmetB_Light_tna_F", "H_HelmetB_desert", "H_HelmetSpecB", "H_HelmetB_light_sand", "H_HelmetB_snakeskin", "H_MilCap_dgtl", "H_HelmetB_Light_tna_F", "H_HelmetO_ocamo", "H_MilCap_mcamo", "H_HelmetLeaderO_oucamo", "H_HelmetCrew_I", "H_HelmetO_ghex_F", "H_MilCap_rucamo", "H_MilCap_ocamo", "H_MilCap_oucamo", "H_PilotHelmetFighter_I", "H_BandMask_reaper", "H_HelmetSpecB_paint2", "H_MilCap_oucamo", "H_HelmetB_paint", "H_MilCap_blue", "Exile_Headgear_GasMask", "H_MilCap_ocamo"};

		/*
			Percental Item Spawn Chances of Ghillies:

			U_B_GhillieSuit = 33.33%
			U_O_GhillieSuit = 33.33%
			U_I_GhillieSuit = 33.33%
		*/
		Ghillies[] = {"U_I_GhillieSuit", "U_O_GhillieSuit", "U_B_GhillieSuit"};

		/*
			Percental Item Spawn Chances of DLCGhillies:

			U_B_FullGhillie_ard     = 2.94%
			U_B_FullGhillie_lsh     = 2.94%
			U_B_FullGhillie_sard    = 2.94%
			U_O_FullGhillie_ard     = 2.94%
			U_O_FullGhillie_lsh     = 2.94%
			U_O_FullGhillie_sard    = 2.94%
			U_I_FullGhillie_ard     = 2.94%
			U_I_FullGhillie_lsh     = 2.94%
			U_I_FullGhillie_sard    = 2.94%
			U_B_T_Sniper_F          = 14.71%
			U_B_T_Soldier_F         = 14.71%
			U_B_T_FullGhillie_tna_F = 14.71%
			U_O_T_Sniper_F          = 14.71%
			U_O_T_FullGhillie_tna_F = 14.71%
		*/
		DLCGhillies[] = {"U_O_T_FullGhillie_tna_F", "U_O_T_FullGhillie_tna_F", "U_B_T_FullGhillie_tna_F", "U_B_T_Soldier_F", "U_I_FullGhillie_sard", "U_B_FullGhillie_ard", "U_B_T_Soldier_F", "U_B_T_FullGhillie_tna_F", "U_O_T_Sniper_F", "U_B_FullGhillie_sard", "U_B_T_Soldier_F", "U_B_T_FullGhillie_tna_F", "U_O_FullGhillie_sard", "U_B_T_Soldier_F", "U_B_T_Sniper_F", "U_B_T_Sniper_F", "U_O_T_FullGhillie_tna_F", "U_B_T_FullGhillie_tna_F", "U_B_FullGhillie_lsh", "U_O_FullGhillie_lsh", "U_O_T_Sniper_F", "U_B_T_Sniper_F", "U_O_T_Sniper_F", "U_O_T_Sniper_F", "U_O_T_FullGhillie_tna_F", "U_B_T_Sniper_F", "U_I_FullGhillie_ard", "U_B_T_Sniper_F", "U_I_FullGhillie_lsh", "U_O_T_FullGhillie_tna_F", "U_O_T_Sniper_F", "U_B_T_FullGhillie_tna_F", "U_O_FullGhillie_ard", "U_B_T_Soldier_F"};

		/*
			Percental Item Spawn Chances of DLCVests:

			V_PlateCarrierGL_blk         = 4.76%
			V_PlateCarrierGL_mtp         = 4.76%
			V_PlateCarrierGL_rgr         = 4.76%
			V_PlateCarrierIAGL_dgtl      = 4.76%
			V_PlateCarrierIAGL_oli       = 4.76%
			V_PlateCarrierSpec_blk       = 4.76%
			V_PlateCarrierSpec_mtp       = 4.76%
			V_PlateCarrierSpec_rgr       = 4.76%
			V_TacChestrig_grn_F          = 4.76%
			V_TacChestrig_oli_F          = 4.76%
			V_TacChestrig_cbr_F          = 4.76%
			V_PlateCarrier1_tna_F        = 4.76%
			V_PlateCarrier2_tna_F        = 4.76%
			V_PlateCarrierSpec_tna_F     = 4.76%
			V_PlateCarrierGL_tna_F       = 4.76%
			V_HarnessO_ghex_F            = 4.76%
			V_HarnessOGL_ghex_F          = 4.76%
			V_BandollierB_ghex_F         = 4.76%
			V_TacVest_gen_F              = 4.76%
			V_PlateCarrier1_rgr_noflag_F = 4.76%
			V_PlateCarrier2_rgr_noflag_F = 4.76%
		*/
		DLCVests[] = {"V_PlateCarrier1_rgr_noflag_F", "V_PlateCarrierSpec_rgr", "V_PlateCarrierGL_rgr", "V_TacChestrig_grn_F", "V_PlateCarrier1_tna_F", "V_PlateCarrierSpec_blk", "V_PlateCarrierIAGL_oli", "V_TacVest_gen_F", "V_PlateCarrierGL_mtp", "V_PlateCarrierSpec_mtp", "V_TacChestrig_cbr_F", "V_PlateCarrier2_rgr_noflag_F", "V_HarnessOGL_ghex_F", "V_HarnessO_ghex_F", "V_PlateCarrierGL_tna_F", "V_PlateCarrier2_tna_F", "V_PlateCarrierSpec_tna_F", "V_PlateCarrierIAGL_dgtl", "V_BandollierB_ghex_F", "V_PlateCarrierGL_blk", "V_TacChestrig_oli_F"};

		/*
			Percental Item Spawn Chances of Rebreathers:

			V_RebreatherB  = 33.33%
			V_RebreatherIR = 33.33%
			V_RebreatherIA = 33.33%
		*/
		Rebreathers[] = {"V_RebreatherIR", "V_RebreatherIA", "V_RebreatherB"};

		/*
			Percental Item Spawn Chances of MedicalItems:

			Exile_Item_Defibrillator       = 1.52%
			rzinfection_antivirus_injector = 4.55%
			rzinfection_antivirus_pills    = 6.06%
			Exile_Item_InstaDoc            = 12.12%
			Exile_Item_Bandage             = 15.15%
			Exile_Item_Vishpirin           = 30.30%
			Exile_Item_Heatpack            = 30.30%
		*/
		MedicalItems[] = {"rzinfection_antivirus_injector", "Exile_Item_Vishpirin", "Exile_Item_Heatpack", "Exile_Item_Vishpirin", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "Exile_Item_InstaDoc", "Exile_Item_Vishpirin", "Exile_Item_Heatpack", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exile_Item_Vishpirin", "rzinfection_antivirus_pills", "Exile_Item_Heatpack", "Exile_Item_Vishpirin", "Exile_Item_InstaDoc", "Exile_Item_Vishpirin", "Exile_Item_InstaDoc", "Exile_Item_InstaDoc", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "rzinfection_antivirus_pills", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "rzinfection_antivirus_pills", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "Exile_Item_Vishpirin", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "Exile_Item_InstaDoc", "Exile_Item_Heatpack", "rzinfection_antivirus_injector", "Exile_Item_Vishpirin", "rzinfection_antivirus_injector", "Exile_Item_Heatpack", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Defibrillator", "Exile_Item_Vishpirin", "Exile_Item_InstaDoc", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "Exile_Item_Bandage", "Exile_Item_InstaDoc", "Exile_Item_Heatpack", "Exile_Item_Vishpirin", "Exile_Item_Vishpirin", "Exile_Item_Heatpack", "Exile_Item_Vishpirin", "Exile_Item_Heatpack", "Exile_Item_InstaDoc", "Exile_Item_Vishpirin", "Exile_Item_Vishpirin", "Exile_Item_Vishpirin", "Exile_Item_Vishpirin", "Exile_Item_Heatpack", "rzinfection_antivirus_pills"};

		/*
			Percental Item Spawn Chances of IndustrialItems:

			Land_CanisterPlastic_F          = 1.01%
			Exile_Item_Knife                = 1.01%
			Exile_Item_FloodLightKit        = 1.51%
			Exile_Item_PortableGeneratorKit = 1.51%
			Exile_Item_MetalPole            = 1.51%
			Exile_Item_Foolbox              = 1.51%
			Exile_Item_MetalWire            = 2.01%
			Exile_Item_Rope                 = 2.01%
			Exile_Item_CamoTentKit          = 2.01%
			Exile_Item_MetalBoard           = 2.01%
			Exile_Item_SleepingMat          = 2.01%
			Exile_Item_FireExtinguisher     = 2.01%
			Exile_Item_CordlessScrewdriver  = 2.01%
			Exile_Item_Hammer               = 2.01%
			Exile_Item_BurlapSack           = 2.51%
			Exile_Item_WeaponParts          = 2.51%
			Exile_Melee_SledgeHammmer       = 2.51%
			Exile_Item_Cement               = 2.51%
			Exile_Item_Sand                 = 2.51%
			Exile_Item_Grinder              = 2.51%
			Exile_Item_MetalScrews          = 2.51%
			Exile_Melee_SledgeHammer        = 2.51%
			Exile_Item_ExtensionCord        = 4.02%
			Exile_Item_LightBulb            = 4.52%
			Exile_Item_WaterCanisterEmpty   = 5.03%
			Exile_Item_JunkMetal            = 5.53%
			Exile_Item_Shovel               = 6.03%
			Exile_Item_Handsaw              = 6.53%
			Exile_Item_Pliers               = 6.53%
			Exile_Item_ScrewDriver          = 6.53%
			Exile_Melee_Axe                 = 11.06%
		*/
		IndustrialItems[] = {"Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Melee_Axe", "Exile_Item_Cement", "Exile_Item_ScrewDriver", "Exile_Item_LightBulb", "Exile_Melee_Axe", "Exile_Item_Shovel", "Exile_Melee_Axe", "Exile_Item_Pliers", "Exile_Item_SleepingMat", "Exile_Item_Handsaw", "Exile_Item_Cement", "Exile_Item_ScrewDriver", "Exile_Item_Handsaw", "Exile_Item_Handsaw", "Land_CanisterPlastic_F", "Exile_Item_LightBulb", "Exile_Item_MetalScrews", "Exile_Melee_Axe", "Exile_Item_Sand", "Exile_Item_Pliers", "Exile_Item_FireExtinguisher", "Exile_Item_Rope", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Pliers", "Exile_Item_Hammer", "Exile_Item_CamoTentKit", "Exile_Item_CamoTentKit", "Exile_Item_BurlapSack", "Exile_Melee_SledgeHammmer", "Exile_Item_ScrewDriver", "Exile_Item_PortableGeneratorKit", "Exile_Melee_Axe", "Exile_Item_MetalPole", "Exile_Item_MetalScrews", "Exile_Item_WaterCanisterEmpty", "Exile_Item_WaterCanisterEmpty", "Exile_Item_ScrewDriver", "Exile_Item_FireExtinguisher", "Exile_Item_Shovel", "Exile_Item_Shovel", "Exile_Item_Pliers", "Exile_Item_CordlessScrewdriver", "Exile_Item_ScrewDriver", "Exile_Item_ExtensionCord", "Exile_Item_ScrewDriver", "Exile_Item_Sand", "Exile_Item_WaterCanisterEmpty", "Exile_Item_ScrewDriver", "Exile_Item_FireExtinguisher", "Exile_Melee_Axe", "Exile_Item_MetalScrews", "Exile_Item_Shovel", "Exile_Item_ExtensionCord", "Exile_Item_Grinder", "Exile_Item_Foolbox", "Exile_Item_MetalPole", "Exile_Item_ExtensionCord", "Exile_Melee_Axe", "Exile_Item_ExtensionCord", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Item_LightBulb", "Exile_Item_MetalBoard", "Exile_Melee_Axe", "Exile_Item_Shovel", "Exile_Item_JunkMetal", "Exile_Item_Pliers", "Exile_Item_LightBulb", "Exile_Item_JunkMetal", "Exile_Melee_SledgeHammmer", "Exile_Item_WaterCanisterEmpty", "Exile_Item_BurlapSack", "Exile_Item_JunkMetal", "Exile_Item_ExtensionCord", "Exile_Item_SleepingMat", "Exile_Item_Sand", "Exile_Item_Pliers", "Exile_Item_Knife", "Exile_Melee_Axe", "Exile_Item_WaterCanisterEmpty", "Exile_Item_PortableGeneratorKit", "Exile_Item_Shovel", "Exile_Item_Hammer", "Exile_Item_LightBulb", "Exile_Item_Rope", "Exile_Item_CordlessScrewdriver", "Exile_Item_Foolbox", "Exile_Item_Pliers", "Exile_Item_MetalWire", "Exile_Item_Handsaw", "Exile_Item_MetalWire", "Exile_Item_FloodLightKit", "Exile_Melee_Axe", "Exile_Item_BurlapSack", "Exile_Item_Handsaw", "Exile_Item_LightBulb", "Exile_Item_Handsaw", "Exile_Item_JunkMetal", "Exile_Item_JunkMetal", "Exile_Item_WeaponParts", "Exile_Item_Pliers", "Exile_Item_WeaponParts", "Exile_Melee_Axe", "Exile_Item_ScrewDriver", "Exile_Item_MetalPole", "Exile_Item_WaterCanisterEmpty", "Exile_Item_ExtensionCord", "Exile_Melee_Axe", "Exile_Item_MetalScrews", "Exile_Item_BurlapSack", "Exile_Item_JunkMetal", "Exile_Item_WeaponParts", "Exile_Item_MetalBoard", "Exile_Melee_SledgeHammer", "Exile_Item_Handsaw", "Exile_Item_CordlessScrewdriver", "Exile_Melee_Axe", "Exile_Item_MetalBoard", "Exile_Melee_SledgeHammer", "Exile_Item_Grinder", "Exile_Item_Pliers", "Exile_Item_JunkMetal", "Exile_Item_Handsaw", "Exile_Melee_SledgeHammmer", "Exile_Item_Handsaw", "Exile_Item_ExtensionCord", "Exile_Item_CamoTentKit", "Exile_Melee_SledgeHammmer", "Exile_Item_Shovel", "Exile_Item_MetalWire", "Exile_Item_Hammer", "Exile_Item_Grinder", "Exile_Item_Sand", "Exile_Melee_Axe", "Exile_Melee_SledgeHammmer", "Exile_Item_LightBulb", "Exile_Item_MetalWire", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Item_Shovel", "Exile_Item_Foolbox", "Exile_Melee_Axe", "Exile_Item_CordlessScrewdriver", "Exile_Item_MetalScrews", "Exile_Item_LightBulb", "Exile_Item_Hammer", "Exile_Item_Pliers", "Exile_Item_ScrewDriver", "Exile_Item_ScrewDriver", "Exile_Item_Shovel", "Exile_Item_Pliers", "Exile_Melee_Axe", "Exile_Item_WeaponParts", "Exile_Item_Handsaw", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Sand", "Exile_Item_BurlapSack", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_SledgeHammer", "Exile_Item_ScrewDriver", "Exile_Item_Grinder", "Exile_Item_Pliers", "Exile_Item_Rope", "Exile_Melee_Axe", "Land_CanisterPlastic_F", "Exile_Item_FloodLightKit", "Exile_Item_Shovel", "Exile_Item_Knife", "Exile_Item_WaterCanisterEmpty", "Exile_Item_JunkMetal", "Exile_Item_FireExtinguisher", "Exile_Item_Pliers", "Exile_Item_Grinder", "Exile_Item_FloodLightKit", "Exile_Item_LightBulb", "Exile_Item_CamoTentKit", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Item_SleepingMat", "Exile_Item_JunkMetal", "Exile_Item_Shovel", "Exile_Item_JunkMetal", "Exile_Melee_SledgeHammer", "Exile_Item_ExtensionCord", "Exile_Item_MetalBoard", "Exile_Item_Cement", "Exile_Item_JunkMetal", "Exile_Item_WeaponParts", "Exile_Item_SleepingMat", "Exile_Item_PortableGeneratorKit", "Exile_Melee_SledgeHammer", "Exile_Item_Cement", "Exile_Item_Rope", "Exile_Item_Cement", "Exile_Melee_Axe", "Exile_Item_Shovel", "Exile_Item_Handsaw"};

		/*
			Percental Item Spawn Chances of Vehicle:

			Exile_Item_Carwheel          = 3.70%
			Exile_Item_Wrench            = 3.70%
			Exile_Item_OilCanister       = 3.70%
			spraycan_blk                 = 7.41%
			spraycan_red                 = 7.41%
			spraycan_grn                 = 7.41%
			spraycan_wht                 = 7.41%
			spraycan_blu                 = 7.41%
			Exile_Item_FuelCanisterFull  = 14.81%
			Exile_Item_DuctTape          = 18.52%
			Exile_Item_FuelCanisterEmpty = 18.52%
		*/
		Vehicle[] = {"Exile_Item_DuctTape", "Exile_Item_FuelCanisterEmpty", "spraycan_grn", "spraycan_red", "Exile_Item_FuelCanisterFull", "spraycan_blu", "Exile_Item_Carwheel", "spraycan_blu", "Exile_Item_FuelCanisterFull", "Exile_Item_OilCanister", "spraycan_red", "spraycan_grn", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty", "Exile_Item_DuctTape", "spraycan_wht", "Exile_Item_DuctTape", "Exile_Item_FuelCanisterEmpty", "spraycan_wht", "Exile_Item_DuctTape", "Exile_Item_DuctTape", "spraycan_blk", "Exile_Item_FuelCanisterEmpty", "spraycan_blk", "Exile_Item_Wrench", "Exile_Item_FuelCanisterFull"};

		/*
			Percental Item Spawn Chances of Chemlights:

			Chemlight_blue   = 25.00%
			Chemlight_green  = 25.00%
			Chemlight_red    = 25.00%
			Chemlight_yellow = 25.00%
		*/
		Chemlights[] = {"Chemlight_blue", "Chemlight_red", "Chemlight_green", "Chemlight_yellow"};

		/*
			Percental Item Spawn Chances of RoadFlares:

			FlareGreen_F  = 25.00%
			FlareRed_F    = 25.00%
			FlareWhite_F  = 25.00%
			FlareYellow_F = 25.00%
		*/
		RoadFlares[] = {"FlareGreen_F", "FlareRed_F", "FlareYellow_F", "FlareWhite_F"};

		/*
			Percental Item Spawn Chances of SmokeGrenades:

			SmokeShell       = 14.29%
			SmokeShellRed    = 14.29%
			SmokeShellGreen  = 14.29%
			SmokeShellYellow = 14.29%
			SmokeShellPurple = 14.29%
			SmokeShellBlue   = 14.29%
			SmokeShellOrange = 14.29%
		*/
		SmokeGrenades[] = {"SmokeShellYellow", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellRed", "SmokeShellBlue", "SmokeShellPurple", "SmokeShell"};

		/*
			Percental Item Spawn Chances of Restraints:

			Exile_Item_ZipTie = 100.00%
		*/
		Restraints[] = {"Exile_Item_ZipTie"};

		/*
			Percental Item Spawn Chances of Electronics:

			Exile_Item_Laptop        = 50.00%
			Exile_Item_BaseCameraKit = 50.00%
		*/
		Electronics[] = {"Exile_Item_Laptop", "Exile_Item_BaseCameraKit"};

		/*
			Percental Item Spawn Chances of Trash:

			Exile_Item_Magazine01         = 6.25%
			Exile_Item_Magazine02         = 6.25%
			Exile_Item_Magazine03         = 6.25%
			Exile_Item_Magazine04         = 6.25%
			Exile_Item_Can_Empty          = 25.00%
			Exile_Item_PlasticBottleEmpty = 25.00%
			Exile_Item_ToiletPaper        = 25.00%
		*/
		Trash[] = {"Exile_Item_Can_Empty", "Exile_Item_ToiletPaper", "Exile_Item_PlasticBottleEmpty", "Exile_Item_Magazine02", "Exile_Item_Can_Empty", "Exile_Item_PlasticBottleEmpty", "Exile_Item_PlasticBottleEmpty", "Exile_Item_ToiletPaper", "Exile_Item_PlasticBottleEmpty", "Exile_Item_Can_Empty", "Exile_Item_ToiletPaper", "Exile_Item_Magazine04", "Exile_Item_Can_Empty", "Exile_Item_ToiletPaper", "Exile_Item_Magazine01", "Exile_Item_Magazine03"};

		/*
			Percental Item Spawn Chances of Unused:

		*/
		Unused[] = {};
	};
};