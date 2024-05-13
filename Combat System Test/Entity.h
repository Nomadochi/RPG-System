#pragma once
#include "StatBlock.h"
#include "Level.h"
#include <string>

class Entity {
protected:
    std::string name;
    Level level;
    unsigned int currentHealth;
    unsigned int maxHealth;
    StatBlock stats;
    bool IsHostile;

public:
    Entity(std::string name, unsigned int level, unsigned int currentHealth, unsigned int maxHealth, StatBlock stats, bool isHostile);

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
    unsigned int getCurrentHealth() const;
    unsigned int getMaxHealth() const;
    bool getIsHostile() const;

    // Setters
    void setName(std::string& _name);
    void setCurrentHealth(unsigned int currentHealth);
    void setMaxHealth(unsigned int maxHealth);
    void setIsHostile(bool IsHostile);

    virtual void Display() = 0;

    void Serialize(const char* filename) const;
    void Deserialize(const char* filename);
};
