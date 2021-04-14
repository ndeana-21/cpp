#include "ClapTrap.hpp"

std::string		ClapTrap::getName() const {
	return (this->_name);
}
unsigned int	ClapTrap::getHitPoints() const {
	return (this->_hit_points);
}
unsigned int	ClapTrap::getMaxHitPoints() const {
	return (this->_max_hit_points);
}
unsigned int	ClapTrap::getEnergyPoints() const {
	return (this->_energy_points);
}
unsigned int	ClapTrap::getMaxEnergyPoints() const {
	return (this->_max_energy_points);
}
unsigned int	ClapTrap::getLevel() const {
	return (this->_level);
}
unsigned int	ClapTrap::getMAttackDamage() const {
	return (this->_m_attack_damage);
}
unsigned int	ClapTrap::getRAttackDamage() const {
	return (this->_r_attack_damage);
}
unsigned int	ClapTrap::getArmorDamageReduction() const {
	return (this->_armor_damage_reduction);
}

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	std::cout << "I am a FR4G-TP ClapTrap unit named " << this->_name << std::endl;
}
ClapTrap::ClapTrap() {
	std::cout << "I am a FR4G-TP ClapTrap unit named " << this->_name << std::endl;
}
ClapTrap::ClapTrap(std::string name, int hit_points,
			int max_hit_points, int energy_points, int max_energy_points,
			int level, int m_attack_damage, int r_attack_damage,
			int armor_damage_reduction) :_name(name),
_hit_points(hit_points), _max_hit_points(max_hit_points), _energy_points(energy_points),
_max_energy_points(max_energy_points), _level(level), _m_attack_damage(m_attack_damage),
_r_attack_damage(r_attack_damage), _armor_damage_reduction(armor_damage_reduction) {
	std::cout << "I am a FR4G-TP ClapTrap unit named " << this->_name << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const& src) {
	*this = src;
}
ClapTrap::~ClapTrap() {
	std::cout << this->_name << " self-destructed RIP ClapTrap poor tin can ;(((" << std::endl;
}
ClapTrap&		ClapTrap::operator=(ClapTrap const& equal) {
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

void			ClapTrap::meleeAttack(std::string const & target){
	std::cout << this->_name << " attacks " << target <<
	" at melee, causing " << this->_m_attack_damage << " points of damage!" << std::endl;
}

void			ClapTrap::rangeAttack(std::string const & target){
	std::cout << this->_name << " attacks " << target <<
	" at range, causing " << this->_r_attack_damage << " points of damage!" << std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount) {
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

void			ClapTrap::beRepaired(unsigned int amount) {
	std::cout << this->_name << " is self-reparing!" << std::endl;
	this->_hit_points += amount;
	if (this->_hit_points >= this->_max_hit_points) {
		this->_hit_points = this->_max_hit_points;
		std::cout << this->_name << " is fully restored!" << std::endl;
	}
}