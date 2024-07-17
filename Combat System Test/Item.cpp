#include "Item.h"
#include <fstream>

Item::Item() 
{
    m_name = "broken";
    m_type = "broken";
    m_value = 0;
    m_description = "broken";
}

Item::Item(std::string name, std::string type, int value, std::string description)
    : m_name(name), m_type(type), m_value(value), m_description(description)
{

}

Item::~Item() 
{

}

std::string Item::Name() const {
    return m_name;
}

std::string Item::Type() const {
    return m_type;
}

int Item::Value() const {
    return m_value;
}

std::string Item::Description() const {
    return m_description;
}

void Item::SetName(std::string name) {
    m_name = name;
}

void Item::SetType(std::string type) {
    m_type = type;
}

void Item::SetValue(int value) {
    m_value = value;
}

void Item::SetDescription(std::string description) {
    m_description = description;
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
