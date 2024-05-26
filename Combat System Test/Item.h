#pragma once
#include <iostream>
#include "Iuvo.h"

class Item {
protected:
	std::string name;
	std::string type;
	int value;
	std::string description;

public:
	Item(std::string name, std::string type, int value, std::string description);
	virtual ~Item();

	// Getters
	std::string getName() const;
	std::string getType() const;
	int getValue() const;
	std::string getDescription() const;

	// Setters
	void setName(std::string name);
	void setType(std::string type);
	void setValue(int value);
	void setDescription(std::string description);

	virtual void Display() const = 0;

	void Serialize(const char* filename) const;
	void Deserialize(const char* filename);
};
