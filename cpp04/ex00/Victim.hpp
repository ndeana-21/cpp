#pragma once

# include <string>

class Victim {
	public:
		Victim(const std::string &name);
		Victim(const Victim &other);
		virtual ~Victim();
		Victim	&operator=(const Victim &other);

		const std::string	&getName() const;
		virtual void		getPolymorphed() const;

	private:
		Victim();
		std::string 		_name;
};

std::ostream	&operator<<(std::ostream& out, const Victim& other);
