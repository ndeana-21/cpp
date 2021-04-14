#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer(const std::string& name, const std::string& title):
	_name(name), _title(title) {std::cout << this->_name << ", " << _title <<
	", is born!" << std::endl;}
Sorcerer::Sorcerer(const Sorcerer& other) {*this = other;}
Sorcerer::~Sorcerer(void) {
	std::cout << _name << ", " << _title << ", " << "is dead. Consequences will never be the same!" << std::endl;
}
Sorcerer& Sorcerer::operator=(const Sorcerer& other) {
	if (this != &other) {
		this->_name = other._name;
		this->_title = other._title;
	}
	return *this;
}

const std::string&	Sorcerer::getName() const {return this->_name;}
const std::string&	Sorcerer::getTitle() const {return this->_title;}

void	Sorcerer::polymorph(const Victim& target) const {
	target.getPolymorphed();
}

std::ostream&	operator<<(std::ostream& out, const Sorcerer& other) {

	out << "I am " << other.getName() << ", "<< other.getTitle() <<
		", and I like ponies!" << std::endl;
	return out;
}
