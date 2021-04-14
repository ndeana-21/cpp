#pragma once

# include <string>
# include <iostream>

class	ClapTrap {
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
		ClapTrap& operator=(ClapTrap const& equal);
		ClapTrap(std::string name, int hit_points,
			int max_hit_points, int energy_points, int max_energy_points,
			int level, int m_attack_damage, int r_attack_damage,
			int armor_damage_reduction);
		ClapTrap(ClapTrap const& src);
		ClapTrap(std::string name);
		ClapTrap();
		~ClapTrap();

		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			meleeAttack(std::string const & target);
		void			rangeAttack(std::string const & target);
	protected:
		std::string		_name = "ClapClap";
		unsigned int	_hit_points = 0;
		unsigned int	_max_hit_points = 0;
		unsigned int	_energy_points = 0;
		unsigned int	_max_energy_points = 0;
		unsigned int	_level = 0;
		unsigned int	_m_attack_damage = 0;
		unsigned int	_r_attack_damage = 0;
		unsigned int	_armor_damage_reduction = 0;
};
