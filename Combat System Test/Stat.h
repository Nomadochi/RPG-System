#pragma once
#include <iostream>

class Stat
{
public:

	Stat();
	Stat(int _value, int _buff = 0, int _debuff = 0, std::string _name = "");
	Stat operator+(const Stat& _factor);
	Stat operator-(const Stat& _factor);
	Stat operator*(const Stat& _factor);
	Stat operator/(const Stat& _factor);
	Stat operator=(const Stat& _factor);



	std::string GetName() const;
	void SetName(std::string _name);
	int GetValue();
	void SetValue(int _value);
	void SetValue(float _value);
	void IncreaseValue(int _value);
	void IncreaseValue(float _value);
	void DereaseValue(int _value);
	void DecreaseValue(float _value);
	int GetBuff();
	void SetBuff(int _buff);	
	void ApplyBuff();
	void RemoveBuff();
	int GetDebuff();
	void SetDebuff(int _debuff);
	void ApplyDebuff();
	void RemoveDebuff();
	void Display();

private:
	std::string name;
	unsigned int value;
	unsigned int buff;
	unsigned int debuff;


};

