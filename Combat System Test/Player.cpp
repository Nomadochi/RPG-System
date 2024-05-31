#include "Player.h"
#include <iostream>
#include <limits> 


Player::Player(std::string name, unsigned int level, Race race, bool friendly)
	: Character(name, level, race, friendly)
{
	Entity::level.SetCurrentExperience(0);
	Entity::level.SetNextLevelExperience(100);

	equipment.push_back(headpiece);
	equipment.push_back(chest);
	equipment.push_back(arms);
	equipment.push_back(legs);
	equipment.push_back(weapon);

}

void Player::AddToInventory(Item* _thing)
{
	inventory.push_back(_thing);
	std::cout << _thing->getName() << " added to inventory." << std::endl;
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
	if (Weapon* newWeapon = dynamic_cast<Weapon*>(toEquip)) {
		SetWeapon(*newWeapon);
		std::cout << newWeapon->getName() << " was equipped as your weapon." << std::endl;
		ConvertEquipmentStats(toEquip);
	}
	if (Armor* newArmor = dynamic_cast<Armor*>(toEquip)) {
		if (newArmor->getArmorSlot() == HEAD) {
			SetHeadPiece(*newArmor);
			std::cout << newArmor->getName() << " was equipped in your HEAD Armor slot." << std::endl;
			ConvertEquipmentStats(toEquip);
		}
		else if (newArmor->getArmorSlot() == CHEST) {
			SetChestPiece(*newArmor);
			std::cout << newArmor->getName() << " was equipped in your CHEST Armor slot." << std::endl;
			ConvertEquipmentStats(toEquip);
		}
		else if (newArmor->getArmorSlot() == ARMS) {
			SetArmPiece(*newArmor);
			std::cout << newArmor->getName() << " was equipped in your ARMS Armor slot." << std::endl;
			ConvertEquipmentStats(toEquip);
		}
		else if (newArmor->getArmorSlot() == LEGS) {
			SetLegPiece(*newArmor);
			std::cout << newArmor->getName() << " was equipped in your LEGS Armor slot." << std::endl;
			ConvertEquipmentStats(toEquip);
		}
	}
}

void Player::AutoEquipFromInventory()
{
	if (headpiece == nullptr) {
		for (int i = 0; i < inventory.size(); i++) {
			if (Armor* newArmor = dynamic_cast<Armor*>(inventory[i])) {
				if (newArmor->getArmorSlot() == HEAD) {
					SetHeadPiece(*newArmor);
					ConvertEquipmentStats(inventory[i]);
					break;
				}
			}
		}
	}
	else if (headpiece != nullptr) {
		for (int i = 0; i < inventory.size(); i++) {
			if (Armor* newArmor = dynamic_cast<Armor*>(inventory[i])) {
				if (newArmor->getArmorSlot() == HEAD) {
					if (headpiece < newArmor) {
						SetHeadPiece(*newArmor);
						ConvertEquipmentStats(inventory[i]);
						break;
					}
				}
			}
		}
	}

	if (chest == nullptr) {
		for (int i = 0; i < inventory.size(); i++) {
			if (Armor* newArmor = dynamic_cast<Armor*>(inventory[i])) {
				if (newArmor->getArmorSlot() == CHEST) {
					SetHeadPiece(*newArmor);
					ConvertEquipmentStats(inventory[i]);
					break;
				}
			}
		}
	}
	else if (chest != nullptr) {
		for (int i = 0; i < inventory.size(); i++) {
			if (Armor* newArmor = dynamic_cast<Armor*>(inventory[i])) {
				if (newArmor->getArmorSlot() == CHEST) {
					if (chest < newArmor) {
						SetHeadPiece(*newArmor);
						ConvertEquipmentStats(inventory[i]);
						break;
					}
				}
			}
		}
	}

	if (arms == nullptr) {
		for (int i = 0; i < inventory.size(); i++) {
			if (Armor* newArmor = dynamic_cast<Armor*>(inventory[i])) {
				if (newArmor->getArmorSlot() == ARMS) {
					SetHeadPiece(*newArmor);
					ConvertEquipmentStats(inventory[i]);
					break;
				}
			}
		}
	}
	else if (arms != nullptr) {
		for (int i = 0; i < inventory.size(); i++) {
			if (Armor* newArmor = dynamic_cast<Armor*>(inventory[i])) {
				if (newArmor->getArmorSlot() == ARMS) {
					if (headpiece < newArmor) {
						SetHeadPiece(*newArmor);
						ConvertEquipmentStats(inventory[i]);
						break;
					}
				}
			}
		}
	}

	if (legs == nullptr) {
		for (int i = 0; i < inventory.size(); i++) {
			if (Armor* newArmor = dynamic_cast<Armor*>(inventory[i])) {
				if (newArmor->getArmorSlot() == LEGS) {
					SetHeadPiece(*newArmor);
					ConvertEquipmentStats(inventory[i]);
					break;
				}
			}
		}
	}
	else if (legs != nullptr) {
		for (int i = 0; i < inventory.size(); i++) {
			if (Armor* newArmor = dynamic_cast<Armor*>(inventory[i])) {
				if (newArmor->getArmorSlot() == LEGS) {
					if (headpiece < newArmor) {
						SetHeadPiece(*newArmor);
						ConvertEquipmentStats(inventory[i]);
						break;
					}
				}
			}
		}
	}

	if (weapon == nullptr) {
		for (int i = 0; i < inventory.size(); i++) {
			if (Weapon* newWeapon = dynamic_cast<Weapon*>(inventory[i])) {
				SetWeapon(*newWeapon);
				ConvertEquipmentStats(inventory[i]);
				break;
			}
		}
	}
	else if (weapon != nullptr) {
		for (int i = 0; i < inventory.size(); i++) {
			if (Weapon* newWeapon = dynamic_cast<Weapon*>(inventory[i])) {
				if (weapon < newWeapon) {
					SetWeapon(*newWeapon);
					ConvertEquipmentStats(inventory[i]);
					break;
				}
			}
		}
	}


	// Check each equipment slot
	//If equipment slot is empty, search the inventory for something that fits that slot

	//Equip the item that fits that slot

	//if equipment slot is not empty, get the equipped item's stats

	// compare the equpped items stats to every other item of the same slot in the inventory

	// if equipped is worse, equip the better one, if not do nothing

}

void Player::ConvertEquipmentStats(Item* thing)
{
	if (Weapon* newWeapon = dynamic_cast<Weapon*>(thing)) {
		int attackBonus = newWeapon->getStatBonus();
		stats.attack.IncreaseValue(attackBonus);
	}
	if (Armor* newArmor = dynamic_cast<Armor*>(thing)) {
		if (newArmor->getArmorSlot() == HEAD) {
			int defenseBonus = newArmor->getStatBonus();
			stats.defense.IncreaseValue(defenseBonus);
		}
		else if (newArmor->getArmorSlot() == CHEST) {
			int defenseBonus = newArmor->getStatBonus();
			stats.defense.IncreaseValue(defenseBonus);
		}
		else if (newArmor->getArmorSlot() == ARMS) {
			int defenseBonus = newArmor->getStatBonus();
			stats.defense.IncreaseValue(defenseBonus);

		}
		else if (newArmor->getArmorSlot() == LEGS) {
			int defenseBonus = newArmor->getStatBonus();
			stats.defense.IncreaseValue(defenseBonus);

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
	if (headpiece != nullptr) {
		RemoveHeadPiece();
	}
	if (_head.getArmorSlot() == ArmorSlot::HEAD) {
		headpiece = &_head;
		ConvertEquipmentStats((Item*)&_head);
	}
}

void Player::RemoveHeadPiece()
{
	int bonus = headpiece->getStatBonus();
	stats.defense.DecreaseValue(bonus);
	headpiece = nullptr;
}

void Player::SetChestPiece(Armor& _chest)
{
	if (chest != nullptr) {
		RemoveChestPiece();
	}
	if (_chest.getArmorSlot() == ArmorSlot::CHEST) {
		chest = &_chest;
		ConvertEquipmentStats((Item*)&_chest);

	}
}

void Player::RemoveChestPiece()
{
	int bonus = chest->getStatBonus();
	stats.defense.DecreaseValue(bonus);
	chest = nullptr;
}

void Player::SetArmPiece(Armor& _arms)
{
	if (arms != nullptr) {
		RemoveArmpiece();
	}
	if (_arms.getArmorSlot() == ArmorSlot::ARMS) {
		arms = &_arms;
		ConvertEquipmentStats((Item*)&_arms);

	}
}

void Player::RemoveArmpiece()
{
	int bonus = arms->getStatBonus();
	stats.defense.DecreaseValue(bonus);
	arms = nullptr;
}

void Player::SetLegPiece(Armor& _legs)
{
	if (legs != nullptr) {
		RemoveLegPiece();
	}
	if (_legs.getArmorSlot() == ArmorSlot::LEGS) {
		legs = &_legs;
		ConvertEquipmentStats((Item*)&_legs);

	}
}

void Player::RemoveLegPiece()
{
	int bonus = legs->getStatBonus();
	stats.defense.DecreaseValue(bonus);
	legs = nullptr;
}

void Player::SetWeapon(Weapon& _weapon)
{
	weapon = &_weapon;
	ConvertEquipmentStats((Item*)&_weapon);

}

void Player::RemoveWeapon()
{
	int bonus = weapon->getStatBonus();
	stats.attack.DecreaseValue(bonus);
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
