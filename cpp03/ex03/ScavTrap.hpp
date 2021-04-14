#pragma once

# include <string>
# include <iostream>

# include "ClapTrap.hpp"

class	ScavTrap  : public ClapTrap {
	public:
		ScavTrap(std::string name="NONAME");
		ScavTrap& operator=(ScavTrap const& equal);
		ScavTrap(ScavTrap const& src);
		~ScavTrap();

		void			challengeNewcomer(std::string const & target);
};
