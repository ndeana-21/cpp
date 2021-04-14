#include "Base.hpp"
#include <cstdlib>

Base	*generate(void) {
	int i = std::rand() % 3;

	switch(i) {
		case 0:
			return new A();
			break;
		case 1:
			return new B();
			break;
		default:
			return new C();
			break;
	}
}

void	identify_from_pointer(Base *p) {
	if (dynamic_cast<A *>(p))
		std::cout << "pointer - A";
	else if (dynamic_cast<B *>(p))
		std::cout << "pointer - B";
	else if (dynamic_cast<C *>(p))
		std::cout << "pointer - C";
}

void	identify_from_reference(Base &p) {
	Base instance;
	
	try {
		instance = dynamic_cast<A &>(p);
		std::cout << "reference - A";
	} catch(const std::exception& e) {}
	try {
		instance = dynamic_cast<B &>(p);
		std::cout << "reference - B";
	} catch(const std::exception& e) {}
	try {
		instance = dynamic_cast<C &>(p);
		std::cout << "reference - C";
	} catch(const std::exception& e) {}
}