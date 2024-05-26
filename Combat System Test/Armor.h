#pragma once
#include "Equipment.h"

enum ArmorSlot { HEAD, CHEST, ARMS, LEGS };

class Armor : public Equipment {
private:
	unsigned int defense;
	ArmorSlot armorSlot;

public:

	Armor(std::string name, std::string type, int value, std::string description,
		unsigned int durability, unsigned int statBonus, unsigned int weight,
		unsigned int defense, ArmorSlot armorSlot);
	~Armor();

	unsigned int getDefense() const;
	ArmorSlot getArmorSlot() const;

	void setDefense(unsigned int defense);
	void setArmorSlot(ArmorSlot armorSlot);

	void Display() const override;
};


