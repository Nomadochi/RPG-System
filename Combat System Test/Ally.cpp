#include "Ally.h"

Ally::Ally(const char* name, unsigned int level, unsigned int currentExperience, unsigned int nextLevelExperience,
    unsigned int currentHealth, unsigned int maxHealth, unsigned int attack, unsigned int defense,
    unsigned int speed, unsigned int luck, unsigned int specialAttack, unsigned int specialDefense,
    Race race)
    : Player(name, level, currentExperience, nextLevelExperience, currentHealth, maxHealth, attack, defense, speed,
        luck, specialAttack, specialDefense, race) {}

void Ally::OnLevelUp() {
    // Implementation of OnLevelUp function for ally
}
