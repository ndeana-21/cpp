#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string& name, int apcost, int damage):
					_name(name), _aPCost(apcost), _damage(damage) {}
AWeapon::AWeapon(const AWeapon& other) {*this = other;}
AWeapon::~AWeapon() {}
AWeapon& AWeapon::operator=(const AWeapon& other) {
	if (this != &other) {
		_name = other._name;
		_aPCost = other._aPCost;
		_damage = other._damage;
	}
	return *this;
}

const std::string&	AWeapon::getName() const {return _name;}
int					AWeapon::getAPCost() const {return _aPCost;}
int					AWeapon::getDamage() const {return _damage;}
