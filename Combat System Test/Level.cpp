#include "Level.h"

Level::Level()
{
	m_level = 1;
	m_currentExperience = 1;
	m_nextLevelExperience = 2;
	m_scale = 0.0f;
	m_buff = 0.0f;
	m_hasLeveledUp = false;
}

Level::Level(unsigned int _level)
	: m_level(_level)
{
	m_currentExperience = 0;
	m_nextLevelExperience = 100.f * (float)m_level;
	m_scale = 1.0f;
	m_buff = 0.0f;
	m_hasLeveledUp = false;
}

Level::Level(unsigned int _level, float scalingFactor)
	: m_level(_level), m_scale(scalingFactor)
{
	m_currentExperience = 0;
	m_nextLevelExperience = 100.f * m_scale;
	m_buff = 0.0f;
	m_hasLeveledUp = false;
}

Level::Level(unsigned int _level, unsigned int _currExp, unsigned int _nexLevExp, float _scale, float buff, bool lvlUp)
	: m_level(_level), m_currentExperience(_currExp), m_nextLevelExperience(_nexLevExp), m_scale(_scale), m_buff(buff), m_hasLeveledUp(lvlUp)
{

}



unsigned int Level::GetLevel() const
{
	return m_level;
}

void Level::SetLevel(unsigned int _level)
{
	m_level = _level;
}

unsigned int Level::GetCurrentExperience() const
{
	return m_currentExperience;
}

void Level::SetCurrentExperience(unsigned int _currentExperience)
{
	m_currentExperience = _currentExperience;
}

void Level::GainExperience(unsigned int gainedExp)
{
	m_currentExperience += gainedExp;
}

unsigned int Level::GetNextLevelExperience() const
{
	return m_nextLevelExperience;
}

void Level::SetNextLevelExperience(unsigned int _nextLevelExperience)
{
	m_nextLevelExperience = _nextLevelExperience;

}

float Level::GetLevelingScale() const
{
	return m_scale;
}

void Level::SetLevelingScale(float _adjustment)
{
	m_scale = _adjustment;
}

float Level::GetLevelingBuff() const
{
	return m_buff;
}

void Level::SetLevelingBuff(float _levelBuff)
{
	m_buff = _levelBuff;
}

void Level::ApplyLevelingBuff()
{
	m_scale += m_buff;
}

void Level::RemoveLevelingBuff()
{
	m_scale -= m_buff;
}

bool Level::LeveledUp()
{
	if (m_hasLeveledUp) {
		return true;
	}
	else {
		return false;
	}
}

void Level::NoLvlUp()
{
	m_hasLeveledUp = false;
}

void Level::DidLvlUp()
{
	m_hasLeveledUp = true;
}

