#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, float hight, float weight, float age) :
		_name(name), _color(color), _hight(hight), _weight(weight), _age(age)
{}
Pony::Pony(std::string name) : Pony::Pony(name, "Black", 1, 20, 0)
{}
Pony::~Pony()
{}

void	Pony::ponyDoSomething() {
	std::cout << "Hello my name is " << this->_name <<
		".\nIm " << this->_age << " years old.\nMy characteristic " <<
		"\nColor - " << this->_color <<
		"\nHight - " << this->_hight <<
		"\nWeight - " << this->_weight << std::endl;
}