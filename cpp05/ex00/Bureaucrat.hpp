#pragma once

#include <iostream>
#include <string>

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const& other);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat& other);

		std::string	getName() const;
		int			getGrade() const;
		void		incGrade();
		void		decGrade();

		class GradeTooHighException: public std::exception {
			public:
				const char* what() const throw() { 
					return ("GradeTooHighException");
				}
		};
		class GradeTooLowException: public std::exception {
			public:
				const char* what() const throw() {
					return ("GradeTooLowException");
				}
		};
	private:
		Bureaucrat();
		std::string	_name;
		int			_grade;
		
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &base);