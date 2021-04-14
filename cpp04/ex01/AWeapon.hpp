#pragma once

#include <string>

class AWeapon {
	public:
		AWeapon(const std::string& name, int apcost, int damage);
		AWeapon(const AWeapon& other);
		AWeapon& operator=(const AWeapon& other);
		virtual ~AWeapon();

		const std::string&	getName() const;
		int					getAPCost() const;
		int					getDamage() const;
		virtual void		attack() const = 0;
	protected:
		std::string			_name;
		int					_aPCost;
		int					_damage;
	private:
		AWeapon();
};