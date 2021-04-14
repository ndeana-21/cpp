#pragma once

#include "AWeapon.hpp"

class PowerFist: public AWeapon {
	public:
		PowerFist();
		PowerFist(const PowerFist& other);
		PowerFist& operator=(const PowerFist& other);
		virtual ~PowerFist();

		virtual void	attack() const;
};