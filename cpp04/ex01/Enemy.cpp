#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string& type): _hP(hp), _type(type) {}
Enemy::Enemy(const Enemy& other) {*this = other;}
Enemy::~Enemy() {}
Enemy& Enemy::operator=(const Enemy& other) {
	if (this != &other) {
		_hP = other._hP;
		_type = other._type;
	}
	return *this;
}

const std::string&	Enemy::getType() const {return _type;}
int					Enemy::getHP() const {return _hP;}

void				Enemy::takeDamage(int damage) {
	if (damage < 0)
		return;
	_hP = (damage > _hP) ? 0 : _hP - damage;
}
