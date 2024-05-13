#pragma once
#include "Equipment.h"

class Weapon : public Equipment {
private:
	unsigned int accuracy;
	unsigned int damage;

public:
	Weapon(const char* name, const char* type, int value, const char* description,
		unsigned int durability, unsigned int statBonus, unsigned int weight,
		unsigned int accuracy, unsigned int damage);
	~Weapon();

	unsigned int getAccuracy() const;
	unsigned int getDamage() const;

	void setAccuracy(unsigned int accuracy);
	void setDamage(unsigned int damage);

	void Display() const override;
};

