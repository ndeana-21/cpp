#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_memory[i] = 0;
}
MateriaSource::~MateriaSource() {clear();}

void 		MateriaSource::learnMateria(AMateria* m) {
	if (m) {
		for (int i = 0; i < 4; i++)
			if (!_memory[i]) {
				_memory[i] = m->clone();
				break;
			}
	}
}

AMateria* 	MateriaSource::createMateria(const std::string& type) {
	for (int i = 0; i < 4; i++)
		if (_memory[i] && _memory[i]->getType() == type)
			return _memory[i]->clone();
	return 0;
}

void		MateriaSource::clear() {
	for (int i = 0; i < 4; i++)
		if (_memory[i])
			delete _memory[i];
}
