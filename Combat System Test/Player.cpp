#include "Player.h"
#include <iostream>
#include <limits> 


Player::Player(std::string name, unsigned int level, Race race, bool friendly)
	: Character(name, level, race, friendly)
{
	Entity::level.SetCurrentExperience(0);
	Entity::level.SetCurrentExperience(0);

	equipment.push_back(headpiece);
	equipment.push_back(chest);
	equipment.push_back(arms);
	equipment.push_back(legs);
	equipment.push_back(weapon);

}

void Player::AddToInventory(Item* _thing)
{
	inventory.push_back(_thing);
}

void Player::RemoveFromInventory(Item* _thing)
{
	bool found = false;
	for (auto thing : inventory) {
		if (_thing == thing) {
			found = true;
		}
	}
	if (found) {
		for (auto iter = inventory.begin(); iter != inventory.end(); ) {
			if (*iter == _thing) {
				iter = inventory.erase(iter);
			}
			iter++;
		}
	}
}

void Player::EquipFromInventory()
{
	displayInventory();
	int choice = -1 + Iuvo::GetValidatedInt("Enter the number of the item you would like to equip:", -1, inventory.size());
	Item* toEquip = inventory[choice];
	if (Weapon* newWeapon = dynamic_cast<Weapon*>(toEquip)){
		SetWeapon(*newWeapon);
		std::cout << newWeapon->getName() << " was equipped as your weapon." << std::endl;
	}
	if (Armor* newArmor = dynamic_cast<Armor*>(toEquip)) {
		if (newArmor->getArmorSlot() == HEAD) {
			SetHeadPiece(*newArmor);
			std::cout << newArmor->getName() << " was equipped in your HEAD Armor slot." << std::endl;
		}
		else if (newArmor->getArmorSlot() == CHEST) {
			SetChestPiece(*newArmor);
			std::cout << newArmor->getName() << " was equipped in your CHEST Armor slot." << std::endl;
		}
		else if (newArmor->getArmorSlot() == ARMS) {
			SetArmPiece(*newArmor);
			std::cout << newArmor->getName() << " was equipped in your ARMS Armor slot." << std::endl;
		}
		else if (newArmor->getArmorSlot() == LEGS) {
			SetLegPiece(*newArmor);
			std::cout << newArmor->getName() << " was equipped in your LEGS Armor slot." << std::endl;
		}	
	}	
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
	std::cout << "\n";
}

void Player::displayInventory() const {
	if (inventory.size() == 0) {
		std::cout << "There is nothing in the inventory.\n" << std::endl;
	}

	int x = 1;
	for (const auto& thing : inventory)
	{
		std::cout << "\n";
		std::cout << "Item #" << x << std::endl;
		thing->Display();
		x++;
	}
}

void Player::SetHeadPiece(Armor& _head)
{
	if (_head.getArmorSlot() == ArmorSlot::HEAD) {
		headpiece = &_head;
	}
}

void Player::RemoveHeadPiece()
{
	headpiece = nullptr;
}

void Player::SetChestPiece(Armor& _chest)
{
	if (_chest.getArmorSlot() == ArmorSlot::CHEST) {
		chest = &_chest;
	}
}

void Player::RemoveChestPiece()
{
	chest = nullptr;
}

void Player::SetArmPiece(Armor& _arms)
{
	if (_arms.getArmorSlot() == ArmorSlot::ARMS) {
		arms = &_arms;
	}
}

void Player::RemoveArmpiece()
{
	arms = nullptr;
}

void Player::SetLegPiece(Armor& _legs)
{
	if (_legs.getArmorSlot() == ArmorSlot::LEGS) {
		legs = &_legs;
	}
}

void Player::RemoveLegPiece()
{
	legs = nullptr;
}

void Player::SetWeapon(Weapon& _weapon)
{
	weapon = &_weapon;
}

void Player::RemoveWeapon()
{
	weapon = nullptr;
}

void Player::OnLevelUp() {
	// Implementation of OnLevelUp function for player
}

const std::vector<Item*>& Player::getInventory() const {
	return inventory;
}

const std::vector<Equipment*>& Player::getEquipment() const {
	return equipment;
}
