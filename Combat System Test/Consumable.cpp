#include "Consumable.h"
#include <iostream>

Consumable::Consumable(const char* name, const char* type, int value, const char* description, const char* effect)
    : Item(name, type, value, description), effect(effect) {}

Consumable::~Consumable() {}

const char* Consumable::getEffect() const {
    return effect;
}

void Consumable::setEffect(const char* effect) {
    this->effect = effect;
}

void Consumable::Display() const {
    std::cout << "Name: " << Name() << std::endl;
    std::cout << "Type: " << Type() << std::endl;
    std::cout << "Value: " << Value() << std::endl;
    std::cout << "Description: " << Description() << std::endl;
    std::cout << "Effect: " << effect << std::endl;
}
