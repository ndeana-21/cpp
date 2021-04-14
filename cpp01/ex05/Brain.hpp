#pragma once

# include <string>
# include <sstream>
# include <iostream>

class	Brain {
	private:
		int		_iq;
	public:
		Brain(int iq);
		Brain();
		~Brain();
		std::string	identify(void) const;
		void		show_iq(void) const;
		void		set_iq(int new_iq);
};