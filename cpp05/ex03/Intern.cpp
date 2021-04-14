#include "Intern.hpp"

static Form	*cr_PresidentialPardonForm(std::string const &target) {
	return (new PresidentialPardonForm(target));
}
static Form	*cr_RobotomyRequestForm(std::string const &target) {
	return (new RobotomyRequestForm(target));
}
static Form	*cr_ShrubberyCreationForm(std::string const &target) {
	return (new ShrubberyCreationForm(target));
}

Intern::Intern(Intern const &intern) : _num_of_temp(intern._num_of_temp) {
	_templates = new Templates*[_num_of_temp];

	int i = -1;
	while (++i < _num_of_temp)
		_templates[i] = new Templates;
	_templates[0]->form_name = "presidential pardon";
	_templates[0]->create_form = &cr_PresidentialPardonForm;
	_templates[1]->form_name = "robotomy request";
	_templates[1]->create_form = &cr_RobotomyRequestForm;
	_templates[2]->form_name = "shrubbery creation";
	_templates[2]->create_form = &cr_ShrubberyCreationForm;
}
Intern::Intern() : _num_of_temp(3) {
	_templates = new Templates*[_num_of_temp];

	int i = -1;
	while (++i < _num_of_temp)
		_templates[i] = new Templates;
	_templates[0]->form_name = "presidential pardon";
	_templates[0]->create_form = &cr_PresidentialPardonForm;
	_templates[1]->form_name = "robotomy request";
	_templates[1]->create_form = &cr_RobotomyRequestForm;
	_templates[2]->form_name = "shrubbery creation";
	_templates[2]->create_form = &cr_ShrubberyCreationForm;
}
Intern::~Intern() {
	int i = -1;
	while (++i < _num_of_temp)
		delete _templates[i];
	delete [] _templates;
}
Intern	&Intern::operator=(Intern const &intern) {
	if (this != &intern) {
		int i = -1;
		while (++i < _num_of_temp)
			delete _templates[i];
		delete [] _templates;

		_templates = new Templates*[_num_of_temp];
		i = -1;
		while (++i < _num_of_temp) {
			_templates[i] = 0;
			if (intern._templates[i])
				_templates[i] = new Templates(*(intern._templates[i]));
		}
	}
	return (*this);
}


Form	*Intern::makeForm(std::string const &name_of_form, std::string const &target) {
	Form *new_form;

	int i = -1;
	while (++i < 3)
		if (_templates[i]->form_name == name_of_form) {
			new_form = _templates[i]->create_form(target);
			std::cout << "Intern creates " << _templates[i]->form_name << std::endl;
			return (new_form);
		}
	std::cerr << "This form is not known" << std::endl;
	return (0);
}
