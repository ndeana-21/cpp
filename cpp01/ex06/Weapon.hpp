#pragma once

# include <string>

class Weapon {
	private:
		std::string	_type;
	public:
		const std::string	&getType() const;
		void				setType(const std::string &new_type);
		Weapon(const std::string type);
		Weapon();
		~Weapon();
};