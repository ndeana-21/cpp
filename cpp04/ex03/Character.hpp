#pragma once

# include "ICharacter.hpp"
# include <string>

class Character: public ICharacter {
	public:
		Character(const std::string& name);
		Character(const Character& other);
		Character& operator=(const Character& other);
		virtual ~Character();

		virtual const std::string&	getName() const;
		virtual void 				equip(AMateria* m);
		virtual void 				unequip(int idx);
		virtual void 				use(int idx, ICharacter& target);
	private:
		Character();

		void						clear();

		std::string					_name;
		AMateria*					_inventory[4];
};