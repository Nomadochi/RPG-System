#include "Character.h"
#include <iostream>

Character::Character(std::string name, unsigned int level,Race race, bool friendly)    
    : Entity(name, level, friendly), race(race) {
    ApplyRaceStats(race);
}

Character::Race Character::getRace() const {
    return race;
}

void Character::setRace(Race race) {
    this->race = race;
}

void Character::ApplyRaceStats(Race race)
{

    switch (race) {
    case PLANT:
    {

        
        level.SetLevelingScale(0.5f);
        float fakeLevel = (float)level.GetLevel();
        float levelScalar = level.GetLevelingScale();

        level.SetCurrentExperience(0);
        float newExp = 100.0f * level.GetLevelingScale();
        level.SetNextLevelExperience((unsigned int)newExp);

        stats.attack.SetValue(1);
        stats.defense.SetValue(4);
        stats.speed.SetValue(1);
        stats.luck.SetValue(3);
        stats.specialAttack.SetValue(3);
        stats.specialDefense.SetValue(1);
        health.currentHealth.SetValue(25);
        health.maxHealth.SetValue(25);
        health.shield.SetValue(2);

        stats.attack.IncreaseValue(stats.attack.GetValue() + (int)(levelScalar * ((float)stats.attack.GetValue() + fakeLevel)));
        stats.defense.IncreaseValue(stats.defense.GetValue() + (int)(levelScalar * ((float)stats.defense.GetValue() + fakeLevel)));
        stats.speed.IncreaseValue(levelScalar * (float)stats.speed.GetValue() + fakeLevel/2.0f);
        stats.luck.IncreaseValue((int)(levelScalar * ((float)stats.luck.GetValue() + fakeLevel/1.5f)));
        stats.specialAttack.IncreaseValue((int)(levelScalar * ((float)stats.specialAttack.GetValue() + fakeLevel/3.0f)));
        stats.specialDefense.IncreaseValue((int)(levelScalar * ((float)stats.specialDefense.GetValue() + fakeLevel/2.0f)));
        health.currentHealth.IncreaseValue(health.currentHealth.GetValue() + (int)(levelScalar * ((float)health.currentHealth.GetValue() + fakeLevel)));
        health.maxHealth.IncreaseValue(health.maxHealth.GetValue() + (int)(levelScalar * ((float)health.maxHealth.GetValue() + fakeLevel)));
        health.shield.IncreaseValue((int)(levelScalar * ((float)health.shield.GetValue()/2.0f + fakeLevel)));

        break;



    }



    case ANIMAL:
    {


        level.SetLevelingScale(1.5f);
        float fakeLevel = (float)level.GetLevel();
        float levelScalar = level.GetLevelingScale();

        level.SetCurrentExperience(0);
        float newExp = 100.0f * level.GetLevelingScale();
        level.SetNextLevelExperience((unsigned int)newExp);

        stats.attack.SetValue(4);
        stats.defense.SetValue(3);
        stats.speed.SetValue(4);
        stats.luck.SetValue(3);
        stats.specialAttack.SetValue(1);
        stats.specialDefense.SetValue(1);
        health.currentHealth.SetValue(25);
        health.maxHealth.SetValue(25);
        health.shield.SetValue(2);

        stats.attack.IncreaseValue(stats.attack.GetValue() + (int)(levelScalar * ((float)stats.attack.GetValue() + fakeLevel)));
        stats.defense.IncreaseValue(stats.defense.GetValue() + (int)(levelScalar * ((float)stats.defense.GetValue() + fakeLevel)));
        stats.speed.IncreaseValue(levelScalar * (float)stats.speed.GetValue() + fakeLevel);
        stats.luck.IncreaseValue((int)(levelScalar * ((float)stats.luck.GetValue() + fakeLevel / 1.5f)));
        stats.specialAttack.IncreaseValue((int)(levelScalar * ((float)stats.specialAttack.GetValue() + fakeLevel / 3.0f)));
        stats.specialDefense.IncreaseValue((int)(levelScalar * ((float)stats.specialDefense.GetValue() + fakeLevel / 2.0f)));
        health.currentHealth.IncreaseValue(health.currentHealth.GetValue() + (int)(levelScalar * ((float)health.currentHealth.GetValue() + fakeLevel)));
        health.maxHealth.IncreaseValue(health.maxHealth.GetValue() + (int)(levelScalar * ((float)health.maxHealth.GetValue() + fakeLevel)));
        health.shield.IncreaseValue((int)(levelScalar * ((float)health.shield.GetValue() / 2.0f + fakeLevel)));

        break;


    }


    case SPIRIT:
    {
        level.SetLevelingScale(1.9f);
        float fakeLevel = (float)level.GetLevel();
        float levelScalar = level.GetLevelingScale();

        level.SetCurrentExperience(0);
        float newExp = 100.0f * level.GetLevelingScale();
        level.SetNextLevelExperience((unsigned int)newExp);

        stats.attack.SetValue(1);
        stats.defense.SetValue(1);
        stats.speed.SetValue(3);
        stats.luck.SetValue(3);
        stats.specialAttack.SetValue(5);
        stats.specialDefense.SetValue(4);
        health.currentHealth.SetValue(25);
        health.maxHealth.SetValue(25);
        health.shield.SetValue(3);

        stats.attack.IncreaseValue((int)(levelScalar * ((float)stats.attack.GetValue() + fakeLevel)));
        stats.defense.IncreaseValue((int)(levelScalar * ((float)stats.defense.GetValue() + fakeLevel)));
        stats.speed.IncreaseValue(levelScalar * (float)stats.speed.GetValue() + fakeLevel);
        stats.luck.IncreaseValue((int)(levelScalar * ((float)stats.luck.GetValue() + fakeLevel / 1.5f)));
        stats.specialAttack.IncreaseValue((int)(levelScalar * ((float)stats.specialAttack.GetValue() + fakeLevel / 1.3f)));
        stats.specialDefense.IncreaseValue((int)(levelScalar * ((float)stats.specialDefense.GetValue() + fakeLevel / 1.6f)));
        health.currentHealth.IncreaseValue((int)(levelScalar * ((float)health.currentHealth.GetValue() + fakeLevel)));
        health.maxHealth.IncreaseValue((int)(levelScalar * ((float)health.maxHealth.GetValue() + fakeLevel)));
        health.shield.IncreaseValue((int)(levelScalar * ((float)health.shield.GetValue() / 2.0f + fakeLevel)));

        break;

    }



    case GOBLIN:
    {
        level.SetLevelingScale(2.5f);
        float fakeLevel = (float)level.GetLevel();
        float levelScalar = level.GetLevelingScale();

        level.SetCurrentExperience(0);
        float newExp = 100.0f * level.GetLevelingScale();
        level.SetNextLevelExperience((unsigned int)newExp);

        stats.attack.SetValue(3);
        stats.defense.SetValue(2);
        stats.speed.SetValue(4);
        stats.luck.SetValue(3);
        stats.specialAttack.SetValue(4);
        stats.specialDefense.SetValue(3);
        health.currentHealth.SetValue(25);
        health.maxHealth.SetValue(25);
        health.shield.SetValue(3);

        stats.attack.IncreaseValue(stats.attack.GetValue() + (int)(levelScalar * ((float)stats.attack.GetValue() + fakeLevel)));
        stats.defense.IncreaseValue(stats.defense.GetValue() + (int)(levelScalar * ((float)stats.defense.GetValue() + fakeLevel)));
        stats.speed.IncreaseValue(levelScalar* (float)stats.speed.GetValue() + fakeLevel);
        stats.luck.IncreaseValue((int)(levelScalar* ((float)stats.luck.GetValue() + fakeLevel / 1.5f)));
        stats.specialAttack.IncreaseValue((int)(levelScalar* ((float)stats.specialAttack.GetValue() + fakeLevel / 2.0f)));
        stats.specialDefense.IncreaseValue((int)(levelScalar* ((float)stats.specialDefense.GetValue() + fakeLevel / 1.5f)));
        health.currentHealth.IncreaseValue((int)(levelScalar * ((float)health.currentHealth.GetValue() + fakeLevel)));
        health.maxHealth.IncreaseValue((int)(levelScalar * ((float)health.maxHealth.GetValue() + fakeLevel)));
        health.shield.IncreaseValue((int)(levelScalar* ((float)health.shield.GetValue() / 2.0f + fakeLevel)));

        break;


    }


    case KOBOLD:
    {
        level.SetLevelingScale(2.9f);
        float fakeLevel = (float)level.GetLevel();
        float levelScalar = level.GetLevelingScale();

        level.SetCurrentExperience(0);
        float newExp = 100.0f * level.GetLevelingScale();
        level.SetNextLevelExperience((unsigned int)newExp);

        stats.attack.SetValue(4);
        stats.defense.SetValue(2);
        stats.speed.SetValue(5);
        stats.luck.SetValue(4);
        stats.specialAttack.SetValue(3);
        stats.specialDefense.SetValue(2);
        health.currentHealth.SetValue(25);
        health.maxHealth.SetValue(25);
        health.shield.SetValue(2);

        stats.attack.IncreaseValue(stats.attack.GetValue() + (int)(levelScalar * ((float)stats.attack.GetValue() + fakeLevel)));
        stats.defense.IncreaseValue(stats.defense.GetValue() + (int)(levelScalar * ((float)stats.defense.GetValue() + fakeLevel)));
        stats.speed.IncreaseValue((stats.speed.GetValue() + levelScalar* (float)stats.speed.GetValue() + fakeLevel*1.15f));
        stats.luck.IncreaseValue((int)(levelScalar* ((float)stats.luck.GetValue() + fakeLevel / 1.5f)));
        stats.specialAttack.IncreaseValue((int)(levelScalar* ((float)stats.specialAttack.GetValue() + fakeLevel / 3.0f)));
        stats.specialDefense.IncreaseValue((int)(levelScalar* ((float)stats.specialDefense.GetValue() + fakeLevel / 2.0f)));
        health.currentHealth.IncreaseValue((int)(levelScalar * ((float)health.currentHealth.GetValue() + fakeLevel)));
        health.maxHealth.IncreaseValue((int)(levelScalar * ((float)health.maxHealth.GetValue() + fakeLevel)));
        health.shield.IncreaseValue((int)(levelScalar* ((float)health.shield.GetValue() / 3.0f + fakeLevel)));

        break;

    }


    case HUMAN:
    {
        level.SetLevelingScale(3.5f);
        float fakeLevel = (float)level.GetLevel();
        float levelScalar = level.GetLevelingScale();

        level.SetCurrentExperience(0);
        float newExp = 100.0f * level.GetLevelingScale();
        level.SetNextLevelExperience((unsigned int)newExp);

        stats.attack.SetValue(4);
        stats.defense.SetValue(2);
        stats.speed.SetValue(3);
        stats.luck.SetValue(2);
        stats.specialAttack.SetValue(1);
        stats.specialDefense.SetValue(3);
        health.currentHealth.SetValue(25);
        health.maxHealth.SetValue(25);
        health.shield.SetValue(4);

        stats.attack.IncreaseValue(stats.attack.GetValue() + (int)(levelScalar * ((float)stats.attack.GetValue() + fakeLevel/1.5f)));
        stats.defense.IncreaseValue(stats.defense.GetValue() + (int)(levelScalar * ((float)stats.defense.GetValue() + fakeLevel/0.75f)));
        stats.speed.IncreaseValue(levelScalar * (float)stats.speed.GetValue() + fakeLevel);
        stats.luck.IncreaseValue((int)(levelScalar * ((float)stats.luck.GetValue() + fakeLevel / 2.5f)));
        stats.specialAttack.IncreaseValue((int)(levelScalar * ((float)stats.specialAttack.GetValue() + fakeLevel / 3.0f)));
        stats.specialDefense.IncreaseValue((int)(levelScalar * ((float)stats.specialDefense.GetValue() + fakeLevel / 2.0f)));
        health.currentHealth.IncreaseValue((int)(levelScalar * ((float)health.currentHealth.GetValue() + fakeLevel)));
        health.maxHealth.IncreaseValue((int)(levelScalar * ((float)health.maxHealth.GetValue() + fakeLevel)));
        health.shield.IncreaseValue((int)(levelScalar * ((float)health.shield.GetValue() / 2.0f + fakeLevel)));

        break;

    }

    ///NOT ADJUSTED FOR RACE YET!!! 

    case GOLEM:
    {
        level.SetLevelingScale(3.8f);
        float fakeLevel = (float)level.GetLevel();
        float levelScalar = level.GetLevelingScale();

        stats.attack.SetValue(1);
        stats.defense.SetValue(4);
        stats.speed.SetValue(1);
        stats.luck.SetValue(3);
        stats.specialAttack.SetValue(3);
        stats.specialDefense.SetValue(1);
        health.currentHealth.SetValue(25);
        health.maxHealth.SetValue(25);
        health.shield.SetValue(2);

        stats.attack.IncreaseValue(stats.attack.GetValue() + (int)(levelScalar * ((float)stats.attack.GetValue() + fakeLevel)));
        stats.defense.IncreaseValue(stats.defense.GetValue() + (int)(levelScalar * ((float)stats.defense.GetValue() + fakeLevel)));
        stats.speed.IncreaseValue(levelScalar * (float)stats.speed.GetValue() + fakeLevel / 2.0f);
        stats.luck.IncreaseValue((int)(levelScalar * ((float)stats.luck.GetValue() + fakeLevel / 1.5f)));
        stats.specialAttack.IncreaseValue((int)(levelScalar * ((float)stats.specialAttack.GetValue() + fakeLevel / 3.0f)));
        stats.specialDefense.IncreaseValue((int)(levelScalar * ((float)stats.specialDefense.GetValue() + fakeLevel / 2.0f)));
        health.currentHealth.IncreaseValue(health.currentHealth.GetValue() + (int)(levelScalar * ((float)health.currentHealth.GetValue() + fakeLevel)));
        health.maxHealth.IncreaseValue(health.maxHealth.GetValue() + (int)(levelScalar * ((float)health.maxHealth.GetValue() + fakeLevel)));
        health.shield.IncreaseValue((int)(levelScalar * ((float)health.shield.GetValue() / 2.0f + fakeLevel)));

        break;

    }

    ///NOT ADJUSTED FOR RACE YET!!! 

    case DEMON:
    {
        level.SetLevelingScale(4.2f);
        float fakeLevel = (float)level.GetLevel();
        float levelScalar = level.GetLevelingScale();

        stats.attack.SetValue(1);
        stats.defense.SetValue(4);
        stats.speed.SetValue(1);
        stats.luck.SetValue(3);
        stats.specialAttack.SetValue(3);
        stats.specialDefense.SetValue(1);
        health.currentHealth.SetValue(25);
        health.maxHealth.SetValue(25);
        health.shield.SetValue(2);

        stats.attack.IncreaseValue(stats.attack.GetValue() + (int)(levelScalar * ((float)stats.attack.GetValue() + fakeLevel)));
        stats.defense.IncreaseValue(stats.defense.GetValue() + (int)(levelScalar * ((float)stats.defense.GetValue() + fakeLevel)));
        stats.speed.IncreaseValue(levelScalar * (float)stats.speed.GetValue() + fakeLevel / 2.0f);
        stats.luck.IncreaseValue((int)(levelScalar * ((float)stats.luck.GetValue() + fakeLevel / 1.5f)));
        stats.specialAttack.IncreaseValue((int)(levelScalar * ((float)stats.specialAttack.GetValue() + fakeLevel / 3.0f)));
        stats.specialDefense.IncreaseValue((int)(levelScalar * ((float)stats.specialDefense.GetValue() + fakeLevel / 2.0f)));
        health.currentHealth.IncreaseValue(health.currentHealth.GetValue() + (int)(levelScalar * ((float)health.currentHealth.GetValue() + fakeLevel)));
        health.maxHealth.IncreaseValue(health.maxHealth.GetValue() + (int)(levelScalar * ((float)health.maxHealth.GetValue() + fakeLevel)));
        health.shield.IncreaseValue((int)(levelScalar * ((float)health.shield.GetValue() / 2.0f + fakeLevel)));

        break;

    }

    ///NOT ADJUSTED FOR RACE YET!!! 

    case DWARF:
    {
        level.SetLevelingScale(4.7f);
        float fakeLevel = (float)level.GetLevel();
        float levelScalar = level.GetLevelingScale();

        stats.attack.SetValue(1);
        stats.defense.SetValue(4);
        stats.speed.SetValue(1);
        stats.luck.SetValue(3);
        stats.specialAttack.SetValue(3);
        stats.specialDefense.SetValue(1);
        health.currentHealth.SetValue(25);
        health.maxHealth.SetValue(25);
        health.shield.SetValue(2);

        stats.attack.IncreaseValue(stats.attack.GetValue() + (int)(levelScalar * ((float)stats.attack.GetValue() + fakeLevel)));
        stats.defense.IncreaseValue(stats.defense.GetValue() + (int)(levelScalar * ((float)stats.defense.GetValue() + fakeLevel)));
        stats.speed.IncreaseValue(levelScalar * (float)stats.speed.GetValue() + fakeLevel / 2.0f);
        stats.luck.IncreaseValue((int)(levelScalar * ((float)stats.luck.GetValue() + fakeLevel / 1.5f)));
        stats.specialAttack.IncreaseValue((int)(levelScalar * ((float)stats.specialAttack.GetValue() + fakeLevel / 3.0f)));
        stats.specialDefense.IncreaseValue((int)(levelScalar * ((float)stats.specialDefense.GetValue() + fakeLevel / 2.0f)));
        health.currentHealth.IncreaseValue(health.currentHealth.GetValue() + (int)(levelScalar * ((float)health.currentHealth.GetValue() + fakeLevel)));
        health.maxHealth.IncreaseValue(health.maxHealth.GetValue() + (int)(levelScalar * ((float)health.maxHealth.GetValue() + fakeLevel)));
        health.shield.IncreaseValue((int)(levelScalar * ((float)health.shield.GetValue() / 2.0f + fakeLevel)));

        break;
    }


    ///NOT ADJUSTED FOR RACE YET!!! 

    case ELF:
    {
        level.SetLevelingScale(5.5f);
        float fakeLevel = (float)level.GetLevel();
        float levelScalar = level.GetLevelingScale();

        stats.attack.SetValue(1);
        stats.defense.SetValue(4);
        stats.speed.SetValue(1);
        stats.luck.SetValue(3);
        stats.specialAttack.SetValue(3);
        stats.specialDefense.SetValue(1);
        health.currentHealth.SetValue(25);
        health.maxHealth.SetValue(25);
        health.shield.SetValue(2);

        stats.attack.IncreaseValue(stats.attack.GetValue() + (int)(levelScalar * ((float)stats.attack.GetValue() + fakeLevel)));
        stats.defense.IncreaseValue(stats.defense.GetValue() + (int)(levelScalar * ((float)stats.defense.GetValue() + fakeLevel)));
        stats.speed.IncreaseValue(levelScalar * (float)stats.speed.GetValue() + fakeLevel / 2.0f);
        stats.luck.IncreaseValue((int)(levelScalar * ((float)stats.luck.GetValue() + fakeLevel / 1.5f)));
        stats.specialAttack.IncreaseValue((int)(levelScalar * ((float)stats.specialAttack.GetValue() + fakeLevel / 3.0f)));
        stats.specialDefense.IncreaseValue((int)(levelScalar * ((float)stats.specialDefense.GetValue() + fakeLevel / 2.0f)));
        health.currentHealth.IncreaseValue(health.currentHealth.GetValue() + (int)(levelScalar * ((float)health.currentHealth.GetValue() + fakeLevel)));
        health.maxHealth.IncreaseValue(health.maxHealth.GetValue() + (int)(levelScalar * ((float)health.maxHealth.GetValue() + fakeLevel)));
        health.shield.IncreaseValue((int)(levelScalar * ((float)health.shield.GetValue() / 2.0f + fakeLevel)));

        break;

    }

    ///NOT ADJUSTED FOR RACE YET!!! 

    case DRAGON:
    {
        level.SetLevelingScale(7.5f);
        float fakeLevel = (float)level.GetLevel();
        float levelScalar = level.GetLevelingScale();

        stats.attack.SetValue(1);
        stats.defense.SetValue(4);
        stats.speed.SetValue(1);
        stats.luck.SetValue(3);
        stats.specialAttack.SetValue(3);
        stats.specialDefense.SetValue(1);
        health.currentHealth.SetValue(25);
        health.maxHealth.SetValue(25);
        health.shield.SetValue(2);

        stats.attack.IncreaseValue(stats.attack.GetValue() + (int)(levelScalar * ((float)stats.attack.GetValue() + fakeLevel)));
        stats.defense.IncreaseValue(stats.defense.GetValue() + (int)(levelScalar * ((float)stats.defense.GetValue() + fakeLevel)));
        stats.speed.IncreaseValue(levelScalar * (float)stats.speed.GetValue() + fakeLevel / 2.0f);
        stats.luck.IncreaseValue((int)(levelScalar * ((float)stats.luck.GetValue() + fakeLevel / 1.5f)));
        stats.specialAttack.IncreaseValue((int)(levelScalar * ((float)stats.specialAttack.GetValue() + fakeLevel / 3.0f)));
        stats.specialDefense.IncreaseValue((int)(levelScalar * ((float)stats.specialDefense.GetValue() + fakeLevel / 2.0f)));
        health.currentHealth.IncreaseValue(health.currentHealth.GetValue() + (int)(levelScalar * ((float)health.currentHealth.GetValue() + fakeLevel)));
        health.maxHealth.IncreaseValue(health.maxHealth.GetValue() + (int)(levelScalar * ((float)health.maxHealth.GetValue() + fakeLevel)));
        health.shield.IncreaseValue((int)(levelScalar * ((float)health.shield.GetValue() / 2.0f + fakeLevel)));

        break;

    }

    ///NOT ADJUSTED FOR RACE YET!!! 

    case GOD:
    {
        level.SetLevelingScale(10.0f);
        float fakeLevel = (float)level.GetLevel();
        float levelScalar = level.GetLevelingScale();

        stats.attack.SetValue(1);
        stats.defense.SetValue(4);
        stats.speed.SetValue(1);
        stats.luck.SetValue(3);
        stats.specialAttack.SetValue(3);
        stats.specialDefense.SetValue(1);
        health.currentHealth.SetValue(25);
        health.maxHealth.SetValue(25);
        health.shield.SetValue(2);

        stats.attack.IncreaseValue(stats.attack.GetValue() + (int)(levelScalar * ((float)stats.attack.GetValue() + fakeLevel)));
        stats.defense.IncreaseValue(stats.defense.GetValue() + (int)(levelScalar * ((float)stats.defense.GetValue() + fakeLevel)));
        stats.speed.IncreaseValue(levelScalar * (float)stats.speed.GetValue() + fakeLevel / 2.0f);
        stats.luck.IncreaseValue((int)(levelScalar * ((float)stats.luck.GetValue() + fakeLevel / 1.5f)));
        stats.specialAttack.IncreaseValue((int)(levelScalar * ((float)stats.specialAttack.GetValue() + fakeLevel / 3.0f)));
        stats.specialDefense.IncreaseValue((int)(levelScalar * ((float)stats.specialDefense.GetValue() + fakeLevel / 2.0f)));
        health.currentHealth.IncreaseValue(health.currentHealth.GetValue() + (int)(levelScalar * ((float)health.currentHealth.GetValue() + fakeLevel)));
        health.maxHealth.IncreaseValue(health.maxHealth.GetValue() + (int)(levelScalar * ((float)health.maxHealth.GetValue() + fakeLevel)));
        health.shield.IncreaseValue((int)(levelScalar * ((float)health.shield.GetValue() / 2.0f + fakeLevel)));

        break;

    }


    ///NOT ADJUSTED FOR RACE YET!!! 

    default:
    {
        level.SetLevelingScale(100.0f);
        float fakeLevel = (float)level.GetLevel();
        float levelScalar = level.GetLevelingScale();

        stats.attack.SetValue(1);
        stats.defense.SetValue(4);
        stats.speed.SetValue(1);
        stats.luck.SetValue(3);
        stats.specialAttack.SetValue(3);
        stats.specialDefense.SetValue(1);
        health.currentHealth.SetValue(25);
        health.maxHealth.SetValue(25);
        health.shield.SetValue(2);

        stats.attack.IncreaseValue(stats.attack.GetValue() + (int)(levelScalar * ((float)stats.attack.GetValue() + fakeLevel)));
        stats.defense.IncreaseValue(stats.defense.GetValue() + (int)(levelScalar * ((float)stats.defense.GetValue() + fakeLevel)));
        stats.speed.IncreaseValue(levelScalar * (float)stats.speed.GetValue() + fakeLevel / 2.0f);
        stats.luck.IncreaseValue((int)(levelScalar * ((float)stats.luck.GetValue() + fakeLevel / 1.5f)));
        stats.specialAttack.IncreaseValue((int)(levelScalar * ((float)stats.specialAttack.GetValue() + fakeLevel / 3.0f)));
        stats.specialDefense.IncreaseValue((int)(levelScalar * ((float)stats.specialDefense.GetValue() + fakeLevel / 2.0f)));
        health.currentHealth.IncreaseValue(health.currentHealth.GetValue() + (int)(levelScalar * ((float)health.currentHealth.GetValue() + fakeLevel)));
        health.maxHealth.IncreaseValue(health.maxHealth.GetValue() + (int)(levelScalar * ((float)health.maxHealth.GetValue() + fakeLevel)));
        health.shield.IncreaseValue((int)(levelScalar * ((float)health.shield.GetValue() / 2.0f + fakeLevel)));

        break;
    }
}
}

std::string Character::raceStr(Race race) const {
    switch (race) {
    case PLANT:
        return "Plant";
    case ANIMAL:
        return "Animal";
    case SPIRIT:
        return "Spirit";
    case GOBLIN:
        return "Goblin";
    case KOBOLD:
        return "Kobold";
    case HUMAN:
        return "Human";
    case GOLEM:
        return "Golem";
    case DEMON:
        return "Demon";
    case DWARF:
        return "Dwarf";
    case ELF:
        return "Elf";
    case DRAGON:
        return "Dragon";
    case GOD:
        return "God";
    default:
        return "Unknown";
    }
}

void Character::Display() {
    std::cout << "Name: " << GetName() << std::endl;
    std::cout << "Level: " << level.GetLevel() << std::endl;
    std::cout << "Experience: " << level.GetCurrentExperience() << "\t/\t" << 
        level.GetNextLevelExperience() << std::endl;
    std::cout << "Current Health: " << health.currentHealth.GetValue() << std::endl;
    std::cout << "Max Health: " << health.maxHealth.GetValue() << std::endl;
    std::cout << "Sheild: " << health.shield.GetValue() << std::endl;
    std::cout << "Attack: " << stats.attack.GetValue() << std::endl;
    std::cout << "Defense: " << stats.defense.GetValue() << std::endl;
    std::cout << "Speed: " << stats.speed.GetValue() << std::endl;
    std::cout << "Luck: " << stats.luck.GetValue() << std::endl;
    std::cout << "Special Attack: " << stats.specialAttack.GetValue() << std::endl;
    std::cout << "Special Defense: " << stats.specialDefense.GetValue() << std::endl;
    std::cout << "Race: " << raceStr(getRace()) << std::endl;
}
