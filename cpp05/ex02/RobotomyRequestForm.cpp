#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("Robotomy Request Form", 72, 45)  {
	setTarget(target);
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &form) : Form(form) {}
RobotomyRequestForm::~RobotomyRequestForm() {}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &form) {
	if (this != &form)
		Form::operator= (form);
	return (*this);
}

void    RobotomyRequestForm::formFunction() const {  
	std::cout << "drdrdrrdrdrdrdr............drrrrrrrrrdrdrdrdrdrrd..drdrrdrd" << std::endl;
	std::cout << getTarget() << " has been robotomized successfully 50% of the time" << std::endl;
}
