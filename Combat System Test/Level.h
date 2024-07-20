#pragma once
#include <cstdint>
#include <limits>

class Level
{
public:
    Level();
    Level(uint32_t _level);
    Level(uint32_t _level, float scalingFactor);
    Level(uint32_t _level, uint32_t _currExp,
        uint32_t _nexLevExp, float _scale,
        float buff = 0.0f, bool lvlUp = false);
    uint32_t GetLevel() const;
    void SetLevel(uint32_t _level);
    uint32_t GetCurrentExperience() const;
    void SetCurrentExperience(uint32_t _currentExperience);
    void GainExperience(uint32_t gainedExp);
    uint32_t GetNextLevelExperience() const;
    void SetNextLevelExperience(uint32_t _nextLevelExperience);
    
    float GetLevelingScale() const;
    void SetLevelingScale(float _adjustment);

    float GetLevelingBuff() const;
    void SetLevelingBuff(float _levelBuff);
    void ApplyLevelingBuff();
    void RemoveLevelingBuff();
    bool LeveledUp() const;
    void NoLvlUp();
    void DidLvlUp();


private:
    
    uint32_t m_level;
    uint32_t m_currentExperience;
    uint32_t m_nextLevelExperience;
    float m_scale;
    float m_buff;
    bool m_hasLeveledUp;

};

