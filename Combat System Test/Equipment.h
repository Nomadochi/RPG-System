#pragma once
#include "Item.h"

class Equipment : public Item {
private:
	unsigned int durability;
	unsigned int statBonus;
	unsigned int weight;

public:
	Equipment(std::string name, std::string type, int value, std::string description,
		unsigned int durability, unsigned int statBonus, unsigned int weight);
	~Equipment();

	unsigned int getDurability() const;
	unsigned int getStatBonus() const;
	unsigned int getWeight() const;

	void setDurability(unsigned int durability);
	void setStatBonus(unsigned int statBonus);
	void setWeight(unsigned int weight);

	void Display() const override;
};
