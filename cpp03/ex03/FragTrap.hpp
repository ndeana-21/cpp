#pragma once

# include <string>
# include <iostream>

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap(std::string name="NONAME");
		FragTrap& operator=(FragTrap const& equal);
		FragTrap(FragTrap const& src);
		~FragTrap();

		void	vaulthunter_dot_exe(std::string const & target) const;
};