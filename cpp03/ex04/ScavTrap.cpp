#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 100, 50, 1, 20, 15, 3) {
	std::cout << "I am a FR4G-TP ScavTrap unit named " << this->_name << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const& src) {
	*this = src;
}
ScavTrap::~ScavTrap() {
	std::cout << this->_name << " self-destructed RIP ScavTrap poor tin can ;(((" << std::endl;
}
ScavTrap&		ScavTrap::operator=(ScavTrap const& equal) {
	if (this != &equal) {
		this->_name = equal._name;
		this->_hit_points = equal._hit_points;
		this->_max_hit_points = equal._max_hit_points;
		this->_energy_points = equal._energy_points;
		this->_max_energy_points = equal._max_energy_points;
		this->_level = equal._level;
		this->_m_attack_damage = equal._m_attack_damage;
		this->_r_attack_damage = equal._r_attack_damage;
		this->_armor_damage_reduction = equal._armor_damage_reduction;
	}
	return *this;
}

void			ScavTrap::challengeNewcomer(std::string const & target){
	if (this->_energy_points < 25) {
		std::cout << this->_name << " don't have enough energy!" << std::endl;
		return ;
	}
	switch (rand() % 5)
	{
		case 0:
			std::cout << this->_name << " is complete loser, he tried to hit " << target << ", but beat himself." << std::endl;
			break;
		case 1:
			std::cout << this->_name << " tried to scare the " << target << ". " << target << " not impressed and just beat all shit from " << this->_name << std::endl;
			break;
		case 2:
			std::cout << this->_name << " tried to scare the " << target << ". " << target << " thought " << this->_name << " was crazy and walk away peacefully" << std::endl;
			break;
		case 3:
			std::cout << this->_name << " tried to scare the " << target << ". " << target << " escaped in horror losing stuff. " << this->_name << " fount perfectly fitting gear." << std::endl;
			break;
		case 4:
			std::cout << this->_name << " is complete lucky ten can, after he beat " << target << " for 1 accurate punch. " << this->_name << " found a cupone on free repare by Akmed" << std::endl;
			break;
		default:
			break;
	}
}