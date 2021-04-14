#pragma once

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle& other);
		PlasmaRifle& operator=(const PlasmaRifle& other);
		virtual ~PlasmaRifle();

		virtual void	attack() const;
};