#include "Equipment.h"
#include <iostream>

Equipment::Equipment(std::string name, std::string type, int value, std::string description,
    unsigned int durability, unsigned int statBonus, unsigned int weight)
    : Item(name, type, value, description), durability(durability),
    statBonus(statBonus), weight(weight) {}

Equipment::~Equipment() {}

unsigned int Equipment::getDurability() const {
    return durability;
}

unsigned int Equipment::getStatBonus() const {
    return statBonus;
}

unsigned int Equipment::getWeight() const {
    return weight;
}


void Equipment::setDurability(unsigned int durability) {
    this->durability = durability;
}

void Equipment::setStatBonus(unsigned int statBonus) {
    this->statBonus = statBonus;
}

void Equipment::setWeight(unsigned int weight) {
    this->weight = weight;
}

void Equipment::Display() const {
    std::cout << "Name: " << Name() << std::endl;
    std::cout << "Type: " << Type() << std::endl;
    std::cout << "Value: " << Value() << std::endl;
    std::cout << "Description: " << Description() << std::endl;
    std::cout << "Durability: " << durability << std::endl;
    std::cout << "Stat Bonus: " << statBonus << std::endl;
    std::cout << "Weight: " << weight << std::endl;
}
