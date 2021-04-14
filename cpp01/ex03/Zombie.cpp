#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) :
			_name(name), _type(type) {
	std::cout << "Zombie created" << std::endl;
}
Zombie::Zombie() : _name("default_name"), _type("default_type") {
	std::cout << "Zombie created" << std::endl;
}
Zombie::~Zombie() {
	std::cout << "Zombie is dead" << std::endl;
}


void	Zombie::setName(std::string new_name) {
	this->_name = new_name;
}
void	Zombie::setType(std::string new_type) {
	this->_type = new_type;
}

void	Zombie::announce(void) const {
	std::cout << "< " << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
