#include "ScavTrap.hpp"

std::string		ScavTrap::getName() const {
	return (this->_name);
}
unsigned int	ScavTrap::getHitPoints() const {
	return (this->_hit_points);
}
unsigned int	ScavTrap::getMaxHitPoints() const {
	return (this->_max_hit_points);
}
unsigned int	ScavTrap::getEnergyPoints() const {
	return (this->_energy_points);
}
unsigned int	ScavTrap::getMaxEnergyPoints() const {
	return (this->_max_energy_points);
}
unsigned int	ScavTrap::getLevel() const {
	return (this->_level);
}
unsigned int	ScavTrap::getMAttackDamage() const {
	return (this->_m_attack_damage);
}
unsigned int	ScavTrap::getRAttackDamage() const {
	return (this->_r_attack_damage);
}
unsigned int	ScavTrap::getArmorDamageReduction() const {
	return (this->_armor_damage_reduction);
}

ScavTrap::ScavTrap(std::string name) : _name(name),
_hit_points(100), _max_hit_points(100), _energy_points(50),
_max_energy_points(50), _level(1), _m_attack_damage(20),
_r_attack_damage(15), _armor_damage_reduction(3) {
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

void			ScavTrap::meleeAttack(std::string const & target){
	std::cout << this->_name << " attacks " << target <<
	" at melee, causing " << this->_m_attack_damage << " points of damage!" << std::endl;
}

void			ScavTrap::rangeAttack(std::string const & target){
	std::cout << this->_name << " attacks " << target <<
	" at range, causing " << this->_r_attack_damage << " points of damage!" << std::endl;
}

void			ScavTrap::takeDamage(unsigned int amount) {
	std::cout << this->_name << " is under attack!" << std::endl;
	if (amount <= this->_armor_damage_reduction) {
		std::cout << "Armor reduce damage! " << this->_name << " armored as F" << std::endl;
		return ;
	}
	amount -= this->_armor_damage_reduction;
	if (this->_hit_points <= amount) {
		this->_hit_points = 0;
		std::cout << "OH MY GOD! THEY KILLED " << this->_name << "! YOU ARE BASTARD!" << std::endl;
	} else {
		this->_hit_points -= amount;
		std::cout << this->_name << " take " << amount << " damage. now I have " << this->_hit_points << std::endl;
	}
}

void			ScavTrap::beRepaired(unsigned int amount) {
	std::cout << this->_name << " is self-reparing!" << std::endl;
	this->_hit_points += amount;
	if (this->_hit_points >= this->_max_hit_points) {
		this->_hit_points = this->_max_hit_points;
		std::cout << this->_name << " is fully restored!" << std::endl;
	}
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