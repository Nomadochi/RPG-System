#pragma once
#include "Player.h"

class Ally : public Player {
public:
	Ally(std::string name, unsigned int level, Race race, bool friendly);

	void OnLevelUp() override;
};


