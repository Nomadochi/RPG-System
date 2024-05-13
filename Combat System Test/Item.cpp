#include "Item.h"
#include <fstream>

Item::Item(const char* name, const char* type, int value, const char* description)
    : name(name), type(type), value(value), description(description) {}

Item::~Item() {}

const char* Item::getName() const {
    return name;
}

const char* Item::getType() const {
    return type;
}

int Item::getValue() const {
    return value;
}

const char* Item::getDescription() const {
    return description;
}

void Item::setName(const char* name) {
    this->name = name;
}

void Item::setType(const char* type) {
    this->type = type;
}

void Item::setValue(int value) {
    this->value = value;
}

void Item::setDescription(const char* description) {
    this->description = description;
}

void Item::Serialize(const char* filename) const {
    std::ofstream file(filename, std::ios::binary);
    file.write(reinterpret_cast<const char*>(this), sizeof(*this));
    file.close();
}

void Item::Deserialize(const char* filename) {
    std::ifstream file(filename, std::ios::binary);
    file.read(reinterpret_cast<char*>(this), sizeof(*this));
    file.close();
}
