#include "Player.h"
#include <iostream>
#include <limits> 


Player::Player(std::string name, unsigned int level, Race race, bool friendly)
	: Character(name, level, race, friendly)
{
}



void Player::chooseName() {
	std::string answer = Iuvo::GetValidatedString_255("Please enter your name: ");
	setName(answer);
}

void Player::chooseRace() {
	std::cout << "Race Options:" << std::endl;
	std::cout << "1. Goblin" << std::endl;
	std::cout << "2. Kobold" << std::endl;
	std::cout << "3. Human" << std::endl;

	// Add other race options here
	int choice = Iuvo::GetValidatedInt("Enter your choice: ", 0, 4);
	switch (choice) {
	case 1:
		race = GOBLIN;
		setRace(race);
		ApplyRaceStats(race);
		break;
	case 2:
		race = KOBOLD;
		setRace(race);
		ApplyRaceStats(race);
		break;
	case 3:
		race = HUMAN;
		setRace(race);
		ApplyRaceStats(race);
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
