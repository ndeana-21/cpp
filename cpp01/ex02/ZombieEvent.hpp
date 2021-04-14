#pragma once

# include "Zombie.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <ctime>

class	ZombieEvent {
	public:
		ZombieEvent();
		~ZombieEvent();
		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
	private:
		std::string	_type;
};