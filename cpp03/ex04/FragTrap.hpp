#pragma once

# include <string>
# include <iostream>

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(std::string name);
		FragTrap& operator=(FragTrap const& equal);
		FragTrap(FragTrap const& src);
		FragTrap();
		~FragTrap();

		void	vaulthunter_dot_exe(std::string const & target) const;
};