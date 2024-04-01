#include "Entity.h"
#include <fstream>

Entity::Entity(const char* name, unsigned int level, unsigned int currentExperience, unsigned int nextLevelExperience,
    unsigned int currentHealth, unsigned int maxHealth, unsigned int attack, unsigned int defense,
    unsigned int speed, unsigned int luck, unsigned int specialAttack, unsigned int specialDefense)
    : name(name), level(level), currentExperience(currentExperience), nextLevelExperience(nextLevelExperience),
    currentHealth(currentHealth), maxHealth(maxHealth), attack(attack), defense(defense), speed(speed),
    luck(luck), specialAttack(specialAttack), specialDefense(specialDefense), IsHostile(false) {}

Entity::~Entity() {}

void Entity::Attack(Entity& target) {
    // Implementation of Attack function
}

void Entity::Parry(Entity& target) {
    // Implementation of Parry function
}

void Entity::Dodge(Entity& target) {
    // Implementation of Dodge function
}

void Entity::Block(Entity& target) {
    // Implementation of Block function
}

void Entity::Backpack() {
    // Implementation of Backpack function
}

void Entity::OnLevelUp() {
    // Implementation of OnLevelUp function
}

const char* Entity::getName() const {
    return name;
}

unsigned int Entity::getLevel() const {
    return level;
}

unsigned int Entity::getCurrentExperience() const {
    return currentExperience;
}

unsigned int Entity::getNextLevelExperience() const {
    return nextLevelExperience;
}

unsigned int Entity::getCurrentHealth() const {
    return currentHealth;
}

unsigned int Entity::getMaxHealth() const {
    return maxHealth;
}

unsigned int Entity::getAttack() const {
    return attack;
}

unsigned int Entity::getDefense() const {
    return defense;
}

unsigned int Entity::getSpeed() const {
    return speed;
}

unsigned int Entity::getLuck() const {
    return luck;
}

unsigned int Entity::getSpecialAttack() const {
    return specialAttack;
}

unsigned int Entity::getSpecialDefense() const {
    return specialDefense;
}

bool Entity::getIsHostile() const {
    return IsHostile;
}

void Entity::setName(const char* name) {
    this->name = name;
}

void Entity::setLevel(unsigned int level) {
    this->level = level;
}

void Entity::setCurrentExperience(unsigned int currentExperience) {
    this->currentExperience = currentExperience;
}

void Entity::setNextLevelExperience(unsigned int nextLevelExperience) {
    this->nextLevelExperience = nextLevelExperience;
}

void Entity::setCurrentHealth(unsigned int currentHealth) {
    this->currentHealth = currentHealth;
}

void Entity::setMaxHealth(unsigned int maxHealth) {
    this->maxHealth = maxHealth;
}

void Entity::setAttack(unsigned int attack) {
    this->attack = attack;
}

void Entity::setDefense(unsigned int defense) {
    this->defense = defense;
}

void Entity::setSpeed(unsigned int speed) {
    this->speed = speed;
}

void Entity::setLuck(unsigned int luck) {
    this->luck = luck;
}

void Entity::setSpecialAttack(unsigned int specialAttack) {
    this->specialAttack = specialAttack;
}

void Entity::setSpecialDefense(unsigned int specialDefense) {
    this->specialDefense = specialDefense;
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
