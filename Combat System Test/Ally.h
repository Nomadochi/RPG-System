#pragma once
#include "Player.h"

class Ally : public Player {
public:
	Ally(const char* name, unsigned int level, unsigned int currentExperience, unsigned int nextLevelExperience,
		unsigned int currentHealth, unsigned int maxHealth, unsigned int attack, unsigned int defense,
		unsigned int speed, unsigned int luck, unsigned int specialAttack, unsigned int specialDefense,
		Race race);

	void OnLevelUp() override;
};


