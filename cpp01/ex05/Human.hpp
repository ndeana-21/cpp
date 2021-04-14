# include "Brain.hpp"

class Human {
	private:
		const Brain	_brain;
	public:
		const Brain	&getBrain() const;
		std::string	identify();
};
