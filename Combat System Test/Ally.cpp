#include "Ally.h"

Ally::Ally(std::string name, unsigned int level, unsigned int currentHealth, unsigned int maxHealth, StatBlock _stats, bool friendly, Race race)
    : Player(name, level, currentHealth, maxHealth, _stats, friendly, race) {}

void Ally::OnLevelUp() {
    // Implementation of OnLevelUp function for ally
}
