#pragma once
#include "Character.h"
#include "Item.h"
#include <vector>

class Player : public Character {
private:
	std::vector<Item*> inventory;
	std::vector<Item*> equipment;

public:
	Player(std::string name, unsigned int level, unsigned int currentHealth, unsigned int maxHealth, StatBlock _stats, bool friendly, Race race);


	void chooseName();
	void chooseRace();
	void equipItem(Item* item);
	void displayInventory() const;

	// Override OnLevelUp
	void OnLevelUp() override;

	// Getters for inventory and equipment
	const std::vector<Item*>& getInventory() const;
	const std::vector<Item*>& getEquipment() const;
};

