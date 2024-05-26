#pragma once
#include "Equipment.h"

enum WeaponSlot{ LEFT_HAND, RIGHT_HAND, TWO_HAND};

class Weapon : public Equipment {
private:
	unsigned int accuracy;
	unsigned int damage;


public:
	Weapon(std::string name, std::string type, int value, std::string description,
		unsigned int durability, unsigned int statBonus, unsigned int weight,
		unsigned int accuracy, unsigned int damage);
	~Weapon();

	unsigned int getAccuracy() const;
	unsigned int getDamage() const;

	void setAccuracy(unsigned int accuracy);
	void setDamage(unsigned int damage);

	void Display() const override;
};

