#include "Equipment.h"
#include <iostream>

Equipment::Equipment(const char* name, const char* type, int value, const char* description,
    unsigned int durability, unsigned int statBonus, unsigned int weight)
    : Item(name, type, value, ""), description(description), durability(durability),
    statBonus(statBonus), weight(weight) {}

Equipment::~Equipment() {}

const char* Equipment::getDescription() const {
    return description;
}

unsigned int Equipment::getDurability() const {
    return durability;
}

unsigned int Equipment::getStatBonus() const {
    return statBonus;
}

unsigned int Equipment::getWeight() const {
    return weight;
}

void Equipment::setDescription(const char* description) {
    this->description = description;
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
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Type: " << getType() << std::endl;
    std::cout << "Value: " << getValue() << std::endl;
    std::cout << "Description: " << description << std::endl;
    std::cout << "Durability: " << durability << std::endl;
    std::cout << "Stat Bonus: " << statBonus << std::endl;
    std::cout << "Weight: " << weight << std::endl;
}
