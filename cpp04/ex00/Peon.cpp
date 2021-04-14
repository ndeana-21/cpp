#include "Peon.hpp"
#include <iostream>

Peon::Peon(const std::string& name): Victim(name) {
	std::cout << "Zog zog." << std::endl;
}
Peon::Peon(const Peon& other): Victim(other) {
	std::cout << "Zog zog." << std::endl;
}
Peon::~Peon() {
	std::cout << "Bleaurk..." << std::endl;
}
Peon& Peon::operator=(const Peon& other) {
	if (this != &other) {
		Victim::operator=(other);
	}
	return *this;
}

void	Peon::getPolymorphed() const {
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}

std::ostream&	operator<<(std::ostream& out, const Peon& other) {
	out << "I'm " << other.getName() << " and I like pretty firefies!" << std::endl;
	return out;
}
