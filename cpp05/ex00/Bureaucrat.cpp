#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooHighException();
	std::cout << this->_name << " was born" << std::endl;
}
Bureaucrat::Bureaucrat(Bureaucrat const& other) {
	this->_name = other._name;
	this->_grade = other._grade;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}
Bureaucrat::~Bureaucrat() {
	std::cout << this->_name << " is dead" << std::endl;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	this->_name = other._name;
	this->_grade = other._grade;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return(*this);
}

std::string	Bureaucrat::getName() const {return this->_name;}
int			Bureaucrat::getGrade() const {return this->_grade;}

void		Bureaucrat::incGrade() {
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
	std::cout << this->_name << " his grade was increas. Now it equals " << this->_grade << std::endl;
}
void		Bureaucrat::decGrade() {
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
	std::cout << this->_name << " his grade was decrease. Now it equals " << this->_grade << std::endl;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &base)
{
	return (os << "<" << base.getName() << "> , bureaucrat grade <" << base.getGrade() << ">.");
}