#include "Level.h"

Level::Level()
{
	level = 1;
	currentExperience = 1;
	nextLevelExperience = 2;
	levelingScale = 0.0f;
	levelingBuff = 0.0f;
	leveledUp = false;
}

Level::Level(unsigned int _level, unsigned int _currExp, unsigned int _nexLevExp, float _scale, float buff, bool lvlUp)
	: level(_level), currentExperience(_currExp), nextLevelExperience(_nexLevExp), levelingScale(_scale), levelingBuff(buff), leveledUp(lvlUp)
{

}



unsigned int Level::GetLevel() const
{
	return level;
}

void Level::SetLevel(unsigned int _level)
{
	level = _level;
}

unsigned int Level::GetCurrentExperience() const
{
	return currentExperience;
}

void Level::SetCurrentExperience(unsigned int _currentExperience)
{
	currentExperience = _currentExperience;
}

void Level::GainExperience(unsigned int gainedExp)
{
	currentExperience += gainedExp;
}

unsigned int Level::GetNextLevelExperience() const
{
	return nextLevelExperience;
}

void Level::SetNextLevelExperience(unsigned int _nextLevelExperience)
{
	if (currentExperience >= nextLevelExperience) {
		if (GetLevelingBuff() > 0.0f) {
			ApplyLevelingBuff();
		}
		nextLevelExperience *= (int)levelingScale;
		currentExperience = 0;
		level += 1;
		DidLvlUp();
	}
	else
	{
		nextLevelExperience = _nextLevelExperience;
	}
}

float Level::GetLevelingScale() const
{
	return levelingScale;
}

void Level::SetLevelingScale(float _adjustment)
{
	levelingScale = _adjustment;
}

float Level::GetLevelingBuff() const
{
	return levelingBuff;
}

void Level::SetLevelingBuff(float _levelBuff)
{
	levelingBuff = _levelBuff;
}

void Level::ApplyLevelingBuff()
{
	levelingScale += levelingBuff;
}

void Level::RemoveLevelingBuff()
{
	levelingScale -= levelingBuff;
}

bool Level::LeveledUp()
{
	if (leveledUp) {
		return true;
	}
	else {
		return false;
	}
}

void Level::NoLvlUp()
{
	leveledUp = false;
}

void Level::DidLvlUp()
{
	leveledUp = true;
}

