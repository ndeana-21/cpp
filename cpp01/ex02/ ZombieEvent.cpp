#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {}
ZombieEvent::~ZombieEvent() {}

void ZombieEvent::setZombieType(std::string type) {
	ZombieEvent::_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
	return (new Zombie(name, _type));
}
