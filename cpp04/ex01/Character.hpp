#pragma once

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <string>

class Character {
	public:
		Character(const std::string &name);
		Character(const Character &other);
		~Character();
		Character &operator=(const Character &other);

		const std::string	&getName() const;
		const int			&getAP() const;
		int					getWeapon() const;
		const std::string	&getWeaponName() const;
		
		void				recoverAP();
		void				equip(AWeapon *weapon);
		void				attack(Enemy *enemy);
	private:
		Character();
		std::string			_name;
		int					_aP;
		AWeapon*			_weapon;
};

std::ostream	&operator<<(std::ostream &out, Character &other);