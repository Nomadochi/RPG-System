#include "Weapon.h"
#include <iostream>

Weapon::Weapon(const char* name, const char* type, int value, const char* description,
    unsigned int durability, unsigned int statBonus, unsigned int weight,
    unsigned int accuracy, unsigned int damage)
    : Equipment(name, type, value, description, durability, statBonus, weight),
    accuracy(accuracy), damage(damage) {}

Weapon::~Weapon() {}

unsigned int Weapon::getAccuracy() const {
    return accuracy;
}

unsigned int Weapon::getDamage() const {
    return damage;
}

void Weapon::setAccuracy(unsigned int accuracy) {
    this->accuracy = accuracy;
}

void Weapon::setDamage(unsigned int damage) {
    this->damage = damage;
}

void Weapon::Display() const {
    Equipment::Display();
    std::cout << "Accuracy: " << accuracy << std::endl;
    std::cout << "Damage: " << damage << std::endl;
}
