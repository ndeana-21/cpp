#include "Ice.hpp"
#include <iostream>

Ice::Ice(): AMateria("ice") {}
Ice::Ice(const Ice& other): AMateria("ice") {*this = other;}
Ice::~Ice() {}
Ice& Ice::operator=(const Ice& other) {
	if (this == &other) return *this;
	setXP(other.getXP());
	return *this;
}

AMateria*	Ice::clone() const {return new Ice(*this);}

void		Ice::use(ICharacter& target) {
	setXP(getXP() + 10);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
