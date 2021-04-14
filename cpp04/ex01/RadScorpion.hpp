#pragma once

#include "Enemy.hpp"
#include <string>

class RadScorpion: public Enemy {
	public:
		RadScorpion();
		RadScorpion(const RadScorpion& other);
		virtual ~RadScorpion();
		RadScorpion& operator=(const RadScorpion& other);
};