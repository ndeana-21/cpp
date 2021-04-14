#include "AMateria.hpp"

AMateria::AMateria(const std::string& type): _type(type), _xp(0) {}

AMateria::AMateria(const AMateria& other) {*this = other;}

AMateria& AMateria::operator=(const AMateria& other) {
	if (this == &other) return *this;
	_type = other._type;
	_xp = other._xp;
	return *this;
}

AMateria::~AMateria() {}

const std::string&	AMateria::getType() const {return _type;}

unsigned int		AMateria::getXP() const {return _xp;}

void				AMateria::setXP(unsigned int xp) {_xp = xp;}

void				AMateria::use(ICharacter&) {
	_xp += 10;
}
