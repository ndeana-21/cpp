#pragma once

class Form;

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"

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
		void		signForm(Form &);
		void		executeForm(Form const & form);

		class GradeTooHighException: public std::exception {
			const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			const char* what() const throw();
		};
	private:
		Bureaucrat();
		std::string	_name;
		int			_grade;
		
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &base);