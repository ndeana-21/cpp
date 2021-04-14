#include "Character.hpp"

Character::Character(const std::string& name): _name(name) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
}
Character::Character(const Character& other) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
	*this = other;
}
Character::~Character() {clear();}
Character& Character::operator=(const Character& other) {
	_name = other._name;
	clear();
	for (int i = 0; i < 4; i++)
		_inventory[i] = (other._inventory[i]) ?
			other._inventory[i]->clone() : 0;
	return *this;
}


const std::string&	Character::getName() const {return _name;}

void 				Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
		if (!_inventory[i]) {
			_inventory[i] = m;
			break ;
		}
}

void 				Character::unequip(int idx) {
	if (idx < 0 || idx > 3 || !_inventory[idx])
		return ;
	_inventory[idx] = 0;
}

void 				Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3 || !_inventory[idx])
		return ;
	_inventory[idx]->use(target);
}

void				Character::clear() {
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
}
