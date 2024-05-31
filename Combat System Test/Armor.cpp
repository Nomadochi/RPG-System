#include "Armor.h"
#include <iostream>

Armor::Armor(std::string name, std::string type, int value, std::string description,
    unsigned int durability, unsigned int statBonus, unsigned int weight,
    unsigned int defense, ArmorSlot armorSlot)
    : Equipment(name, type, value, description, durability, statBonus, weight),
    defense(defense), armorSlot(armorSlot) {}

Armor::~Armor() {}

bool Armor::operator<(const Armor& _armor)
{
    bool _durability = false;
    bool _bonus = false;
    bool _weight = false;
    bool _defense = false;
    bool lessThan = false;

    if (getDurability() < _armor.getDurability()) {
        _durability = true;
    }
    if (getStatBonus() < _armor.getStatBonus()) {
        _bonus = true;
    }
    if (getWeight() < _armor.getWeight()) {
        _weight = true;
    }
    if (getDefense() < _armor.getDefense()) {
        _defense = true;
    }

    if (_defense && _durability && _bonus && _weight) {
        lessThan = true;
    }
    else if (_defense && _bonus && _weight) {
        lessThan = true;
    }
    else if (_defense && _bonus) {
        lessThan = true;
    }
    else {
        lessThan = false;
    }

    return lessThan;
}

bool Armor::operator>(const Armor& _armor)
{
    bool _durability = false;
    bool _bonus = false;
    bool _weight = false;
    bool _defense = false;
    bool lessThan = false;

    if (getDurability() > _armor.getDurability()) {
        _durability = true;
    }
    if (getStatBonus() > _armor.getStatBonus()) {
        _bonus = true;
    }
    if (getWeight() > _armor.getWeight()) {
        _weight = true;
    }
    if (getDefense() > _armor.getDefense()) {
        _defense = true;
    }

    if (_defense && _durability && _bonus && _weight) {
        lessThan = true;
    }
    else if (_defense && _bonus && _weight) {
        lessThan = true;
    }
    else if (_defense && _bonus) {
        lessThan = true;
    }
    else {
        lessThan = false;
    }

    return lessThan;
}

bool Armor::operator=(const Armor& _armor)
{
    bool _durability = false;
    bool _bonus = false;
    bool _weight = false;
    bool _defense = false;
    bool lessThan = false;

    if (getDurability() == _armor.getDurability()) {
        _durability = true;
    }
    if (getStatBonus() == _armor.getStatBonus()) {
        _bonus = true;
    }
    if (getWeight() == _armor.getWeight()) {
        _weight = true;
    }
    if (getDefense() == _armor.getDefense()) {
        _defense = true;
    }

    if (_defense && _durability && _bonus && _weight) {
        lessThan = true;
    }
    else if (_defense && _bonus && _weight) {
        lessThan = true;
    }
    else {
        lessThan = false;
    }

    return lessThan;
}

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
