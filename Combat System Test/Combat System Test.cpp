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
	std::cout << "Hello World!\n";

	//// Instantiate objects of every class
	//Consumable potion("Health Potion", "Consumable", 10, "Restores health points", "Restore 50 HP");
	//Weapon sword("Iron Sword", "Weapon", 20, "A sturdy sword made of iron", 100, 5, 10, 80, 50);
	//Armor helmet("Iron Helmet", "Armor", 15, "Protects the head", 80, 5, 15, 30, ArmorSlot::HEAD);
	//Player player("Player1", 1, 0, 100, 100, 100, 10, 10, 10, 10, 10, 10, Character::HUMAN);
	//Ally ally("Ally1", 1, 0, 100, 100, 100, 10, 10, 10, 10, 10, 10, Character::HUMAN);
	//Character character("NPC", 1, 0, 100, 100, 100, 10, 10, 10, 10, 10, 10, Character::GOBLIN);

	//potion.Display();
	//std::cout << std::endl;

	//sword.Display();
	//std::cout << std::endl;

	//helmet.Display();
	//std::cout << std::endl;


	//// Serialize objects derived from Item into one file
	//potion.Serialize("items.bin");
	//sword.Serialize("items.bin");
	//helmet.Serialize("items.bin");

	//player.Display();
	//std::cout << std::endl;

	//ally.Display();
	//std::cout << std::endl;

	//character.Display();
	//std::cout << std::endl;



	//// Serialize objects derived from Entity into another file
	//player.Serialize("entities.bin");
	//ally.Serialize("entities.bin");
	//character.Serialize("entities.bin");


	std::cout << std::endl;

	//example.DisplayStats();


}