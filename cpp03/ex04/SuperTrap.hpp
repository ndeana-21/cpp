#pragma once

# include <string>
# include <iostream>

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class	SuperTrap : public FragTrap, public NinjaTrap {
	public:
		SuperTrap(std::string name="Sups");
		SuperTrap& operator=(SuperTrap const& equal);
		SuperTrap(SuperTrap const& src);
		~SuperTrap();

		virtual void	meleeAttack(std::string const & target);
		virtual void	rangeAttack(std::string const & target);
};