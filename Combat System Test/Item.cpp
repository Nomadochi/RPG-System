#include "Item.h"
#include <fstream>

Item::Item(std::string name, std::string type, int value, std::string description)
    : name(name), type(type), value(value), description(description) {}

Item::~Item() {}

std::string Item::getName() const {
    return name;
}

std::string Item::getType() const {
    return type;
}

int Item::getValue() const {
    return value;
}

std::string Item::getDescription() const {
    return description;
}

void Item::setName(std::string name) {
    this->name = name;
}

void Item::setType(std::string type) {
    this->type = type;
}

void Item::setValue(int value) {
    this->value = value;
}

void Item::setDescription(std::string description) {
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
