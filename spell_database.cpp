#include "../plugin_sdk/plugin_sdk.hpp"
#include "spell_database.h"

/*
Author : Klee#5555
Thank kuezese#0375 Kiri#3235 Misa#0003 for help!
*/

namespace spell_database
{
	std::map<champion_id, std::vector<spell_data>> load()
	{
		std::map<champion_id, std::vector<spell_data>> data =
		{
			{
				champion_id::Aatrox,
				{
					spell_data{"Q1", {"AatroxQ"}, spellslot::q, false, false, true, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line, 0.6f, FLT_MAX},
					spell_data{"Q2", {"AatroxQ2"}, spellslot::q, false, false, false, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_cone, 0.6f, FLT_MAX},
					spell_data{"Q3", {"AatroxQ3"}, spellslot::q, false, false, true, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_circle, 0.6f, FLT_MAX},
					spell_data{"W", {"AatroxW"}, spellslot::w, false, true, true, {}, {damage_type::physical}, skillshot_type::skillshot_line, 0.25f, 1800}
				}
			},
			{
				champion_id::Ahri,
				{
					spell_data{"Q", {"AhriQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line, 0.25f, 1550.0f},
					spell_data{"W", {"AhriW"}, spellslot::w, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, 1400.0f},
					spell_data{"E", {"AhriE"}, spellslot::e, false, true, true, {buff_type::Charm}, {damage_type::magical}, skillshot_type::skillshot_line, 0.25f, 1550.0f}
				}
			},
			{
				champion_id::Akali,
				{
					spell_data{"Q", {"AkaliQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_cone , 0.25f, FLT_MAX},
					spell_data{"E1", {"AkaliE"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.4f, 1800.0f},
					spell_data{"E2", {"AkaliEb"}, spellslot::e, true, false, true, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1500.0f},
					spell_data{"R1", {"AkaliR"}, spellslot::r, true, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, 1500.0f},
					spell_data{"R2", {"AkaliRb"}, spellslot::r, false, false, true, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, 3000.0f},
				}
			},
			{
				champion_id::Akshan,
				{
					spell_data{"Q", {"AkshanQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1500.0f},
					spell_data{"E", {"AkshanE"}, spellslot::e, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 3000.0f},
					spell_data{"R", {"AkshanR"}, spellslot::r, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 3200.0f},
				}
			},
			{
				champion_id::Alistar,
				{
					spell_data{"Q", {"Pulverive"}, spellslot::q, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
					spell_data{"W", {"Headbutt"}, spellslot::w, true, false, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, 1544.0f},
				}
			},
			{
				champion_id::Amumu,
				{
					spell_data{"Q", {"BandageToss"}, spellslot::q, false, true, true, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
					spell_data{"R", {"CurseoftheSadMummy"}, spellslot::r, false, true, true, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Anivia,
				{
					spell_data{"Q", {"FlashFrost"}, spellslot::q, false, true, true, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 950.0f},
					spell_data{"E", {"Frostbite"}, spellslot::e, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1600.0f},
					spell_data{"R", {"GlacialStorm"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.0f, FLT_MAX},
				}
			},
			{
				champion_id::Annie,
				{
					spell_data{"Q", {"AnnieQ"}, spellslot::q, true, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 3000.0f},
					spell_data{"W", {"AnnieW"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_cone , 0.25f, FLT_MAX},
					spell_data{"R", {"AnnieR"}, spellslot::r, false, true, true, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Aphelios,
				{
				spell_data{"R", {"ApheliosR"}, spellslot::r, false, true, true, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.6f, 1000.0f},
				}
			},
			{
				champion_id::Ashe,
				{
					spell_data{"W", {"Volley"}, spellslot::w, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
					spell_data{"R", {"EnchantedCrystalArrow"}, spellslot::r, false, true, true, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1800.0f},
				}
			},
			{
				champion_id::AurelionSol,
				{
					spell_data{"E", {"AurelionSolE"}, spellslot::e, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.35f, 4500.0f},
					spell_data{"R", {"AurelionSolR"}, spellslot::r, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.35f, 4500.0f},
				}
			},
			{
				champion_id::Azir,
				{
					spell_data{"Q", {"AzirQWrapper"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 3000.0f},
					spell_data{"W", {"AzirW"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"R", {"AzirR"}, spellslot::r, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_line , 0.5f, 1400.0f},
				}
			},
			{
				champion_id::Bard,
				{
					spell_data{"Q", {"BardQ"}, spellslot::q, false, true, true, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1500.0f},
					spell_data{"R", {"BardR"}, spellslot::r, false, true, true, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.5f, 2000.0f},
				}
			},
			{
				champion_id::Belveth,
				{
					spell_data{"Q", {"BelVethQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 1000.0f},
					spell_data{"W", {"BelVethW"}, spellslot::w, false, true, false, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.5f, FLT_MAX},
					spell_data{"E", {"BelVethE"}, spellslot::e, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"R", {"BelVethR"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_circle , 1.0f, FLT_MAX},
				}
			},
			{
				champion_id::Blitzcrank,
				{
					spell_data{"Q", {"RocketGrab"}, spellslot::q, false, true, true, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1800.0f},
					spell_data{"E", {"PowerFistAttack"}, spellslot::e, true, false, true, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"R", {"StaticField"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Brand,
				{
					spell_data{"Q", {"BrandQ"}, spellslot::q, false, true, false, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1600.0f},
					spell_data{"W", {"BrandW"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, 0.627f},
					spell_data{"E", {"BrandE"}, spellslot::e, true, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 3000.0f},
					spell_data{"R", {"BrandR"}, spellslot::r, true, true, true, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 3000.0f}
				}
			},
			{
				champion_id::Braum,
				{
					spell_data{"Q", {"BraumQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1700.0f},
					spell_data{"R", {"BraumR"}, spellslot::r, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_line , 0.5f, 1400.0f},
				}
			},
			{
				champion_id::Caitlyn,
				{
					spell_data{"Q", {"CaitlynQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.625f, 2200.0f},
					spell_data{"W", {"CaitlynW"}, spellslot::w, false, true, false, {buff_type::Snare}, {damage_type::physical}, skillshot_type::skillshot_circle , 1.0f, FLT_MAX},
					spell_data{"E", {"CaitlynE"}, spellslot::e, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.15f, 1600.0f},
					spell_data{"R", {"CaitlynR"}, spellslot::r, true, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.375f, 3500.0f},
				}
			},
			{
				champion_id::Camille,
				{
					spell_data{"Q", {"CamilleQ2"}, spellslot::q, true, false, true, {}, {damage_type::true_dmg}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"W", {"CamilleW"}, spellslot::w, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_cone , 1.1f, FLT_MAX},
					spell_data{"E", {"CamilleEDash2"}, spellslot::e, false, true, true, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 1350.0f},
					spell_data{"R", {"CamilleR"}, spellslot::r, true, false, true, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.5f, FLT_MAX},
				}
			},
			{
				champion_id::Cassiopeia,
				{
					spell_data{"Q", {"CassiopeiaQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.625f, FLT_MAX},
					spell_data{"W", {"CassiopeiaW"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, 3000.0f},
					spell_data{"E", {"CassiopeiaE"}, spellslot::e, true, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.125f, 2500.0f},
					spell_data{"R", {"CassiopeiaR"}, spellslot::r, false, true, true, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line, 0.5f, FLT_MAX},
				}
			},
			{
				champion_id::Chogath,
				{
					spell_data{"Q", {"Rupture"}, spellslot::q, false, true, false, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_circle , 1.127f, FLT_MAX},
					spell_data{"W", {"FeralScream"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_cone , 0.5f, FLT_MAX},
					spell_data{"E", {"ChogathEAttack"}, spellslot::e, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.1f, FLT_MAX},
					spell_data{"R", {"Feast"}, spellslot::r, true, false, true, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Corki,
				{
					spell_data{"Q", {"PhosphorusBomb"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, 1000.0f},
					spell_data{"W", {"CarpetBombMega"}, spellslot::w, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, 1500.0f},
					spell_data{"R", {"MissileBarrage"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Darius,
				{
					spell_data{"Q", {"DariusCleave"}, spellslot::q, false, true, true, {}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.75f, FLT_MAX},
					spell_data{"W", {"DariusNoxianTacticsONHAttack"}, spellslot::w, true, false, true, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.1f, FLT_MAX},
					spell_data{"E", {"DariusAxeGrabCone"}, spellslot::e, false, true, true, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_cone , 0.25f, FLT_MAX},
					spell_data{"R", {"DariusExecute"}, spellslot::r, true, false, true, {}, {damage_type::true_dmg}, skillshot_type::skillshot_line , 0.3667f, FLT_MAX},
				}
			},
			{
				champion_id::Diana,
				{
					spell_data{"Q", {"DianaQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
					spell_data{"E", {"DianaTeleport"}, spellslot::e, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, 3000.0f},
					spell_data{"R", {"DianaR"}, spellslot::r, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::DrMundo,
				{
					spell_data{"Q", {"DrMundoQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
					spell_data{"E", {"DrMundoEAttack"}, spellslot::e, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.1f, FLT_MAX},
				}
			},
			{
				champion_id::Draven,
				{
					spell_data{"E", {"DravenDoubleShot"}, spellslot::e, false, true, true, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1100.0f},
					spell_data{"R", {"DravenRCast"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.5f, 2000.0f},
					spell_data{"R return", {"DravenRDoublecast"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.5f, 2000.0f},
				}
			},
			{
				champion_id::Ekko,
				{
					spell_data{"Q", {"EkkoQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
					spell_data{"W", {"EkkoW"}, spellslot::w, false, true, false, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_circle , 2.25f, FLT_MAX},
					spell_data{"E", {"EkkoEAttack"}, spellslot::e, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.1f, FLT_MAX},
					spell_data{"R", {"EkkoR"}, spellslot::r, false, true, true, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.5f, 3000.0f},
				}
			},
			{
				champion_id::Elise,
				{
					spell_data{"Q", {"EliseHumanQ"}, spellslot::q, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 3000.0f},
					spell_data{"SpiderQ", {"EliseSpiderQCast"}, spellslot::q, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.125f, FLT_MAX},
					spell_data{"W", {"EliseHumanW"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 400.0f},
					spell_data{"E", {"EliseHumanE"}, spellslot::e, false, true, false, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1600.0f},

				}
			},
			{
				champion_id::Evelynn,
				{
					spell_data{"Q", {"EvelynnQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.3f, 2400.0f},
					spell_data{"E", {"EvelynnE2"}, spellslot::e, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"R", {"EvelynnR"}, spellslot::r, false, true, true, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.35f, FLT_MAX},
				}
			},
			{
				champion_id::Ezreal,
				{
					spell_data{"Q", {"EzrealQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
					spell_data{"W", {"EzrealW"}, spellslot::w, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1700.0f},
					spell_data{"R", {"EzrealR"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 1.0f, 2000.0f},
				}
			},
			{
				champion_id::FiddleSticks,
				{
					spell_data{"Q", {"FiddleSticksQ"}, spellslot::q, true, false, true, {buff_type::Fear}, {damage_type::magical}, skillshot_type::skillshot_line , 0.35f, FLT_MAX},
					spell_data{"E", {"FiddleSticksE"}, spellslot::e, false, true, false, {buff_type::Fear}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.4f, FLT_MAX},
					spell_data{"R", {"FiddleSticksR"}, spellslot::r, false, true, true, {buff_type::Fear}, {damage_type::magical}, skillshot_type::skillshot_circle , 1.5f, FLT_MAX},
				}
			},
			{
				champion_id::Fiora,
				{
					spell_data{"Q", {"FioraQ"}, spellslot::q, true, false, false, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
					spell_data{"W", {"FioraW"}, spellslot::w, false, true, true, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.75f, 3200.0f},

				}
			},
			{
				champion_id::Fizz,
				{
					spell_data{"Q", {"FizzQ"}, spellslot::q, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, 3000.0f},
					spell_data{"E", {"FizzEtwo"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.1f, FLT_MAX},
					spell_data{"R", {"FizzR"}, spellslot::r, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Galio,
				{
					spell_data{"Q", {"GalioQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1400.0f},
					spell_data{"E", {"GalioE"}, spellslot::e, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_line , 0.4f, 2300.0f},
					spell_data{"R", {"GalioR"}, spellslot::r, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_circle , 2.75f, FLT_MAX},
				}
			},
			{
				champion_id::Gangplank,
				{
					spell_data{"Q", {"GangplankQProceed"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.5f, 2600.0f},
					spell_data{"R", {"GangplankR"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Garen,
				{
					spell_data{"Q", {"GarenQAttack"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.1f, FLT_MAX},
					spell_data{"R", {"GarenR"}, spellslot::r, true, false, true, {}, {damage_type::true_dmg}, skillshot_type::skillshot_line , 0.435f, FLT_MAX},
				}
			},
			{
				champion_id::Gnar,
				{
					spell_data{"Q", {"GnarQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 2500.0f},
					spell_data{"E", {"GnarE"}, spellslot::e, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.0f, 1000.0f},
					spell_data{"Q", {"GnarBigQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.5f, 2100.0f},
					spell_data{"W", {"GnarBigW"}, spellslot::w, false, true, true, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.6f, FLT_MAX},
					spell_data{"E", {"GnarBigE"}, spellslot::e, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 1000.0f},
					spell_data{"R", {"GnarR"}, spellslot::r, false, true, true, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Gragas,
				{
					spell_data{"Q", {"GragasQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, 1000.0f},
					spell_data{"W", {"GragasWAttack"}, spellslot::w, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"E", {"GragasE"}, spellslot::e, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, 900.0f},
					spell_data{"R", {"GragasR"}, spellslot::r, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_line , 0.8f, FLT_MAX},
				}
			},
			{
				champion_id::Graves,
				{
					spell_data{"W", {"GravesSmokeGrenade"}, spellslot::w, false, true, true, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, 1500.0f},
					spell_data{"R", {"GravesChargeShot"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 2100.0f},
				}
			},
			{
				champion_id::Gwen,
				{
					spell_data{"Q", {"GwenQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"R", {"GwenR"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1800.0f},
					spell_data{"R2", {"GwenRRecast"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1800.0f},
					}
			},
			{
				champion_id::Hecarim,
				{
					spell_data{"E", {"HecarimRampAttack"}, spellslot::e, true, false, true, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"R", {"HecarimULT"}, spellslot::r, false, true, true, {buff_type::Fear}, {damage_type::magical}, skillshot_type::skillshot_circle, 0.0f, 1100.0f}
				}
			},
			{
				champion_id::Heimerdinger,
				{
					spell_data{"E", {"HeimerdingerE"}, spellslot::e, false, true, true, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1200.0f},
					spell_data{"E", {"HeimerdingerEUlt"}, spellslot::e, false, true, true, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1200.0f},
				}
			},
			{
				champion_id::Illaoi,
				{
					spell_data{"Q", {"IllaoiQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.75f, FLT_MAX},
					spell_data{"W", {"IllaoiWAttack"}, spellslot::w, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"E", {"IllaoiE"}, spellslot::e, false, true, true, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1900.0f},
					spell_data{"R", {"IllaoiR"}, spellslot::r, false, true, true, {}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.5f, FLT_MAX},
				}
			},
			{
				champion_id::Irelia,
				{
					spell_data{"Q", {"IreliaQ"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 1400.0f},
					spell_data{"W", {"IreliaW2"}, spellslot::w, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"E", {"IreliaE2"}, spellslot::e, false, true, true, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 2000.0f},
					spell_data{"R", {"IreliaR"}, spellslot::r, false, true, true, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.4f, 2000.0f},
				}
			},
			{
				champion_id::Ivern,
				{
					spell_data{"Q", {"IvernQ"}, spellslot::q, false, true, true, {buff_type::Snare}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1300.0f},
				}
			},
			{
				champion_id::Janna,
				{
					spell_data{"Q", {"HowlingGale"}, spellslot::q, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, 1408.0f},
					spell_data{"W", {"SowTheWind"}, spellslot::w, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.245f, 1000.0f},
					spell_data{"R", {"ReapTheWhirlWind"}, spellslot::r, false, true, true, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.0f, FLT_MAX},
				}
			},
			{
				champion_id::JarvanIV,
				{
					spell_data{"Q", {"JarvanIVDragonStrike"}, spellslot::q, false, true, true, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.4f, FLT_MAX},
					spell_data{"R", {"JarvanIVCataclysm"}, spellslot::r, true, false, true, {}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.0f, FLT_MAX},
				}
			},
			{
				champion_id::Jax,
				{
					spell_data{"Q", {"JaxLeapStrike"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 2000.0f},
					spell_data{"E", {"JaxCounterStrike"}, spellslot::e, false, true, true, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.0f, FLT_MAX},
				}
			},
			{
				champion_id::Jayce,
				{
					spell_data{"Melee Q", {"JayceToTheSkies"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 2000.0f},
					spell_data{"Melee E", {"JayceThunderingBlow"}, spellslot::e, true, false, true, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"Ranged Q", {"JayceShockBlast"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.2143f, 2000.0f},
				}
			},
			{
				champion_id::Jhin,
				{
					spell_data{"Q", {"JhinQ"}, spellslot::q, true, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1600.0f},
					spell_data{"W", {"JhinW"}, spellslot::w, false, true, true, {buff_type::Snare}, {damage_type::physical}, skillshot_type::skillshot_line , 0.75f, FLT_MAX},
					spell_data{"R", {"JhinRShot"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 1.0f, 5000.0f},
				}
			},
			{
				champion_id::Jinx,
				{
					spell_data{"W", {"JinxW"}, spellslot::w, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.4f, 3300.0f},
					spell_data{"E", {"JinxE"}, spellslot::e, false, true, true, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.8f, FLT_MAX},
					spell_data{"R", {"JinxR"}, spellslot::r, false, true, true, {buff_type::Snare}, {damage_type::physical}, skillshot_type::skillshot_line , 0.6f, 2000.0f},
				}
			},
			{
				champion_id::Kaisa,
				{
					spell_data{"Q", {"KaisaQ"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"W", {"KaisaW"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.4f, 1750.0f},
					spell_data{"R", {"KaisaR"}, spellslot::r, false, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 3000.0f},
				}
			},
			{
				champion_id::Kalista,
				{
					spell_data{"Q", {"KalistaMysticShot"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 2400.0f},
					spell_data{"E", {"KalistaExpungeWrapper"}, spellslot::e, true, false, true, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"R", {"KalistaRx"}, spellslot::r, false, true, true, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.0f, 3000.0f},
				}
			},
			{
				champion_id::Karma,
				{
					spell_data{"Q", {"KarmaQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1700.0f},
					spell_data{"W", {"KarmaSpiritBind"}, spellslot::w, true, false, true, {buff_type::Snare}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Karthus,
				{
					spell_data{"R", {"KarthusFallenOne"}, spellslot::r, true, false, true, {}, {damage_type::magical}, skillshot_type::skillshot_line , 3.25f, FLT_MAX},
				}
			},
			{
				champion_id::Kassadin,
				{
					spell_data{"Q", {"NullLance"}, spellslot::q, true, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1400.0f},
					spell_data{"R", {"RiftWalk"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Katarina,
				{
					spell_data{"Q", {"KatarinaQ"}, spellslot::q, true, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
					spell_data{"E", {"KatarinaE"}, spellslot::e, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"R", {"KatarinaR"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.0f, 2400.0f},
				}
			},
			{
				champion_id::Kayle,
				{
					spell_data{"Q", {"KayleQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1600.0f},
					spell_data{"E", {"KayleEAttack"}, spellslot::e, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 2000.0f},
				}
			},
			{
				champion_id::Kayn,
				{
					spell_data{"Q", {"KaynQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 500.0f},
					spell_data{"W", {"KaynW"}, spellslot::w, false, true, true, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.55f, FLT_MAX},
					spell_data{"R", {"KaynR"}, spellslot::r, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 2.5f, FLT_MAX},
				}
			},
			{
				champion_id::Kennen,
				{
					spell_data{"Q", {"KennenShurikenHurlMissilel"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.175f, 1700.0f},
					spell_data{"W", {"KennenBringTheLight"}, spellslot::w, true, false, true, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"R", {"KennenShurikenStorm"}, spellslot::r, false, true, true, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Khazix,
				{
					spell_data{"Q", {"KhazixQ"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"W", {"KhazixW"}, spellslot::w, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1700.0f},
					spell_data{"E", {"KhazixE"}, spellslot::e, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 2000.0f},
					spell_data{"OP Q", {"KhazixQLong"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"OP W", {"KhazixWLong"}, spellslot::w, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1700.0f},
					spell_data{"OP E", {"KhazixELong"}, spellslot::e, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 2000.0f},
				}
			},
			{
				champion_id::Kindred,
				{
					spell_data{"Q", {"KindredQ"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"E", {"KindredE"}, spellslot::e, true, false, true, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 3000.0f},
				   }
			},
			{
				champion_id::Kled,
				{
					spell_data{"Q", {"KledQ"}, spellslot::q, false, true, true, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1000.0f},
					spell_data{"W", {"KledWAttack4"}, spellslot::w, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"E", {"KledEDash"}, spellslot::e, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 3000.0f},
					spell_data{"R", {"KledR"}, spellslot::r, false, true, true, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 950.0f},
				}
			},
			{
				champion_id::KogMaw,
				{
					spell_data{"Q", {"KogMawQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1650.0f},
					spell_data{"E", {"KogMawVoidOoze"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1900},
					spell_data{"R", {"KogMawLivingArtillery"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.85f, FLT_MAX},
				}
			},
			{
				champion_id::Leblanc,
				{
					spell_data{"Q", {"LeblancQ"}, spellslot::q, true, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
					spell_data{"W", {"LeblancW"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.0f, 1450.0f},
					spell_data{"E", {"LeblancE"}, spellslot::e, false, true, true, {buff_type::Snare}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1750.0f},
					spell_data{"RQ", {"LeblancRQ"}, spellslot::q, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
					spell_data{"RW", {"LeblancRW"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.0f, 1450.0f},
					spell_data{"RE", {"LeblancRE"}, spellslot::e, false, true, true, {buff_type::Snare}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1750.0f},
				}
			},
			{
				champion_id::LeeSin,
				{
					spell_data{"Q", {"BlindMonkQOne"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1800.0f},
					spell_data{"Q2", {"BlindMonkQTwo"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 1350.0f},
					spell_data{"W", {"BlindMonkWOne"}, spellslot::w, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 1350.0f},
					spell_data{"E", {"BlindMonkEOne"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
					spell_data{"E", {"BlindMonkETwo"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.0f, 1600.0f},
					spell_data{"R", {"BlindMonkRKick"}, spellslot::r, true, false, true, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Leona,
				{
					spell_data{"Q", {"LeonaShieldOfDaybreakAttack"}, spellslot::q, true, false, true, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"E", {"LeonaZenithBlade"}, spellslot::e, false, true, true, {buff_type::Snare}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
					spell_data{"R", {"LeonaSolarFlare"}, spellslot::r, false, true, true, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.875f, FLT_MAX},
				}
			},
			{
				champion_id::Lillia,
				{
					spell_data{"Q", {"LilliaQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
					spell_data{"W", {"LilliaW"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.759f, FLT_MAX},
					spell_data{"E", {"LilliaE"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.4f, 1400.0f},
					spell_data{"R", {"LilliaR"}, spellslot::r, true, false, true, {buff_type::Asleep}, {damage_type::magical}, skillshot_type::skillshot_line , 2.0f, FLT_MAX},
				}
			},
			{
				champion_id::Lissandra,
				{
					spell_data{"Q", {"LissandraQMissile"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2200.0f},
					spell_data{"W", {"LissandraW"}, spellslot::w, false, true, true, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.0f, FLT_MAX},
					spell_data{"E", {"LissandraEMissile"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 640.0f},
					spell_data{"R", {"LissandraREnemy"}, spellslot::r, true, false, true, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.375f, FLT_MAX},
				}
			},
			{
				champion_id::Lucian,
				{
					spell_data{"Q", {"LucianQ"}, spellslot::q, true, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"W", {"LucianW"}, spellslot::w, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1600.0f},
					spell_data{"E", {"LucianE"}, spellslot::e, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 1350.0f},
					spell_data{"R", {"LucianR"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 3000.0f},
				}
			},
			{
				champion_id::Lulu,
				{
					spell_data{"Q", {"LuluQMissile"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1450.0f},
					spell_data{"W", {"LuluWTwo"}, spellslot::w, true, false, true, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.2419f, FLT_MAX},
					spell_data{"E", {"LuluE"}, spellslot::e, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"R", {"LuluR"}, spellslot::r, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.0f, FLT_MAX},
				}
			},
			{
				champion_id::Lux,
				{
					spell_data{"Q", {"LuxLightBinding"}, spellslot::q, false, true, true, {buff_type::Snare}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1200.0f},
					spell_data{"E", {"LexLightStrikeKugel"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, 1200.0f},
					spell_data{"R", {"LuxR"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 1.0f, FLT_MAX},
				}
			},
			{
				champion_id::Malphite,
				{
					spell_data{"Q", {"SeismicShard"}, spellslot::q, true, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1200.0f},
					spell_data{"E", {"Landslide"}, spellslot::e, false, true, false , {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.2419f, FLT_MAX},
					spell_data{"R", {"UFSlash"}, spellslot::r, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.0f, 1500.0f},
				}
			},
			{
				champion_id::Malzahar,
				{
					spell_data{"Q", {"MalzaharQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.65f, FLT_MAX},
					spell_data{"E", {"MalzaharE"}, spellslot::e, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"R", {"MalzaharR"}, spellslot::r, true, false, true, {buff_type::Suppression}, {damage_type::magical}, skillshot_type::skillshot_line , 0.005f, FLT_MAX},
				}
			},
			{
				champion_id::Maokai,
				{
					spell_data{"Q", {"MaokaiQ"}, spellslot::q, false, true, true, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.3889f, FLT_MAX},
					spell_data{"W", {"MaokaiW"}, spellslot::w, true, false, true, {buff_type::Snare}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 1300.0f},
					spell_data{"R", {"MaokaiR"}, spellslot::r, false, true, true, {buff_type::Snare}, {damage_type::physical}, skillshot_type::skillshot_line , 0.5f, 700.0f},
				}
			},
			{
				champion_id::MasterYi,
				{
					spell_data{"Q", {"AlphaStrike"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
				}
			},
			{
				champion_id::MissFortune,
				{
					spell_data{"Q", {"MissFortuneRicochetShot"}, spellslot::q, true, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.1f, 1400.0f},
					spell_data{"E", {"MissFortuneScattershot"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
					spell_data{"R", {"MissFortuneBulletTime"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_cone , 0.0f, FLT_MAX},
				}
			},
			{
				champion_id::Mordekaiser,
				{
					spell_data{"Q", {"MordekaiserQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.5f, FLT_MAX},
					spell_data{"E", {"MordekaiserE"}, spellslot::e, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 3000.0f},
					spell_data{"R", {"MordekaiserR"}, spellslot::r, true, false, true, {buff_type::Suppression}, {damage_type::magical}, skillshot_type::skillshot_line , 0.5f, FLT_MAX},
				}
			},
			{
				champion_id::Morgana,
				{
					spell_data{"Q", {"MorganaQ"}, spellslot::q, false, true, true, {buff_type::Snare}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1200.0f},
					spell_data{"R", {"MorganaR"}, spellslot::r, true, false, true, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.35f, FLT_MAX},
				}
			},
			{
				champion_id::Nami,
				{
					spell_data{"Q", {"NamiQ"}, spellslot::q, false, true, true, {buff_type::Snare}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.976f, FLT_MAX},
					spell_data{"R", {"NamiR"}, spellslot::r, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_line , 0.5f, 850},
				}
			},
			{
				champion_id::Nasus,
				{
					spell_data{"Q", {"NasusQAttack"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"W", {"NasusW"}, spellslot::w, true, false, true, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Nautilus,
				{
					spell_data{"Q", {"NautilusAnchorDrag"}, spellslot::q, false, true, false, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
					spell_data{"R", {"NautilusGrandLine"}, spellslot::r, true, false, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Neeko,
				{
					spell_data{"Q", {"NeekoQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, 2000.0f},
					spell_data{"E", {"NeekoE"}, spellslot::e, false, true, true, {buff_type::Snare}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1300.0f},
					spell_data{"R", {"NeekoR"}, spellslot::r, false, true, false, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_circle , 1.85f, FLT_MAX},
				}
			},
			{
				champion_id::Nidalee,
				{
					spell_data{"Q", {"JavelinToss"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1300.0f},
					spell_data{"W", {"Bushwhack"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},

					spell_data{"Q", {"NidaleeTakedownAttack"}, spellslot::q, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.1f, FLT_MAX},
					spell_data{"W", {"Pounce"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.0f, 2000.0f},
					spell_data{"E", {"Swipe"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_cone , 0.25f, FLT_MAX},

				}
			},
			{
				champion_id::Nilah, 
				{
					spell_data{"Q", {"NilahQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"E", {"NilahE"}, spellslot::e, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"R", {"NilahR"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Nocturne,
				{
					spell_data{"Q", {"Nocturne"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1600.0f},
					spell_data{"E", {"NocturneUnspeakableHorror"}, spellslot::e, true, false, true, {buff_type::Fear}, {damage_type::magical}, skillshot_type::skillshot_line , 2.0f, FLT_MAX},
					spell_data{"R", {"NocturneParanoia2"}, spellslot::r, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 1800.0f},
				}
			},
			{
				champion_id::Nunu,
				{
					spell_data{"Q", {"NunuQ"}, spellslot::q, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.3f, FLT_MAX},
					spell_data{"W", {"NunuW"}, spellslot::w, false, true, false, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"E", {"NunuE"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"R", {"NunuR"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 3.0f, FLT_MAX},
				}
			},
			{
				champion_id::Olaf,
				{
					spell_data{"Q", {"OlafAxeThrowCast"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1600.0f},
					spell_data{"E", {"OlafRecklessStrike"}, spellslot::e, true, false, false, {}, {damage_type::true_dmg}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Orianna,
				{
					spell_data{"Q", {"OrianalzunaCommnd"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, 1400.0f},
					spell_data{"W", {"OrianaDissonanceCommand"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"R", {"OrianaDetonateCommand"}, spellslot::r, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.5f, FLT_MAX},
				}
			},
			{
				champion_id::Ornn,
				{
					spell_data{"Q", {"OrnnQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1800.0f},
					spell_data{"E", {"OrnnE"}, spellslot::e, false, true, true, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.35f, 1600.0f},
					spell_data{"R2", {"OrnnRCharge"}, spellslot::r, false, true, true, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_line , 0.5f, 1200.0f},
				}
			},
			{
				champion_id::Pantheon,
				{
					spell_data{"Q", {"PantheonQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"W", {"PantheonW"}, spellslot::w, true, false, false, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 2500.0f},
					spell_data{"R", {"PantheonR"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.1f, FLT_MAX},
				}
			},
			{
				champion_id::Poppy,
				{
					spell_data{"Q", {"PoppyQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"E", {"PoppyE"}, spellslot::e, true, false, true, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 2000.0f},
					spell_data{"R", {"PoppyR"}, spellslot::r, false, true, false, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.35f, 2500.0f},
				}
			},
			{
				champion_id::Pyke,
				{
					spell_data{"Q", {"PykeQ"}, spellslot::q, false, true, false, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
					spell_data{"E", {"PykeE"}, spellslot::e, false, true, true, {}, {damage_type::physical}, skillshot_type::skillshot_line , 1.0f, 3000.0f},
					spell_data{"R", {"PykeR"}, spellslot::r, false, true, true, {}, {damage_type::true_dmg}, skillshot_type::skillshot_line , 0.5f, FLT_MAX},
				}
			},
			{
				champion_id::Qiyana,
				{
					spell_data{"Q_Water", {"QiyanaQ_Water"}, spellslot::q, false, true, true, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"Q_Rock", {"QiyanaQ_Rock"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"Q_Grass", {"QiyanaQ_Grass"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"E", {"QiyanaE"}, spellslot::e, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 1000.0f},
					spell_data{"R", {"QiyanaR"}, spellslot::r, false, true, false, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
				}
			},
			{
				champion_id::Quinn,
				{
					spell_data{"Q", {"QuinnQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1550.0f},
					spell_data{"E", {"QuinnE"}, spellslot::e, true, false, false, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 2500.0f},
				}
			},
			{
				champion_id::Rakan,
				{
					spell_data{"Q", {"RakanQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
					spell_data{"W", {"RakanW"}, spellslot::w, false, true, false, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.35f, 1800.0f},
					spell_data{"R", {"RakanR"}, spellslot::r, false, true, false, {buff_type::Charm}, {damage_type::magical}, skillshot_type::skillshot_line , 0.5f, FLT_MAX},
				}
			},
			{
				champion_id::Rammus,
				{
					spell_data{"Q", {"PowerBall"}, spellslot::q, false, true, false, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"E", {"PuncturingTaunt"}, spellslot::e, true, false, false, {buff_type::Taunt}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::RekSai,
				{
					spell_data{"Q", {"RekSaiQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"E", {"RekSaiE"}, spellslot::e, true, false, false, {}, {damage_type::true_dmg}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"R", {"RekSaiRWrapper"}, spellslot::r, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1400.0f},
					spell_data{"Q", {"RekSaiQBurrowed"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"W", {"RekSaiWUnburrowLockout"}, spellslot::w, false, true, false, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Rell,
				{
					spell_data{"Q", {"RellQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.35f, FLT_MAX},
					spell_data{"W", {"RellW_Dismount"}, spellslot::w, false, true, false, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.625f, 1000.0f},
					spell_data{"R", {"RellR"}, spellslot::r, false, true, false, {buff_type::Charm}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Renata,
				{
					spell_data{"Q", {""}, spellslot::q, false, true, false, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1450.0f},
					spell_data{"E", {""}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1500.0f},
					spell_data{"R", {""}, spellslot::r, false, true, false, {buff_type::Taunt}, {damage_type::physical}, skillshot_type::skillshot_line , 0.75f, 800.0f},
				}
			},
			{
				champion_id::Renekton,
				{
					spell_data{"Q", {"RenektonCleave"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.0f, FLT_MAX},
					spell_data{"W", {"RenektonPreExecute"}, spellslot::w, true, false, false, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.1f, FLT_MAX},
					spell_data{"E", {"RenektonSliceAndDice"}, spellslot::e, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 1000.0f},
				}
			},
			{
				champion_id::Rengar,
				{
					spell_data{"Q", {"RengarQ"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.1f, FLT_MAX},
					spell_data{"W", {"RengarW"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"E", {"RengarE"}, spellslot::e, false, true, false, {buff_type::Snare}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 1500.0f},
				}
			},
			{
				champion_id::Riven,
				{
					spell_data{"Q1", {"RivenTriCleave"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 500.0f},
					spell_data{"Q2", {"RivenTriCleave"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 500.0f},
					spell_data{"Q3", {"RivenTriCleave"}, spellslot::q, false, true, false, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 500.0f},
					spell_data{"W", {"RivenFeint"}, spellslot::w, false, true, false, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"R", {"RivenlzunaBlade"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1600.0f},
				}
			},
			{
				champion_id::Rumble,
				{
					spell_data{"E", {"RumbleGrenade"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
					spell_data{"R", {"RumbleCarpetBomb"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.5833f, 1600.0f},
				}
			},
			{
				champion_id::Ryze,
				{
					spell_data{"Q", {"RyzeQWrapper"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1700.0f},
					spell_data{"W", {"RyzeW"}, spellslot::w, true, false, false, {buff_type::Snare}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"E", {"RyzeE"}, spellslot::e, true, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 3000.0f},
				}
			},
			{
				champion_id::Samira,
				{
					spell_data{"Q", {"SamiraQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 2600.0f},
					spell_data{"W", {"SamiraW"}, spellslot::w, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.1f, FLT_MAX},
					spell_data{"E", {"SamiraE"}, spellslot::e, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 1600.0f},
					spell_data{"R", {"SamiraR"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
				}
			},
			{
				champion_id::Sejuani,
				{
					spell_data{"Q", {"SejuaniQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, 1000.0f},
					spell_data{"W", {"SejuaniW"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 1.0f, FLT_MAX},
					spell_data{"E", {"SejuaniE"}, spellslot::e, true, false, false, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"R", {"SejuaniR"}, spellslot::r, false, true, false, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1600.0f},
				}
			},
			{
				champion_id::Senna,
				{
					spell_data{"Q", {"SennaQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"W", {"SennaW"}, spellslot::w, false, true, true, {buff_type::Snare}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1200.0f},
					spell_data{"R", {"SennaR"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 1.0f, 20000.0f},
				}
			},
			{
				champion_id::Seraphine,
				{
					spell_data{"Q", {"SeraphineQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, 1200.0f},
					spell_data{"E", {"SeraphineE"}, spellslot::e, false, true, false, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1200.0f},
					spell_data{"R", {"SeraphineR"}, spellslot::r, false, true, false, {buff_type::Charm}, {damage_type::magical}, skillshot_type::skillshot_line , 0.5f, 1600.0f},
				}
			},
			{
				champion_id::Sett,
				{
					spell_data{"Q", {"SettQ"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.1f, FLT_MAX},
					spell_data{"W", {"SettW"}, spellslot::w, false, true, false, {}, {damage_type::true_dmg}, skillshot_type::skillshot_line , 0.75f, FLT_MAX},
					spell_data{"E", {"SettE"}, spellslot::e, false, true, false, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"R", {"SettR"}, spellslot::r, true, false, false, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
				}
			},
			{
				champion_id::Shaco,
				{
					spell_data{"E", {"TwoShivPoison"}, spellslot::e, true, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
					spell_data{"R", {"HallucinaceFull"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.0f, FLT_MAX},
				}
			},
			{
				champion_id::Shen,
				{
					spell_data{"Q", {"ShenQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 3500.0f},
					spell_data{"E", {"ShenE"}, spellslot::e, false, true, false, {buff_type::Taunt}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 2000.0f},
				}
			},
			{
				champion_id::Shyvana,
				{
					spell_data{"Q", {"ShyvanaDoubleAttack"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.1f, FLT_MAX},
					spell_data{"E", {"ShyvanaFireball"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1600.0f},
					spell_data{"R", {"ShyvanaTransformCast"}, spellslot::r, false, true, false, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1000.0f},

					spell_data{"Dragon Q", {"ShyvanaDoubleAttackDragon"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"Dragon E", {"ShyvanaFireballDragon2"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.3333f, 1575.0f},
				}
			},
			{
				champion_id::Singed,
				{
					spell_data{"W", {"MegaAdhesive"}, spellslot::w, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
					spell_data{"E", {"Fling"}, spellslot::e, true, false , false, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Sion,
				{
					spell_data{"Q", {"SionQ"}, spellslot::q, false, true, false, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 2.0f, FLT_MAX},
					spell_data{"E", {"SionE"}, spellslot::e, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1800.0f},
					spell_data{"R", {"SionR"}, spellslot::r, false, true, false, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
				}
			},
			{
				champion_id::Sivir,
				{
					spell_data{"Q", {"SivirQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.1f, 1450.0f},
				}
			},
			{
				champion_id::Skarner,
				{
					spell_data{"E", {"SkarnerFracture"}, spellslot::e, false, true, false, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1500.0f},
					spell_data{"R", {"SkarnerImpale"}, spellslot::r, true, false, false, {buff_type::Suppression}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Sona,
				{
					spell_data{"Q", {"SonaQ"}, spellslot::q, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, 1300.0f},
					spell_data{"R", {"SonaR"}, spellslot::r, false, true, false, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2400.0f},
				}
			},
			{
				champion_id::Soraka,
				{
					spell_data{"Q", {"SorakaQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, 800.0f},
					spell_data{"E", {"SorakaE"}, spellslot::e, false, true, false, {buff_type::Snare}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Swain,
				{
					spell_data{"Q", {"SwainQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"W", {"SwainW"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 1.5f, FLT_MAX},
					spell_data{"E", {"SwainE"}, spellslot::e, false, true, false, {buff_type::Snare}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 935.0f},
				}
			},
			{
				champion_id::Sylas,
				{
					spell_data{"Q", {"SylasQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.4f, FLT_MAX},
					spell_data{"W", {"SylasW"}, spellslot::w, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"E", {"SylasE"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1600.0f},
					spell_data{"R", {"SylasR"}, spellslot::r, true, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 2200.0f},
				}
			},
			{
				champion_id::Syndra,
				{
					spell_data{"Q", {"SyndraQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.6f, FLT_MAX},
					spell_data{"W", {"SyndraW"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.0f, 1000.0f},
					spell_data{"E", {"SyndraE"}, spellslot::e, false, true, false, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2500.0f},
					spell_data{"R", {"SyndraR"}, spellslot::r, true, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.264f, 1000.0f},
				}
			},
			{
				champion_id::TahmKench,
				{
					spell_data{"Q", {"TahmKenchQ"}, spellslot::q, false, true, false, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2800.0f},
					spell_data{"W", {"TahmKenchW"}, spellslot::w, false, true, false, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_circle , 1.5f, FLT_MAX},
					spell_data{"R", {"TahmKenchR"}, spellslot::r, true, false, true, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Taliyah,
				{
					spell_data{"Q", {"TaliyahQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
					spell_data{"W", {"TaliyahWVC"}, spellslot::w, false, true, false, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.759f, FLT_MAX},
					spell_data{"E", {"TaliyahE"}, spellslot::e, false, true, false, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, 1700.0f},
				}
			},
			{
				champion_id::Talon,
				{
					spell_data{"Q", {"TalonQ"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1400.0f},
					spell_data{"W", {"TalonW"}, spellslot::w, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 2357.0f},
					spell_data{"R", {"TalonR"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 7000.0f},
				}
			},
			{
				champion_id::Taric,
				{
					spell_data{"E", {"TaricE"}, spellslot::e, false, true, false, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 1.0f, FLT_MAX},
				}
			},
			{
				champion_id::Teemo,
				{
					spell_data{"Q", {"TeemoQ"}, spellslot::q, true, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Thresh,
				{
					spell_data{"Q", {"ThreshQ"}, spellslot::q, false, true, false, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1900.0f},
					spell_data{"E", {"ThreshE"}, spellslot::e, false, true, false, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2000.0f},
					spell_data{"R", {"ThreshR"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.45f, FLT_MAX},
				}
			},
			{
				champion_id::Tristana,
				{
					spell_data{"E", {"TristanaE"}, spellslot::e, true, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 2400.f},
					spell_data{"R", {"TristanaR"}, spellslot::r, true, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 2000.f},
				}
			},
			{
				champion_id::Trundle,
				{
					spell_data{"Q", {"TrundleQ"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"R", {"TrundlePain"}, spellslot::r, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Tryndamere,
				{
					spell_data{"W", {"TryndamereW"}, spellslot::w, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.3f, FLT_MAX},
					spell_data{"E", {"TryndamereE"}, spellslot::e, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 2000.0f},
				}
			},
			{
				champion_id::TwistedFate,
				{
					spell_data{"Q", {"WildCards"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1000.0f},
					spell_data{"Gold card", {"GoldCardPreAttack"}, spellslot::w, true, false, false, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, 1500.0f},
				}
			},
			{
				champion_id::Twitch,
				{
					spell_data{"W", {"TwitchVenomCask"}, spellslot::w, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1400.0f},
					spell_data{"E", {"TwitchVenomCaskMissile"}, spellslot::e, true, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 3000.0f},
					spell_data{"R", {"TwitchSprayAndPrayAttack"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 4000.0f},
				}
			},
			{
				champion_id::Udyr,
				{
					spell_data{"E", {"UdyrEAttack"}, spellslot::e, true, false, false, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Urgot,
				{
					spell_data{"Q", {"UrgotQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.55f, FLT_MAX},
					spell_data{"E", {"UrgotE"}, spellslot::e, false, true, false, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.45f, 1200.0f},
					spell_data{"R", {"UrgotR"}, spellslot::r, false, true, false, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.5f, 3200.0f},
				}
			},
			{
				champion_id::Varus,
				{
					spell_data{"Q", {"VarusQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 1900.0f},
					spell_data{"E", {"VarusE"}, spellslot::e, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.2419f, 1600.0f},
					spell_data{"R", {"VarusR"}, spellslot::r, false, true, false, {buff_type::Snare}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1500.0f},
				}
			},
			{
				champion_id::Vayne,
				{
					spell_data{"E", {"VayneCondemn"}, spellslot::e, true, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 2200.f},
				}
			},
			{
				champion_id::Veigar,
				{
					spell_data{"Q", {"VeigarQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"W", {"VeigarW"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
					spell_data{"E", {"VeigarE"}, spellslot::e, false, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
					spell_data{"R", {"VeigarR"}, spellslot::r, true, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Velkoz,
				{
					spell_data{"Q", {"VelkozQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1300.0f},
					spell_data{"W", {"VelkozW"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, 1700.0f},
					spell_data{"E", {"VelkozE"}, spellslot::e, false, true, false, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.75f, FLT_MAX},
					spell_data{"R", {"VelkozR"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
				}
			},
			{
				champion_id::Vex,
				{
					spell_data{"Q", {"VexQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.15f, 3200.0f},
					spell_data{"W", {"VexW"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"E", {"VexE"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, 1300.0f},
					spell_data{"R1", {"VexR"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1600.0f},
					spell_data{"R2", {"VexR2"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, 2200.0f},
				}
			},
			{
				champion_id::Vi,
				{
					spell_data{"Q", {"ViQ"}, spellslot::q, false, true, false, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 1400.0f},
					spell_data{"R", {"ViR"}, spellslot::r, true, false, false, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 800.0f},
				}
			},
			{
				champion_id::Viego,
				{
					spell_data{"Q", {"ViegoQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"W", {"ViegoW"}, spellslot::w, false, true, false, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1300.0f},
					spell_data{"R", {"ViegoR"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.5f, FLT_MAX},
				}
			},
			{
				champion_id::Viktor,
				{
					spell_data{"Q", {"ViktorPowerTransfer"}, spellslot::q, true, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, 2000.f},
					spell_data{"W", {"ViktorGravitonField"}, spellslot::w, false, true, false, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.75f, FLT_MAX},
					spell_data{"E", {"ViktorDeathRay"}, spellslot::e, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 1050.0f},
					spell_data{"R", {"ViktorChaosStorm"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Vladimir,
				{
					spell_data{"Q", {"VladimirQ"}, spellslot::q, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"E", {"VladimirE"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 1.0f, 4000.0f},
					spell_data{"R", {"VladmirHemoplague"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.0f, FLT_MAX},
				}
			},
			{
				champion_id::Volibear,
				{
					spell_data{"Q", {"VolibearQ"}, spellslot::q, true, false, false, {buff_type::Stun}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"W", {"VolibearW"}, spellslot::w, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
					spell_data{"E", {"VolibearE"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 2.0f, FLT_MAX},
					spell_data{"R", {"VolibearR"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.25f, 750.0f},
				}
			},
			{
				champion_id::Warwick,
				{
					spell_data{"Q", {"WarwickQ"}, spellslot::q, true, false, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.1f, FLT_MAX},
					spell_data{"E", {"WarwickE"}, spellslot::e, false, true, false, {buff_type::Fear}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.0f, FLT_MAX},
					spell_data{"R", {"WarwickR"}, spellslot::r, false, true, false, {buff_type::Suppression}, {damage_type::physical}, skillshot_type::skillshot_line , 0.1f, 1000.0f},
				}
			},
			{
				champion_id::MonkeyKing,
				{
					spell_data{"Q", {"MonkeyKingQAttack"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.1f, FLT_MAX},
					spell_data{"E", {"MonkeyKingNimbus"}, spellslot::e, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 1000.0f},
					spell_data{"R", {"MonkeyKingSpinToWin"}, spellslot::r, false, true, false, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.0f, FLT_MAX},

				}
			},
			{
				champion_id::Xayah,
				{
					spell_data{"Q", {"XayahQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.1f, 4000.0f},
					spell_data{"E", {"XayahE"}, spellslot::e, false, true, false, {buff_type::Snare}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 4000.0f},
					spell_data{"R", {"XayahR"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 1.5f, 3000.0f},
				}
			},
			{
				champion_id::Xerath,
				{
					spell_data{"Q", {"XerathArcanopulse2"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, FLT_MAX},
					spell_data{"W", {"XerathArcaneBarrage2"}, spellslot::w, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.528f, FLT_MAX},
					spell_data{"E", {"XerathMageSpear"}, spellslot::e, false, true, false, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1400.0f},
					spell_data{"R", {"XerathRMissileWrapper"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, 1700.0f},
				}
			},
			{
				champion_id::XinZhao,
				{
					spell_data{"Q3", {"XinZhaoQThrust3"}, spellslot::q, true, false, false, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.1f, FLT_MAX},
					spell_data{"W", {"XinZhaoW"}, spellslot::w, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.5f, FLT_MAX},
					spell_data{"E", {"XinZhaoE"}, spellslot::e, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.0f, 2500.0f},
					spell_data{"R", {"XinZhaoR"}, spellslot::r, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Yasuo,
				{
					spell_data{"Q3", {"YasuoQ3"}, spellslot::q, false, true, false, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.175f, 1200.0f},
				}
			},
			{
				champion_id::Yone,
				{
					spell_data{"Q3", {"YoneQ3"}, spellslot::q, false, true, false, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.175f, 1200.0f},
					spell_data{"W", {"YoneW"}, spellslot::w, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_cone , 0.19f, FLT_MAX},
					spell_data{"R", {"YoneR"}, spellslot::r, false, true, false, {buff_type::Knockup}, {damage_type::physical}, skillshot_type::skillshot_line , 0.75f, FLT_MAX},
				}
			},
			{
				champion_id::Yorick,
				{
					spell_data{"Q", {"YorickQAttack"}, spellslot::q, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.1f, FLT_MAX},
					spell_data{"E", {"YorickE"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.33f, FLT_MAX},
				}
			},
			{
				champion_id::Yuumi,
				{
					spell_data{"R", {"YuumiR"}, spellslot::r, false, true, false, {buff_type::Snare}, {damage_type::magical}, skillshot_type::skillshot_line , 0.0f, 3000.0f},
				}
			},
			{
				champion_id::Zac,
				{
					spell_data{"Q", {"ZacQ"}, spellslot::q, false, true, false, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 2800.0f},
					spell_data{"E", {"ZacE"}, spellslot::e, false, true, false, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.0f, 1000.0f},
					spell_data{"R", {"ZacR"}, spellslot::r, false, true, false, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.3f, FLT_MAX},
				}
			},
			{
				champion_id::Zed,
				{
					spell_data{"Q", {"ZedQ"}, spellslot::q, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, 1700.0f},
					spell_data{"R", {"ZedR"}, spellslot::r, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Zeri,
				{
					spell_data{"W", {"ZeriW"}, spellslot::w, false, true, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.75f, FLT_MAX},
				}
			},
			{
				champion_id::Ziggs,
				{
					spell_data{"Q", {"ZiggsQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, 1700.0f},
					spell_data{"W", {"ZiggsW"}, spellslot::w, false, true, false, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, 1750.0f},
					spell_data{"E", {"ZiggsE"}, spellslot::e, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, 1550.0f},
					spell_data{"R", {"ZiggsR"}, spellslot::r, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.375f, 2250.0f},
				}
			},
			{
				champion_id::Zilean,
				{
					spell_data{"Q", {"ZileanQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, 848.0f},
					spell_data{"E", {"TimeWarp"}, spellslot::e, true, false, false, {}, {damage_type::physical}, skillshot_type::skillshot_line , 0.25f, FLT_MAX},
				}
			},
			{
				champion_id::Zoe,
				{
					spell_data{"Q", {"ZoeQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1200.0f},
					spell_data{"E", {"ZoeE"}, spellslot::e, false, true, false, {buff_type::Asleep}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1850.0f},
				}
			},
			{
				champion_id::Zyra,
				{
					spell_data{"Q", {"ZyraQ"}, spellslot::q, false, true, false, {}, {damage_type::magical}, skillshot_type::skillshot_circle , 0.25f, FLT_MAX},
					spell_data{"E", {"ZyraE"}, spellslot::e, false, true, false, {buff_type::Stun}, {damage_type::magical}, skillshot_type::skillshot_line , 0.25f, 1150.0f},
					spell_data{"R", {"ZyraR"}, spellslot::r, false, true, false, {buff_type::Knockup}, {damage_type::magical}, skillshot_type::skillshot_circle , 2.0f, FLT_MAX},
				}
			},
		};

		console->print("Loaded spell database successfully.");
		return data;
	}
}