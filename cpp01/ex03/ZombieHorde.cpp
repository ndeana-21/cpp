#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _N(N){
	ZombieHorde::_horde = new Zombie[N];
	std::string name[8] = {"Fedya", "Petya", "Sveta", "Jeka", "Sanya", "Dimon", "Andruha", "Serega"};
	std::string type[8] = {"hunter", "smocker", "boomer", "tank", "witch", "spitter", "charger", "jokey"};
	int count = 0;

	srand(time(0));
	std::cout << "OH no horde is coming" << std::endl;
	while (count < N)
	{
		ZombieHorde::_horde[count].setName(name[rand() % 8]);
		ZombieHorde::_horde[count].setType(type[rand() % 8]);
		count++;
	}
}

ZombieHorde::~ZombieHorde() {
	if (this->_horde)
		delete[] this->_horde;
	std::cout << "YAY horde is dead\n";
}

void	ZombieHorde::announce(void) {
	if (this->_horde)
		for (int i = 0; i < this->_N; i++)
			this->_horde[i].announce();
}