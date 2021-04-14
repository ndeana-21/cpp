#include <iostream>
#include <ctime>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void randomChump() {
	Zombie *chump_zombie;
	std::string name[8] = {"Fedya", "Petya", "Sveta", "Jeka", "Sanya", "Dimon", "Andruha", "Serega"};
	std::string type[8] = {"hunter", "smocker", "boomer", "tank", "witch", "spitter", "charger", "jokey"};

	srand(time(0));
	chump_zombie = new Zombie(name[rand() % 8], type[rand() % 8]);
	chump_zombie->announce();
	delete chump_zombie;
}

int main () {
	std::cout << "Steak" << std::endl;
	Zombie steak_zombi("Aleks", "hunter");
	steak_zombi.announce();

	std::cout << std::endl << "Unknown streak" << std::endl;
	Zombie unknown_steak_zombi;
	unknown_steak_zombi.setName("Marina");
	unknown_steak_zombi.setType("boomer");
	unknown_steak_zombi.announce();

	std::cout << std::endl << "Heap" << std::endl;
	Zombie *heap_zombi;
	ZombieEvent zombievent;
	zombievent.setZombieType("smoker");
	heap_zombi = zombievent.newZombie("Peter");
	heap_zombi->announce();
	delete heap_zombi;

	std::cout << std::endl << "Random" << std::endl;
	randomChump();
	return (0);
}