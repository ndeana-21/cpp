#pragma once

# include "Victim.hpp"
# include <string>

class Sorcerer {
	public:
		Sorcerer(const std::string& name, const std::string& title);
		Sorcerer(const Sorcerer &other);
		~Sorcerer();
		Sorcerer& operator=(const Sorcerer& other);

		const std::string&	getName() const;
		const std::string&	getTitle() const;

		void				polymorph(const Victim& target) const;

	private:
		Sorcerer();
		std::string 		_name;
		std::string 		_title;

};

std::ostream&	operator<<(std::ostream& out, const Sorcerer& other);