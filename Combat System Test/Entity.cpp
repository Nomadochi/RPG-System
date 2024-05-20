#include "Entity.h"
#include <fstream>

Entity::Entity()
    : name(""), level(5), IsHostile(false)
{

}


Entity::Entity(std::string _name, unsigned int _level, bool isHostile)
    : name(_name), level(_level), IsHostile(false)
{
}

Entity::~Entity() {}

void Entity::Attack(Entity& target) {
    // Implementation of Attack function


    //get the users weapon stats and attack stats 

    //get the defendant's health, armor, and defensive stats

    // create a variable for the amount of damage to apply

    // create a variable to combine the defenisve stas and attack stats

    //subtract that second variable from the defendants health IF the attack lands

}

void Entity::SpecialAttack(Entity& target)
{

    //get the users weapon stats and attack stats 

    //get the defendant's health, armor, and defensive stats

    // create a variable for the amount of damage to apply

    // create a variable to combine the defenisve stas and attack stats

    //subtract that second variable from the defendants health IF the attack lands
}

void Entity::Parry(Entity& target) {
    // Implementation of Parry function
}

void Entity::Dodge(Entity& target) {
    // Implementation of Dodge function
}

void Entity::Block(Entity& target) {
    // Implementation of Block function


    // if the target is attacking do this
    
    // get the users weapon stats and attack stats 

    // get the defendant's health, armor, and defensive stats

    // create a variable for the amount of damage to apply

    // create a variable to combine the defenisve stas and attack stats

    // subtract that second variable from the defendants health IF the attack lands

    // if the target was not attacking, nothing happens

}

void Entity::Support(Entity& target)
{

    //get the users weapon stats and attack stats 

    //get the target's health, armor, and defensive stats

    // create a variable for the amount of support to apply

    // create a variable to combine the defenisve stats and support stats

    //apply the support of the second variable to the target's stats IF the support suceeds
}

void Entity::Backpack() {
    // Implementation of Backpack function
}

void Entity::OnLevelUp() {
    // Implementation of OnLevelUp function
}

std::string Entity::GetName() const {
    return name;
}

bool Entity::getIsHostile() const {
    return IsHostile;
}

void Entity::setName(std::string& _name) {
    name = _name;
}

void Entity::setIsHostile(bool IsHostile) {
    this->IsHostile = IsHostile;
}

void Entity::Serialize(const char* filename) const {
    std::ofstream file(filename, std::ios::binary);
    file.write(reinterpret_cast<const char*>(this), sizeof(*this));
    file.close();
}

void Entity::Deserialize(const char* filename) {
    std::ifstream file(filename, std::ios::binary);
    file.read(reinterpret_cast<char*>(this), sizeof(*this));
    file.close();
}
