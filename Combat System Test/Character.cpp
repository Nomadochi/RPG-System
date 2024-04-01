#include "Character.h"
#include <iostream>

Character::Character(const char* name, unsigned int level, unsigned int currentExperience, unsigned int nextLevelExperience,
    unsigned int currentHealth, unsigned int maxHealth, unsigned int attack, unsigned int defense,
    unsigned int speed, unsigned int luck, unsigned int specialAttack, unsigned int specialDefense,
    Race race)
    : Entity(name, level, currentExperience, nextLevelExperience, currentHealth, maxHealth, attack, defense, speed,
        luck, specialAttack, specialDefense),
    race(race) {}

Character::Race Character::getRace() const {
    return race;
}

void Character::setRace(Race race) {
    this->race = race;
}

void Character::Display() const {
    Entity::Display();
    std::cout << "Race: ";
    switch (race) {
    case PLANT:
        std::cout << "Plant" << std::endl;
        break;
    case ANIMAL:
        std::cout << "Animal" << std::endl;
        break;
    case SPIRIT:
        std::cout << "Spirit" << std::endl;
        break;
    case GOBLIN:
        std::cout << "Goblin" << std::endl;
        break;
    case KOBOLD:
        std::cout << "Kobold" << std::endl;
        break;
    case HUMAN:
        std::cout << "Human" << std::endl;
        break;
    case GOLEM:
        std::cout << "Golem" << std::endl;
        break;
    case DEMON:
        std::cout << "Demon" << std::endl;
        break;
    case DWARF:
        std::cout << "Dwarf" << std::endl;
        break;
    case ELF:
        std::cout << "Elf" << std::endl;
        break;
    case DRAGON:
        std::cout << "Dragon" << std::endl;
        break;
    case GOD:
        std::cout << "God" << std::endl;
        break;
    }
}
