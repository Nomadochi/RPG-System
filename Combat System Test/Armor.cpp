#include "Armor.h"
#include <iostream>

Armor::Armor(const char* name, const char* type, int value, const char* description,
    unsigned int durability, unsigned int statBonus, unsigned int weight,
    unsigned int defense, ArmorSlot armorSlot)
    : Equipment(name, type, value, description, durability, statBonus, weight),
    defense(defense), armorSlot(armorSlot) {}

Armor::~Armor() {}

unsigned int Armor::getDefense() const {
    return defense;
}

ArmorSlot Armor::getArmorSlot() const {
    return armorSlot;
}

void Armor::setDefense(unsigned int defense) {
    this->defense = defense;
}

void Armor::setArmorSlot(ArmorSlot armorSlot) {
    this->armorSlot = armorSlot;
}

void Armor::Display() const {
    Equipment::Display();
    std::cout << "Defense: " << defense << std::endl;
    std::cout << "Armor Slot: ";
    switch (armorSlot) {
    case HEAD:
        std::cout << "Head" << std::endl;
        break;
    case CHEST:
        std::cout << "Chest" << std::endl;
        break;
    case ARMS:
        std::cout << "Arms" << std::endl;
        break;
    case LEGS:
        std::cout << "Legs" << std::endl;
        break;
    }
}
