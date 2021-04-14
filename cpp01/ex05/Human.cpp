#include "Human.hpp"

const Brain	&Human::getBrain() const {
	return (this->_brain);
}

std::string	Human::identify() {
	return (this->_brain.identify());
}
