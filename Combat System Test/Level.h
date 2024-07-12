#pragma once
class Level
{
public:
    Level();
    Level(unsigned int _level);
    Level(unsigned int _level, float scalingFactor);
    Level(unsigned int _level, unsigned int _currExp,
        unsigned int _nexLevExp, float _scale,
        float buff = 0.0f, bool lvlUp = false);
    unsigned int GetLevel() const;
    void SetLevel(unsigned int _level);
    unsigned int GetCurrentExperience() const;
    void SetCurrentExperience(unsigned int _currentExperience);
    void GainExperience(unsigned int gainedExp);
    unsigned int GetNextLevelExperience() const;
    void SetNextLevelExperience(unsigned int _nextLevelExperience);
    
    float GetLevelingScale() const;
    void SetLevelingScale(float _adjustment);

    float GetLevelingBuff() const;
    void SetLevelingBuff(float _levelBuff);
    void ApplyLevelingBuff();
    void RemoveLevelingBuff();
    bool LeveledUp();
    void NoLvlUp();
    void DidLvlUp();


private:

	unsigned int m_level;
    unsigned int m_currentExperience;
    unsigned int m_nextLevelExperience;
    float m_scale;
    float m_buff;
    bool m_hasLeveledUp;

};

