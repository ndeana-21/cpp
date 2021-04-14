#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : FragTrap(), NinjaTrap() {
	this->_name = name;
	this->_hit_points = this->FragTrap::getHitPoints();
	this->_max_hit_points = this->FragTrap::getMaxHitPoints();
	this->_energy_points = this->NinjaTrap::getEnergyPoints();
	this->_max_energy_points = this->NinjaTrap::getMaxEnergyPoints();
	this->_level = 1;
	this->_m_attack_damage = this->NinjaTrap::getMAttackDamage();
	this->_r_attack_damage = this->FragTrap::getRAttackDamage();
	this->_armor_damage_reduction = this->FragTrap::getArmorDamageReduction();
	std::cout << "I am a FR4G-TP SuperTrap unit named " << name << std::endl;
}
SuperTrap::SuperTrap(SuperTrap const& src) {
	*this = src;
}
SuperTrap::~SuperTrap() {
	std::cout << this->_name << " self-destructed RIP SuperTrap poor tin can ;(((" << std::endl;
}
SuperTrap&		SuperTrap::operator=(SuperTrap const& equal) {
	if (this != &equal) {
		this->_hit_points = equal._hit_points;
		this->_max_hit_points = equal._max_hit_points;
		this->_energy_points = equal._energy_points;
		this->_max_energy_points = equal._max_energy_points;
		this->_level = equal._level;
		this->_name = equal._name;
		this->_m_attack_damage = equal._m_attack_damage;
		this->_r_attack_damage = equal._r_attack_damage;
		this->_armor_damage_reduction = equal._armor_damage_reduction;
	}
	return *this;
}

void SuperTrap::meleeAttack(std::string const & target) {
	NinjaTrap::meleeAttack(target);
}
void SuperTrap::rangeAttack(std::string const & target) {
	FragTrap::rangeAttack(target);
}