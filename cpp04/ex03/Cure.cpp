#include "Cure.hpp"

#include <iostream>

Cure::Cure(): AMateria("cure") {}
Cure::Cure(const Cure& other): AMateria("cure") {*this = other;}
Cure::~Cure() {}
Cure& Cure::operator=(const Cure& other) {
	if (this == &other) return *this;
	setXP(other.getXP());
	return *this;
}

AMateria*	Cure::clone() const {return new Cure(*this);}

void		Cure::use(ICharacter& target) {
	setXP(getXP() + 10);
	std::cout << "* heals " << target.getName() << "'s wounds *" <<
		std::endl;
}
