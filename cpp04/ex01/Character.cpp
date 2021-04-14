#include "Character.hpp"
#include <iostream>

Character::Character(const std::string& name): _name(name), _aP(40), _weapon(NULL) {}
Character::Character(const Character& other) {*this = other;}
Character::~Character() {}
Character& Character::operator=(const Character& other) {
	if (this != &other) {
		_name = other._name;
		_aP = other._aP;
		_weapon = other._weapon;
	}
	return *this;
}

void	Character::recoverAP() {
	_aP = (_aP + 10 > 40) ? 40 : _aP + 10;
}

void	Character::equip(AWeapon *weapon) {_weapon = weapon;}

void	Character::attack(Enemy *enemy){
	if (!_weapon || !_aP || _aP - _weapon->getAPCost() < 0)
		return ;
	_aP -= _weapon->getAPCost();
	std::cout << _name << " attacks " << enemy->getType() << " with a "
		<< _weapon->getName() << std::endl;
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	if (!enemy->getHP())
		delete enemy;
}

const std::string&	Character::getName() const {return _name;}
const int&			Character::getAP() const {return _aP;}
int					Character::getWeapon() const {return _weapon != NULL;}
const std::string&	Character::getWeaponName() const {return _weapon->getName();}

std::ostream&		operator<<(std::ostream& out, Character& other) {

	if (other.getWeapon())
		out << other.getName() << " has " << other.getAP() <<
			" AP and wields a " << other.getWeaponName() << std::endl;
	else
		out << other.getName() << " has " << other.getAP() <<
			" AP and is unarmed" << std::endl;
	return out;
}