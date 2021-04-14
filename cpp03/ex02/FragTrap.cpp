#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5) {
	std::cout << "I am a FR4G-TP FragTrap unit named " << name << std::endl;
}
FragTrap::FragTrap(FragTrap const& src) : ClapTrap(src) {
	*this = src;
}
FragTrap::~FragTrap() {
	std::cout << "RIP FragTrap poor tin can ;(((" << std::endl;
}
FragTrap&		FragTrap::operator=(FragTrap const& equal) {
	if (this != &equal) {
		ClapTrap::operator=(equal);
	}
	return *this;
}

void			FragTrap::vaulthunter_dot_exe(std::string const & target) const{
	if (this->_energy_points < 25) {
		std::cout << this->_name << " don't have enough energy!" << std::endl;
		return ;
	}
	switch (rand() % 5)
	{
		case 0:
			std::cout << this->_name << " sent to horny jail " << target << ". BONK!" << std::endl;
			break;
		case 1:
			std::cout << this->_name << " gently slapped on the cheek " << target << std::endl;
			break;
		case 2:
			std::cout << this->_name << " pick up BFG-9000 and ripped " << target << std::endl;
			break;
		case 3:
			std::cout << this->_name << " punched " << target << "by spoon" << std::endl;
			break;
		case 4:
			std::cout << this->_name << " 360 no scope fork throw in " << target << std::endl;
			break;
		default:
			break;
	}
}