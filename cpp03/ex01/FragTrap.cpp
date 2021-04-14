#include "FragTrap.hpp"

std::string		FragTrap::getName() const {
	return (this->_name);
}
unsigned int	FragTrap::getHitPoints() const {
	return (this->_hit_points);
}
unsigned int	FragTrap::getMaxHitPoints() const {
	return (this->_max_hit_points);
}
unsigned int	FragTrap::getEnergyPoints() const {
	return (this->_energy_points);
}
unsigned int	FragTrap::getMaxEnergyPoints() const {
	return (this->_max_energy_points);
}
unsigned int	FragTrap::getLevel() const {
	return (this->_level);
}
unsigned int	FragTrap::getMAttackDamage() const {
	return (this->_m_attack_damage);
}
unsigned int	FragTrap::getRAttackDamage() const {
	return (this->_r_attack_damage);
}
unsigned int	FragTrap::getArmorDamageReduction() const {
	return (this->_armor_damage_reduction);
}

FragTrap::FragTrap(std::string name) : _name(name),
_hit_points(100), _max_hit_points(100), _energy_points(100),
_max_energy_points(100), _level(1), _m_attack_damage(30),
_r_attack_damage(20), _armor_damage_reduction(5) {
	std::cout << "I am a FR4G-TP FragTrap unit named " << this->_name << std::endl;
}
FragTrap::FragTrap(FragTrap const& src) {
	*this = src;
}
FragTrap::~FragTrap() {
	std::cout << this->_name << " self-destructed RIP FragTrap poor tin can ;(((" << std::endl;
}
FragTrap&		FragTrap::operator=(FragTrap const& equal) {
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

void			FragTrap::meleeAttack(std::string const & target){
	std::cout << this->_name << " attacks " << target <<
	" at melee, causing " << this->_m_attack_damage << " points of damage!" << std::endl;
}

void			FragTrap::rangeAttack(std::string const & target){
	std::cout << this->_name << " attacks " << target <<
	" at range, causing " << this->_r_attack_damage << " points of damage!" << std::endl;
}

void			FragTrap::takeDamage(unsigned int amount) {
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

void			FragTrap::beRepaired(unsigned int amount) {
	std::cout << this->_name << " is self-reparing!" << std::endl;
	this->_hit_points += amount;
	if (this->_hit_points >= this->_max_hit_points) {
		this->_hit_points = this->_max_hit_points;
		std::cout << this->_name << " is fully restored!" << std::endl;
	}
}

void			FragTrap::vaulthunter_dot_exe(std::string const & target){
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