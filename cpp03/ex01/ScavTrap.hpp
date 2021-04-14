#pragma once

# include <string>
# include <iostream>

class	ScavTrap {
	public:
		std::string		getName() const;
		unsigned int	getHitPoints() const;
		unsigned int	getMaxHitPoints() const;
		unsigned int	getEnergyPoints() const;
		unsigned int	getMaxEnergyPoints() const;
		unsigned int	getLevel() const;
		unsigned int	getMAttackDamage() const;
		unsigned int	getRAttackDamage() const;
		unsigned int	getArmorDamageReduction() const;
		ScavTrap(std::string name="NONAME");
		ScavTrap& operator=(ScavTrap const& equal);
		ScavTrap(ScavTrap const& src);
		~ScavTrap();

		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			meleeAttack(std::string const & target);
		void			rangeAttack(std::string const & target);
		void			challengeNewcomer(std::string const & target);
	private:
		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_max_hit_points;
		unsigned int	_energy_points;
		unsigned int	_max_energy_points;
		unsigned int	_level;
		unsigned int	_m_attack_damage;
		unsigned int	_r_attack_damage;
		unsigned int	_armor_damage_reduction;
};
