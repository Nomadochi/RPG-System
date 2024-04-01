#include "Player.h"
#include <iostream>
#include <limits> 

Player* Player::instance = nullptr;

Player::Player(const char* name, unsigned int level, unsigned int currentExperience, unsigned int nextLevelExperience,
	unsigned int currentHealth, unsigned int maxHealth, unsigned int attack, unsigned int defense,
	unsigned int speed, unsigned int luck, unsigned int specialAttack, unsigned int specialDefense,
	Race race)
	: Character(name, level, currentExperience, nextLevelExperience, currentHealth, maxHealth, attack, defense, speed,
		luck, specialAttack, specialDefense, race) {}

Player* Player::getInstance() {
	if (!instance) {
		instance = new Player("Default", 1, 0, 100, 100, 100, 10, 10, 10, 10, 10, 10, HUMAN);
	}
	return instance;
}

void Player::chooseName() {
	const int BUFFER_SIZE = 256; // Adjust the buffer size as needed
	char input[BUFFER_SIZE];

	bool isValid = false;

	do {
		std::cout << "Enter your name: ";
		std::cin.getline(input, BUFFER_SIZE); // Read input directly into the char array

		// Check if input is empty
		if (input[0] == '\0') {
			std::cout << "Name cannot be empty. Please try again." << std::endl;
			continue;
		}

		// Check if input contains only alphabetical characters
		isValid = true;
		for (int i = 0; input[i] != '\0'; ++i) {
			if (!std::isalpha(input[i])) {
				isValid = false;
				break;
			}
		}

		if (!isValid) {
			std::cout << "Name must contain only alphabetical characters. Please try again." << std::endl;
		}

		// Clear input buffer
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	} while (!isValid);

	// Set the name
	setName(input);
}

void Player::chooseRace() {
	std::cout << "Choose your race:" << std::endl;
	std::cout << "1. Plant" << std::endl;
	std::cout << "2. Animal" << std::endl;
	// Add other race options here
	int choice;
	std::cin >> choice;
	switch (choice) {
	case 1:
		race = PLANT;
		break;
	case 2:
		race = ANIMAL;
		break;
		// Add other cases for different races
	default:
		std::cout << "Invalid choice. Defaulting to Human." << std::endl;
		race = HUMAN;
		break;
	}
}

void Player::equipItem(Item* item) {
	// Implementation to equip item
}

void Player::displayInventory() const {
	// Implementation to display inventory
}

void Player::OnLevelUp() {
	// Implementation of OnLevelUp function for player
}

const std::vector<Item*>& Player::getInventory() const {
	return inventory;
}

const std::vector<Item*>& Player::getEquipment() const {
	return equipment;
}
