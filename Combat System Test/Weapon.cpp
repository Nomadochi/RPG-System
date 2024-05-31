#include "Weapon.h"
#include <iostream>

Weapon::Weapon(std::string name, std::string type, int value, std::string description,
    unsigned int durability, unsigned int statBonus, unsigned int weight,
    unsigned int accuracy, unsigned int damage)
    : Equipment(name, type, value, description, durability, statBonus, weight),
    accuracy(accuracy), damage(damage) {}

Weapon::~Weapon() {}

bool Weapon::operator<(const Weapon& _weapon)
{
    bool _durability = false;
    bool _bonus = false;
    bool _weight = false;
    bool _accuracy = false;
    bool _damage = false;
    bool lessThan = false;
    
    if (getDurability() < _weapon.getDurability()) {
        _durability = true;
    }
    if (getStatBonus() < _weapon.getStatBonus()) {
        _bonus = true;
    }
    if (getWeight() < _weapon.getWeight()) {
        _weight = true;
    }
    if (getAccuracy() < _weapon.getAccuracy()) {
        _accuracy = true;
    }
    if (getDamage() < _weapon.getDamage()) {
        _damage = true;
    }

    if (_accuracy && _damage && _durability && _bonus && _weight) {
        lessThan = true;
    }
    else if (_accuracy && _damage && _bonus && _weight) {
        lessThan = true;
    }
    else if (_accuracy && _damage && _bonus) {
        lessThan = true;
    }
    else {
        lessThan = false;
    }

    return lessThan;
}

bool Weapon::operator>(const Weapon& _weapon)
{
    bool _durability = false;
    bool _bonus = false;
    bool _weight = false;
    bool _accuracy = false;
    bool _damage = false;
    bool greaterThan = false;

    if (getDurability() > _weapon.getDurability()) {
        _durability = true;
    }
    if (getStatBonus() > _weapon.getStatBonus()) {
        _bonus = true;
    }
    if (getWeight() > _weapon.getWeight()) {
        _weight = true;
    }
    if (getAccuracy() > _weapon.getAccuracy()) {
        _accuracy = true;
    }
    if (getDamage() > _weapon.getDamage()) {
        _damage = true;
    }

    if (_accuracy && _damage && _durability && _bonus && _weight) {
        greaterThan = true;
    }
    else if (_accuracy && _damage && _bonus && _weight) {
        greaterThan = true;
    }
    else if (_accuracy && _damage && _bonus) {
        greaterThan = true;
    }
    else {
        greaterThan = false;
    }

    return greaterThan;
}

bool Weapon::operator=(const Weapon& _weapon)
{
    bool _durability = false;
    bool _bonus = false;
    bool _weight = false;
    bool _accuracy = false;
    bool _damage = false;
    bool equals = false;

    if (getDurability() == _weapon.getDurability()) {
        _durability = true;
    }
    if (getStatBonus() == _weapon.getStatBonus()) {
        _bonus = true;
    }
    if (getWeight() == _weapon.getWeight()) {
        _weight = true;
    }
    if (getAccuracy() == _weapon.getAccuracy()) {
        _accuracy = true;
    }
    if (getDamage() == _weapon.getDamage()) {
        _damage = true;
    }

    if (_accuracy && _damage && _durability && _bonus && _weight) {
        equals = true;
    }
    else if (_accuracy && _damage && _bonus && _weight) {
        equals = true;
    }
    else if (_accuracy && _damage && _bonus) {
        equals = true;
    }
    else {
        equals = false;
    }

    return equals;
}

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
