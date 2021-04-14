#pragma once

#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine& other);
		~TacticalMarine();
		TacticalMarine& operator=(const TacticalMarine& other);

		virtual ISpaceMarine*	clone() const;
		virtual void 			battleCry() const;
		virtual void 			rangedAttack() const;
		virtual void 			meleeAttack() const;
};