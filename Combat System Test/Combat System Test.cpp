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

	std::cout << std::endl;

	//example.DisplayStats();







	std::vector<Character> people;

	//Character Ent("Roughbark Grenbranch", 1, Character::Race::PLANT, false);
	//people.push_back(Ent);
	//Character two("Two", 2, Character::Race::PLANT, false);
	//people.push_back(two);
	//Character three("Three", 3, Character::Race::PLANT, false);
	//people.push_back(three);
	//Character four("Four", 4, Character::Race::PLANT, false);
	//people.push_back(four);
	//Character five("Five", 5, Character::Race::PLANT, false);
	//people.push_back(five);
	//Character uncle("Yuka Leaftus", 10, Character::Race::PLANT, false);
	//people.push_back(uncle);
	//for (int i = 0; i < people.size(); i++) {
	//	people[i].Display();
	//	std::cout << std::endl;
	//	std::cout << std::endl;
	//}

	//Character plant("Plant", 10, Character::Race::PLANT, false);
	//Character animal("Animal", 10, Character::Race::ANIMAL, false);
	//Character spirit("Spirit", 10, Character::Race::SPIRIT, false);
	//Character goblin("Goblin", 10, Character::Race::GOBLIN, false);
	//Character kobold("Kobold", 10, Character::Race::KOBOLD, false);
	//Character human("Human", 10, Character::Race::HUMAN, false);
	//Character golem("Golem", 10, Character::Race::GOLEM, false);
	//Character demon("Demon", 10, Character::Race::DEMON, false);
	//Character dwarf("Dwarf", 10, Character::Race::DWARF, false);
	//Character elf("Elf", 10, Character::Race::ELF, false);
	//Character dragon("Dragon", 10, Character::Race::DRAGON, false);
	//Character god("God", 10, Character::Race::GOD, false);
	//Character broken("Broken", 10, Character::Race::PLANT, false);

	//people.push_back(plant);
	//people.push_back(animal);
	//people.push_back(spirit);
	//people.push_back(goblin);
	//people.push_back(kobold);
	//people.push_back(human);
	//people.push_back(golem);
	//people.push_back(demon);
	//people.push_back(dwarf);
	//people.push_back(elf);
	//people.push_back(dragon);
	//people.push_back(god);
	//people.push_back(broken);

	//for (int i = 0; i < people.size(); i++) {
	//	people[i].Display();
	//	std::cout << std::endl;
	//	std::cout << std::endl;
	//}



	//Character human1("One", 1, Character::Race::HUMAN, false);
	//people.push_back(human1);
	//Character human2("Two", 2, Character::Race::HUMAN, false);
	//people.push_back(human2);
	//Character human3("Three", 3, Character::Race::HUMAN, false);
	//people.push_back(human3);
	//Character human4("Four", 4, Character::Race::HUMAN, false);
	//people.push_back(human4);
	//Character human5("Five", 5, Character::Race::HUMAN, false);
	//people.push_back(human5);
	//Character human6("Six", 6, Character::Race::HUMAN, false);
	//people.push_back(human6);
	//Character human7("Seven", 7, Character::Race::HUMAN, false);
	//people.push_back(human7);
	//Character human8("Eight", 8, Character::Race::HUMAN, false);
	//people.push_back(human8);
	//Character human9("Nine", 9, Character::Race::HUMAN, false);
	//people.push_back(human9);
	//Character human10("Ten", 10, Character::Race::HUMAN, false);
	//people.push_back(human10);

	//Character kobold1("Kobold", 1, Character::Race::KOBOLD, false);
	//people.push_back(kobold1);
	//Character kobold2("Kobold", 2, Character::Race::KOBOLD, false);
	//people.push_back(kobold2);
	//Character kobold3("Kobold", 3, Character::Race::KOBOLD, false);
	//people.push_back(kobold3);
	//Character kobold4("Kobold", 4, Character::Race::KOBOLD, false);
	//people.push_back(kobold4);
	//Character kobold5("Kobold", 5, Character::Race::KOBOLD, false);
	//people.push_back(kobold5);
	//Character kobold10("Kobold", 10, Character::Race::KOBOLD, false);
	//people.push_back(kobold10);


	//Character goblin1("Goblin", 1, Character::Race::GOBLIN, false);
	//people.push_back(goblin1);
	//Character goblin2("Goblin", 2, Character::Race::GOBLIN, false);
	//people.push_back(goblin2);
	//Character goblin3("Goblin", 3, Character::Race::GOBLIN, false);
	//people.push_back(goblin3);
	//Character goblin4("Goblin", 4, Character::Race::GOBLIN, false);
	//people.push_back(goblin4);
	//Character goblin5("Goblin", 5, Character::Race::GOBLIN, false);
	//people.push_back(goblin5);
	//Character goblin("Goblin", 10, Character::Race::GOBLIN, false);
	//people.push_back(goblin);


	//Character animal1("Animal", 1, Character::Race::ANIMAL, false);
	//people.push_back(animal1);

	//Character animal2("Animal", 2, Character::Race::ANIMAL, false);
	//people.push_back(animal2);

	//Character animal3("Animal", 3, Character::Race::ANIMAL, false);
	//people.push_back(animal3);

	//Character animal4("Animal", 4, Character::Race::ANIMAL, false);
	//people.push_back(animal4);

	//Character animal5("Animal", 5, Character::Race::ANIMAL, false);
	//people.push_back(animal5);

	//Character animal("Animal", 10, Character::Race::ANIMAL, false);
	//people.push_back(animal);

	//Character spirit1("Spirit", 1, Character::Race::SPIRIT, false);
	//people.push_back(spirit1);
	//Character spirit2("Spirit", 2, Character::Race::SPIRIT, false);
	//people.push_back(spirit2);
	//Character spirit3("Spirit", 3, Character::Race::SPIRIT, false);
	//people.push_back(spirit3);
	//Character spirit4("Spirit", 4, Character::Race::SPIRIT, false);
	//people.push_back(spirit4);
	//Character spirit5("Spirit", 5, Character::Race::SPIRIT, false);
	//people.push_back(spirit5);
	//Character spirit("Spirit", 10, Character::Race::SPIRIT, false);
	//people.push_back(spirit);


//	for (int i = 0; i < people.size(); i++) {
//	people[i].Display();
//	std::cout << std::endl;
//	std::cout << std::endl;
//}


	Player newPlayer("", 5, Character::Race::HUMAN, false);

	newPlayer.Display();
	std::cout << std::endl;
	std::cout << std::endl;
	newPlayer.chooseName();
	newPlayer.chooseRace();
	std::cout << std::endl;
	std::cout << std::endl;
	newPlayer.Display();





}