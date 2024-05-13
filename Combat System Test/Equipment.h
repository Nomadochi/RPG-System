#pragma once
#include "Item.h"

class Equipment : public Item {
private:
	const char* description;
	unsigned int durability;
	unsigned int statBonus;
	unsigned int weight;

public:
	Equipment(const char* name, const char* type, int value, const char* description,
		unsigned int durability, unsigned int statBonus, unsigned int weight);
	~Equipment();

	const char* getDescription() const;
	unsigned int getDurability() const;
	unsigned int getStatBonus() const;
	unsigned int getWeight() const;

	void setDescription(const char* description);
	void setDurability(unsigned int durability);
	void setStatBonus(unsigned int statBonus);
	void setWeight(unsigned int weight);

	void Display() const override;
};
