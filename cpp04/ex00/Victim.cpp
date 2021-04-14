#include "Victim.hpp"
#include <iostream>

Victim::Victim(const std::string& name): _name(name) {
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}
Victim::Victim(const Victim& other) {
	*this = other;
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}
Victim::~Victim(void) {
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}
Victim& Victim::operator=(const Victim& other) {
	if (this != &other) {
		_name = other._name;
	}
	return *this;
}

const std::string&	Victim::getName() const {return _name;}

void				Victim::getPolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream&		operator<<(std::ostream& out, const Victim& other) {
	out << "I'm " << other.getName() << " and I like otters!" << std::endl;
	return out;
}
