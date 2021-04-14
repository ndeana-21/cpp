#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21) {}
PlasmaRifle::PlasmaRifle(const PlasmaRifle& other): AWeapon(other) {}
PlasmaRifle::~PlasmaRifle() {}
PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle& other) {
	if (this != &other)
		AWeapon::operator=(other);
	return *this;
}

void	PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
