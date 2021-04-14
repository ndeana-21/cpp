#pragma once

#include "Enemy.hpp"
#include <string>

class SuperMutant: public Enemy {
	public:
		SuperMutant();
		SuperMutant(const SuperMutant& other);
		virtual ~SuperMutant();
		SuperMutant& operator=(const SuperMutant& other);

		virtual void		takeDamage(int damage);
};