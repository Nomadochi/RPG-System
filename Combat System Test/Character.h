#pragma once
#include "Entity.h"
class Character : public Entity {

public:
	enum Race { PLANT, ANIMAL, SPIRIT, GOBLIN, KOBOLD, HUMAN, GOLEM, DEMON, DWARF, ELF, DRAGON, GOD };

protected:
	Race race;

public:
	Character(const char* name, unsigned int level, unsigned int currentExperience, unsigned int nextLevelExperience,
		unsigned int currentHealth, unsigned int maxHealth, unsigned int attack, unsigned int defense,
		unsigned int speed, unsigned int luck, unsigned int specialAttack, unsigned int specialDefense,
		Race race);

	// Getter and setter for race
	Race getRace() const;
	void setRace(Race race);

	void Display() const override;
};


