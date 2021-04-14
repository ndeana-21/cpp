#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void printHeader(std::string header)
{
	std::cout	<< "\033[1;35m"
				<< "<<<<< "
				<< header
				<< " >>>>>"
				<< "\033[0m"
				<< std::endl;
}

int main() {
	printHeader("Creation of bureaucrats and forms | without exceptions");
	Bureaucrat mike("Mike", 2);
	std::cout << mike << std::endl;

	Bureaucrat nick("Nick", 57);
	std::cout << nick << std::endl;

	Bureaucrat liz("Liz", 149);
	std::cout << liz << std::endl;
	std::cout << std::endl;

	ShrubberyCreationForm three("home");
	std::cout << three << std::endl;

	RobotomyRequestForm robot("son");
	std::cout << robot << std::endl;    
	
	PresidentialPardonForm pardon("you");
	std::cout << pardon << std::endl;
	std::cout << std::endl;
	
	printHeader("Executing | form is not signed");
	nick.executeForm(three);
	mike.executeForm(robot);
	std::cout << std::endl;

	printHeader("Signing | with exceptions");
	nick.signForm(pardon);
	std::cout << pardon << std::endl;
	std::cout << std::endl;
	liz.signForm(three);
	std::cout << three << std::endl;
	std::cout << std::endl;

	printHeader("Signing | without exceptions");
	mike.signForm(pardon);
	std::cout << pardon << std::endl;
	std::cout << std::endl;

	nick.signForm(robot);
	std::cout << robot << std::endl;
	std::cout << std::endl;

	nick.signForm(three);
	std::cout << three << std::endl;
	std::cout << std::endl;

	printHeader("Executing | form is signed | grade not enough");
	liz.executeForm(three);
	liz.executeForm(robot);
	liz.executeForm(pardon);
	std::cout << std::endl;

	printHeader("Executing | form is signed | grade not enough");
	nick.executeForm(three);
	std::cout << std::endl;
	mike.executeForm(robot);
	std::cout << std::endl;
	mike.executeForm(pardon);
	std::cout << std::endl;
	
	return (0);
}
