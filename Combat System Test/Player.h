#pragma once
#include "Character.h"
#include "Item.h"
#include <vector>

class Player : public Character {
private:
	static Player* instance;
	std::vector<Item*> inventory;
	std::vector<Item*> equipment;

public:
	Player(const char* name, unsigned int level, unsigned int currentExperience, unsigned int nextLevelExperience,
		unsigned int currentHealth, unsigned int maxHealth, unsigned int attack, unsigned int defense,
		unsigned int speed, unsigned int luck, unsigned int specialAttack, unsigned int specialDefense,
		Race race);

	static Player* getInstance();

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

