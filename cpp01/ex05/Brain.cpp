#include "Brain.hpp"

std::string	Brain::identify(void) const {
	std::stringstream	stream_ptr;

	stream_ptr << this;
	return (stream_ptr.str());
}

void	Brain::show_iq(void) const {
	std::cout << "IQ: " << this->_iq << std::endl;
}

void	Brain::set_iq(int new_iq) {
	_iq = new_iq;
}

Brain::Brain(int iq) : _iq(iq) {}
Brain::Brain() : _iq(0) {}
Brain::~Brain() {}