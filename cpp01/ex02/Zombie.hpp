#pragma once

# include <string>
# include <iostream>

class	Zombie {
	public:
		Zombie(std::string name, std::string type);
		Zombie();
		~Zombie();
		void	setName(std::string new_name);
		void	setType(std::string new_type);
		void	announce(void) const;
	private:
		std::string	_name;
		std::string	_type;
};