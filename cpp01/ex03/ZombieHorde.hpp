#pragma once

# include <string>
# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Zombie.hpp"

# define NAMES_NUM 7

class	ZombieHorde {
	public:
		ZombieHorde(int N);
		~ZombieHorde();
		void announce();
	private:
		std::string	_name;
		std::string	_type;
		Zombie		*_horde;
		int			_N;
};