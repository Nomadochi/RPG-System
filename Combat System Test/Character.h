#pragma once
#include "Entity.h"
class Character : public Entity {

public:
	enum Race { PLANT, ANIMAL, SPIRIT, GOBLIN, KOBOLD, HUMAN, GOLEM, DEMON, DWARF, ELF, DRAGON, GOD };

protected:
	Race race;

public:
	Character(std::string name, unsigned int level,	Race race, bool friendly);

	// Getter and setter for race
	Race getRace() const;
	void setRace(Race race);
	std::string raceStr(Race race) const;
	void ApplyRaceStats(Race race);

	void Display() override;
};


