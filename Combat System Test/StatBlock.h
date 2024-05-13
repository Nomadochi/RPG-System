#pragma once
#include "Stat.h"
#include <iostream>

class StatBlock
{
public:
	StatBlock(int _attack = 0, int _defense = 0, int _speed = 0, int _luck = 0, int _specialAtt = 0, int _specialDef = 0);
	void  DisplayStats();
	Stat attack;
	Stat defense;
	Stat speed;
	Stat luck;
	Stat specialAttack;
	Stat specialDefense;
};

