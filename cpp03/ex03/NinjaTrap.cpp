#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0) {
	std::cout << "I am a FR4G-TP NinjaTrap unit named " << this->_name << std::endl;
}
NinjaTrap::NinjaTrap(NinjaTrap const& src) {
	*this = src;
}
NinjaTrap::~NinjaTrap() {
	std::cout << this->_name << " self-destructed RIP NinjaTrap poor tin can ;(((" << std::endl;
}
NinjaTrap&		NinjaTrap::operator=(NinjaTrap const& equal) {
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

void	NinjaTrap::ninjaShoebox(ClapTrap const& target) const
{
	std::cout << this->_name << " give a fancy shoe to " << target.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap const& target) const
{
	std::cout << this->_name << " give a fancy shoe to " << target.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const& target) const
{
	std::cout << this->_name << " give a fancy shoe to " << target.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const& target) const
{
	std::cout << this->_name << " give a fancy shoe to " << target.getName() << std::endl;
}
