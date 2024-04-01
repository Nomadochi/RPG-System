#pragma once

class Entity {
protected:
    const char* name;
    unsigned int level;
    unsigned int currentExperience;
    unsigned int nextLevelExperience;
    unsigned int currentHealth;
    unsigned int maxHealth;
    unsigned int attack;
    unsigned int defense;
    unsigned int speed;
    unsigned int luck;
    unsigned int specialAttack;
    unsigned int specialDefense;
    bool IsHostile;

public:
    Entity(const char* name, unsigned int level, unsigned int currentExperience, unsigned int nextLevelExperience,
        unsigned int currentHealth, unsigned int maxHealth, unsigned int attack, unsigned int defense,
        unsigned int speed, unsigned int luck, unsigned int specialAttack, unsigned int specialDefense);

    virtual ~Entity();

    virtual void Attack(Entity& target);
    virtual void Parry(Entity& target);
    virtual void Dodge(Entity& target);
    virtual void Block(Entity& target);
    virtual void Backpack();

    virtual void OnLevelUp();

    // Getters
    const char* getName() const;
    unsigned int getLevel() const;
    unsigned int getCurrentExperience() const;
    unsigned int getNextLevelExperience() const;
    unsigned int getCurrentHealth() const;
    unsigned int getMaxHealth() const;
    unsigned int getAttack() const;
    unsigned int getDefense() const;
    unsigned int getSpeed() const;
    unsigned int getLuck() const;
    unsigned int getSpecialAttack() const;
    unsigned int getSpecialDefense() const;
    bool getIsHostile() const;

    // Setters
    void setName(const char* name);
    void setLevel(unsigned int level);
    void setCurrentExperience(unsigned int currentExperience);
    void setNextLevelExperience(unsigned int nextLevelExperience);
    void setCurrentHealth(unsigned int currentHealth);
    void setMaxHealth(unsigned int maxHealth);
    void setAttack(unsigned int attack);
    void setDefense(unsigned int defense);
    void setSpeed(unsigned int speed);
    void setLuck(unsigned int luck);
    void setSpecialAttack(unsigned int specialAttack);
    void setSpecialDefense(unsigned int specialDefense);
    void setIsHostile(bool IsHostile);

    virtual void Display() const = 0;

    void Serialize(const char* filename) const;
    void Deserialize(const char* filename);
};
