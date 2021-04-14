#pragma once

# include "Victim.hpp"
# include <string>

class Peon: public Victim {
	public:
		Peon(const std::string& name);
		Peon(const Peon& other);
		virtual ~Peon();
		Peon& operator=(const Peon& other);

		virtual void	getPolymorphed() const;
	private:
		Peon();
};

std::ostream&		operator<<(std::ostream& out, const Peon& other);
