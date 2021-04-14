#pragma once

class Bureaucrat;

# include "Bureaucrat.hpp"

class Form {
	public:
		Form(std::string name, int sign, int execute);
		Form(Form const &other);
		~Form();

		Form &operator=(Form const &other);

		class GradeTooHighException: public std::exception {
			const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			const char* what() const throw();
		};

		std::string getName() const;
		int getNumSign() const;
		int getNumExecute() const;
		bool getSigned(void) const;

		void beSigned(Bureaucrat const &base);
	private:
		Form();

		std::string _name;
		bool _sign;
		int _num_sign;
		int _num_execute;
};

std::ostream &operator<<(std::ostream &os, Form const &base);