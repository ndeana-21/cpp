#pragma once

#include "IMateriaSource.hpp"
#include <string>

class MateriaSource: public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		virtual ~MateriaSource();
		MateriaSource& operator=(const MateriaSource& other);

		virtual void		learnMateria(AMateria* m);
		virtual AMateria*	createMateria(std::string const & type);
	private:
		void				clear();

		AMateria*			_memory[4];
};