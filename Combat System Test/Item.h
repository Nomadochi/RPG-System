#pragma once
#include <iostream>
#include "Iuvo.h"

class Item {
protected:
	std::string m_name;
	std::string m_type;
	int m_value;
	std::string m_description;

public:
	Item();
	Item(std::string name, std::string type, int value, std::string description);
	virtual ~Item();

	// Getters
	std::string Name() const;
	std::string Type() const;
	int Value() const;
	std::string Description() const;

	// Setters
	void SetName(std::string name);
	void SetType(std::string type);
	void SetValue(int value);
	void SetDescription(std::string description);

	virtual void Display() const = 0;

	void Serialize(const char* filename) const;
	void Deserialize(const char* filename);
};
