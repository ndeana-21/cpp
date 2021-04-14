#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("Presidential Pardon Form", 25, 5) {
	setTarget(target);
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &form) : Form(form) {}
PresidentialPardonForm::~PresidentialPardonForm() {}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &form)
{
	if (this != &form)
		Form::operator= (form);
	return (*this);
}

void    PresidentialPardonForm::formFunction() const {
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
