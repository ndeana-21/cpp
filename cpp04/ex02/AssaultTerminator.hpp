#pragma once

#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {

public:

	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator& other);
	AssaultTerminator& operator=(const AssaultTerminator& other);
	virtual ~AssaultTerminator();

	virtual ISpaceMarine*	clone() const;
	virtual void 			battleCry() const;
	virtual void 			rangedAttack() const;
	virtual void 			meleeAttack() const;
	
};