#pragma once

class ICharacter;
#include "ICharacter.hpp"
#include <string>

class AMateria {
	public:
		AMateria(const std::string& type);
		AMateria(const AMateria& other);
		AMateria& operator=(const AMateria& other);
		virtual ~AMateria();
		
		const std::string&	getType() const; //Returns the materia type
		unsigned int		getXP() const; //Returns the Materia's XP
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
	protected:
		void				setXP(unsigned int xp);
	private:
		AMateria();
		std::string			_type;
		unsigned int		_xp;
};