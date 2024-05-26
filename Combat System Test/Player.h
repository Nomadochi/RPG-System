#pragma once
#include "Character.h"
#include "Item.h"
#include <vector>
#include "Armor.h"
#include "Weapon.h"

class Player : public Character {
private:
	std::vector<Item*> inventory;
	std::vector<Equipment*> equipment;
	Armor* headpiece = nullptr;
	Armor* chest = nullptr;
	Armor* arms = nullptr;
	Armor* legs = nullptr;
	Weapon* weapon = nullptr;

public:
	Player(std::string name, unsigned int level, Race race, bool friendly);

	void AddToInventory(Item* _thing);
	void RemoveFromInventory(Item* _thing);
	void EquipFromInventory();
	void AutoEquipFromInventory();
	void ConvertEquipmentStats();

	void chooseName();
	void chooseRace();
	void displayInventory() const;

	void SetHeadPiece(Armor& _head);
	void RemoveHeadPiece();

	void SetChestPiece(Armor& _chest);
	void RemoveChestPiece();

	void SetArmPiece(Armor& _arms);
	void RemoveArmpiece();

	void SetLegPiece(Armor& _legs);
	void RemoveLegPiece();

	void SetWeapon(Weapon& _weapon);
	void RemoveWeapon();

	// Override OnLevelUp
	void OnLevelUp() override;

	// Getters for inventory and equipment
	const std::vector<Item*>& getInventory() const;
	const std::vector<Equipment*>& getEquipment() const;
};

