#pragma once
#include <iostream>

class Item {
protected:
	const char* name;
	const char* type;
	int value;
	const char* description;

public:
	Item(const char* name, const char* type, int value, const char* description);
	virtual ~Item();

	// Getters
	const char* getName() const;
	const char* getType() const;
	int getValue() const;
	const char* getDescription() const;

	// Setters
	void setName(const char* name);
	void setType(const char* type);
	void setValue(int value);
	void setDescription(const char* description);

	virtual void Display() const = 0;

	void Serialize(const char* filename) const;
	void Deserialize(const char* filename);
};
