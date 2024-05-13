#pragma once
#include "Player.h"

class Ally : public Player {
public:
	Ally(std::string name, unsigned int level, unsigned int currentHealth, unsigned int maxHealth, StatBlock _stats, bool friendly,	Race race);

	void OnLevelUp() override;
};


