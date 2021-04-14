#pragma once

# include <string>
# include <iostream> 
# include "Weapon.hpp"

class HumanB {
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		void	attack() const;
		void	setWeapon(Weapon &new_weapon);
		HumanB(std::string name);
		~HumanB();
};