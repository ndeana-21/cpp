#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(NULL);
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;

	tmp = src->createMateria("known");
	me->equip(tmp);
	me->equip(NULL);
	tmp = src->createMateria("ice"); //0
	me->equip(tmp);
	tmp = src->createMateria("cure"); //1
	me->equip(tmp);
	tmp = src->createMateria("ice"); //2
	me->equip(tmp);
	tmp = src->createMateria("cure"); //3
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(-1, *bob);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	std::cout << std::endl;

	me->unequip(-1);
	me->unequip(4);
	me->unequip(2);

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}