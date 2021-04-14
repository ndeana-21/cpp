#include "Form.hpp"

Form::Form() {}
Form::Form(std::string name, int sign, int execute) {
	this->_name = name;
	this->_sign = false;
	this->_num_sign = sign;
	this->_num_execute = execute;
	if (this->_num_sign < 1 || this->_num_execute < 1)
		throw Form::GradeTooHighException();
	else if (this->_num_sign > 150 || this->_num_execute > 150)
		throw Form::GradeTooLowException();	
}
Form::Form(Form const &other) {
	this->_name = other._name;
	this->_sign = false;
	this->_num_sign = other._num_sign;
	this->_num_execute = other._num_execute;
}
Form::~Form() {
	std::cout << "Form [" << this->_name << "]: " << "DESTROY" << std::endl;
}
Form &Form::operator=(Form const &other) {
	this->_name = other._name;
	this->_sign = false;
	this->_num_sign = other._num_sign;
	this->_num_execute = other._num_execute;
	return(*this);
}
std::ostream &operator<<(std::ostream &os, Form const &base) {
	os << "[" << base.getName() << "]: " << "Sign: " << "<" << ((base.getSigned()) ? "✓" : "×") << "> ";
	return (os);
}

std::string Form::getName() const {
	return (this->_name);
}
int Form::getNumSign() const {
	return (this->_num_sign);
}
int Form::getNumExecute() const {
	return (this->_num_execute);
}
bool Form::getSigned(void) const {
	return (this->_sign);
}
std::string const	&Form::getTarget(void) const {
	return (_target);
}

void	Form::setTarget(std::string const &target) {
	_target = target;
}

const char  *Form::GradeTooHighException::what() const throw() {
	return ("Form::GradeTooHighException");
}
const char  *Form::GradeTooLowException::what() const throw() {
	return ("Form::GradeTooLowException");
}
const char  *Form::FormIsNotSigned::what() const throw() {
	return ("* This form is not signed yet. You cannot execute it *");
}

void Form::beSigned(Bureaucrat const &base) {
	if (this->_sign)
		return ;
	if (base.getGrade() > this->_num_sign)
		throw Form::GradeTooLowException();
	this->_sign = true;
	std::cout << "[" << this->_name << "]: " << "signed by a " << "<" << base.getName() << ">" << std::endl;
}

void    Form::execute(Bureaucrat const &executor) const {
	if (getSigned() == false)
		throw (Form::FormIsNotSigned());
	if (executor.getGrade() > getNumExecute())
		throw (Form::GradeTooLowException());
	formFunction();
}