#pragma once

# include <string>
# include <iostream>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	NinjaTrap : virtual public ClapTrap {
	public:
		NinjaTrap(std::string name);
		NinjaTrap& operator=(NinjaTrap const& equal);
		NinjaTrap(NinjaTrap const& src);
		NinjaTrap();
		~NinjaTrap();

		void	ninjaShoebox(ClapTrap const& target) const;
		void	ninjaShoebox(FragTrap const& target) const;
		void	ninjaShoebox(ScavTrap const& target) const;
		void	ninjaShoebox(NinjaTrap const& target) const;
};
