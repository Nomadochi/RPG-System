#pragma once
#include "Entity.h"
class Character : public Entity {

public:
	enum Race { PLANT, ANIMAL, SPIRIT, GOBLIN, KOBOLD, HUMAN, GOLEM, DEMON, DWARF, ELF, DRAGON, GOD };

protected:
	Race race;

public:
	Character(std::string name, unsigned int level,	unsigned int currentHealth, unsigned int maxHealth, StatBlock stats, bool friendly, Race race);

	// Getter and setter for race
	Race getRace() const;
	void setRace(Race race);
	std::string raceStr(Race race) const;

	void Display() override;
};


