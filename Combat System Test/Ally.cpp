#include "Ally.h"

Ally::Ally(std::string name, unsigned int level, Race race, bool friendly)
    : Player(name, level, race, friendly) {}

void Ally::OnLevelUp() {
    // Implementation of OnLevelUp function for ally
}
