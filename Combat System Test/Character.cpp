#include "Character.h"
#include <iostream>

Character::Character(std::string name, unsigned int level, unsigned int currentHealth, unsigned int maxHealth, StatBlock stats, bool friendly, Race race)    
    : Entity(name, level, currentHealth, maxHealth, stats, friendly), race(race) {

}

Character::Race Character::getRace() const {
    return race;
}

void Character::setRace(Race race) {
    this->race = race;
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
    std::cout << "Current Health: " << getCurrentHealth() << std::endl;
    std::cout << "Max Health: " << getMaxHealth() << std::endl;
    std::cout << "Attack: " << stats.attack.GetValue() << std::endl;
    std::cout << "Defense: " << stats.defense.GetValue() << std::endl;
    std::cout << "Speed: " << stats.speed.GetValue() << std::endl;
    std::cout << "Luck: " << stats.luck.GetValue() << std::endl;
    std::cout << "Special Attack: " << stats.specialAttack.GetValue() << std::endl;
    std::cout << "Special Defense: " << stats.specialDefense.GetValue() << std::endl;
    std::cout << "Race: " << raceStr(getRace()) << std::endl;
}
