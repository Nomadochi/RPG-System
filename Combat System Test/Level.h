#pragma once
class Level
{
public:
    Level();
    Level(unsigned int _level, unsigned int _currExp = 0, unsigned int _nexLevExp = 0, float _scale = 0.0f, float buff = 0.0f, bool lvlUp = false);
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

	unsigned int level;
    unsigned int currentExperience;
    unsigned int nextLevelExperience;
    float levelingScale;
    float levelingBuff;
    bool leveledUp;

};

