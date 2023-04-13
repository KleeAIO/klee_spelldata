#pragma once
#include "../plugin_sdk/plugin_sdk.hpp"

namespace spell_database
{
	struct spell_data
	{
		std::string menuslot;
		std::vector<std::string> spell_names;
		spellslot slot;
		bool targeted;
		bool missile;
		bool off_by_default;
		std::vector<buff_type> cc_types = {};
		std::vector<damage_type> damage_types = {};
		skillshot_type spellType;
		float spellDelay;
		float spellSpeed;
	};

	std::map<champion_id, std::vector<spell_data>> load();
};