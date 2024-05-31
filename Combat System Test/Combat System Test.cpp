#include "Item.h"
#include "Consumable.h"
#include "Equipment.h"
#include "Weapon.h"
#include "Armor.h"
#include "Entity.h"
#include "Character.h"
#include "Player.h"
#include "Ally.h"
#include "StatBlock.h"

int main()
{
	std::cout << "Hello World!\n\n";
	Iuvo::PressAnyKeyToContinue();
	std::cout << std::endl;
	std::cout << std::endl;

	Weapon* weapon = new Weapon("Shadow's Edge", "Weapon", 250, "A medium length dagger composed of a dark shadowy material. It gives of a chilling presence...", 100, 25, 5, 95, 35);
	Armor* helmet = new Armor("Iron Cap", "Armor", 30, "A simple helm made of iron", 65, 3, 7,10, ArmorSlot::HEAD);
	Armor* arms = new Armor("Chainmail Bracers", "Armor", 30, "Iron links woven together to create a light but defensible arm protection.", 75, 5, 5, 7, ArmorSlot::ARMS);
	Armor* chest = new Armor("Leather Chestplate", "Armor", 100, "A protective chest piece woven together from the skin of various creatures, harden over long exposure to heat.", 92, 8, 7, 15, ArmorSlot::CHEST);
	Armor* legs = new Armor("Pressed Aluminum Boots", "Armor", 15, "Made from molten aluminum pressed into a mold. They are light yet durable.", 85, 4, 2, 5, ArmorSlot::LEGS);

	Player newPlayer("Nomad", 1, Character::Race::KOBOLD, false);


	newPlayer.AddToInventory(weapon);
	newPlayer.AddToInventory(helmet);
	newPlayer.AddToInventory(arms);
	newPlayer.AddToInventory(chest);
	newPlayer.AddToInventory(legs);
	Iuvo::PressAnyKeyToContinue();
	Iuvo::ClearConsole();
	newPlayer.displayInventory();
	Iuvo::PressAnyKeyToContinue();
	Iuvo::ClearConsole();

	newPlayer.Display();
	Iuvo::PressAnyKeyToContinue();
	Iuvo::ClearConsole();

	newPlayer.AutoEquipFromInventory();
	newPlayer.Display();
	Iuvo::PressAnyKeyToContinue();
	Iuvo::ClearConsole();

	Character AngryKobold("Kris the Kobold", 3, Character::Race::KOBOLD, false);




}