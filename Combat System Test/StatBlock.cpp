#include "StatBlock.h"


StatBlock::StatBlock(int _attack, int _defense, int _speed, int _luck, int _specialAtt, int _specialDef)
	: attack(_attack), defense(_defense), speed(_speed), luck(_luck), specialAttack(_specialAtt), specialDefense(_specialDef)
{
	attack.SetName("Attack");
	defense.SetName("Defense");
	speed.SetName("Speed");
	luck.SetName("Luck");
	specialAttack.SetName("Special Attack");
	specialDefense.SetName("Special Defense");
}

void StatBlock::DisplayStats()
{
	attack.Display();
	defense.Display();
	speed.Display();
	luck.Display();
	specialAttack.Display();
	specialDefense.Display();


}
