#pragma once
#include "StatBlock.h"
#include "Level.h"
#include <string>
#include "Health.h"

class Entity {
protected:
    std::string name;
    Level level;
    StatBlock stats;
    bool IsHostile;
    Health health;

public:
    Entity();
    Entity(std::string name, unsigned int level, bool isHostile = false);   
    virtual ~Entity();

    virtual void Attack(Entity& target);
    virtual void SpecialAttack(Entity& target);
    virtual void Parry(Entity& target);
    virtual void Dodge(Entity& target);
    virtual void Block(Entity& target);
    virtual void Support(Entity& target);
    virtual void Backpack();
    virtual void OnLevelUp();

    // Getters
    std::string GetName() const;
    bool getIsHostile() const;

    // Setters
    void setName(std::string& _name);
    void setIsHostile(bool IsHostile);
    virtual void Display() = 0;
    void Serialize(const char* filename) const;
    void Deserialize(const char* filename);
};
