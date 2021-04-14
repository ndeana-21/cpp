#include "Bureaucrat.hpp"
#include "Intern.hpp"

void printHeader(std::string header)
{
	std::cout	<< "\033[1;35m"
				<< "<<<<< "
				<< header
				<< " >>>>>"
				<< "\033[0m"
				<< std::endl;
}

int main()
{
	Intern  someRandomIntern;
	Bureaucrat  sam = Bureaucrat("Sam", 1);

	Form    *robot;
	Form    *pardon;
	Form    *shrubbery;
	Form    *someone;

	robot = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *robot << std::endl;
	sam.signForm(*robot);
	sam.executeForm(*robot);
	std::cout << std::endl;

	pardon = someRandomIntern.makeForm("presidential pardon", "You");
	std::cout << *pardon << std::endl;
	sam.signForm(*pardon);
	sam.executeForm(*pardon);
	std::cout << std::endl;

	shrubbery = someRandomIntern.makeForm("shrubbery creation", "Home");
	std::cout << *shrubbery << std::endl;
	sam.signForm(*shrubbery);
	sam.executeForm(*shrubbery);
	std::cout << std::endl;

	someone = someRandomIntern.makeForm("strange request", "Sally");

	delete robot;
	delete pardon;
	delete shrubbery;

	return (0);
}
