#include "Level.h"

Level::Level()
	: m_level(1), m_currentExperience(1), m_nextLevelExperience(2), 
	m_scale(0.0f), m_buff(0.0f), m_hasLeveledUp(false)
{

}

Level::Level(uint32_t _level)
	: m_level(_level), m_currentExperience(0), 
	m_nextLevelExperience(static_cast<uint32_t>(100.f * _level)),
	m_scale(1.0f), m_buff(0.0f), m_hasLeveledUp(false)
{

}

Level::Level(uint32_t _level, float scalingFactor)
	: m_level(_level), m_currentExperience(0), 
	m_nextLevelExperience(static_cast<uint32_t>(100.f * scalingFactor)),
	m_scale(scalingFactor), m_buff(0.0f), m_hasLeveledUp(false)
{

}

Level::Level(uint32_t _level, uint32_t _currExp, uint32_t _nexLevExp, float _scale, float buff, bool lvlUp)
	: m_level(_level), m_currentExperience(_currExp), 
	m_nextLevelExperience(_nexLevExp), m_scale(_scale), 
	m_buff(buff), m_hasLeveledUp(lvlUp)
{

}

uint32_t Level::GetLevel() const
{
	return m_level;
}

void Level::SetLevel(uint32_t _level)
{
	m_level = _level;
}

uint32_t Level::GetCurrentExperience() const
{
	return m_currentExperience;
}

void Level::SetCurrentExperience(uint32_t _currentExperience)
{
	m_currentExperience = _currentExperience;
}

void Level::GainExperience(uint32_t gainedExp)
{

	m_currentExperience += gainedExp;
}

uint32_t Level::GetNextLevelExperience() const
{
	return m_nextLevelExperience;
}

void Level::SetNextLevelExperience(uint32_t _nextLevelExperience)
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

bool Level::LeveledUp() const
{
	return m_hasLeveledUp;

}

void Level::NoLvlUp()
{
	m_hasLeveledUp = false;
}

void Level::DidLvlUp()
{
	m_hasLeveledUp = true;
}

