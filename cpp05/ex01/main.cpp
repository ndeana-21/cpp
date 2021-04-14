#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	Bureaucrat pop("Pop", 101);
	std::cout << pop << std::endl;
	Form form1("Taxes", 100, 50);
	std::cout << form1 << std::endl;
	Bureaucrat bob("bob", 1);
	std::cout << bob << std::endl;
	Form form2("Taxes form 2", 100, 50);
	std::cout << form2 << std::endl;

    printHeader("WITH exception");
	try {
		Form formException("formException", 100, 0);
		std::cout << formException << std::endl;
	}
	catch(std::exception & e) {
		std::cerr  << "[Error 100|0 ]: " << e.what() << std::endl;
	}
	try {
		Form formException("formException", 0, 100);
		std::cout << formException << std::endl;
	}
	catch(std::exception & e) {
		std::cerr  << "[Error 0|100]: " << e.what() << std::endl;
	}
	try {
		Form formException("formException", 1000, 100);
		std::cout << formException << std::endl;
	}
	catch(std::exception & e) {
		std::cerr  << "[Error 1000|100]: " << e.what() << std::endl;
	}
	try {
		Form formException("formException", 100, 1000);
		std::cout << formException << std::endl;
	}
	catch(std::exception & e) {
		std::cerr  << "[Error 100|1000]: " << e.what() << std::endl;
	}
	try {
		form1.beSigned(pop);
		std::cout << form1 << std::endl;
	}
	catch(std::exception & e) {
		std::cerr  << "[Error beSigned 101 - 100]: " << e.what() << std::endl;
	}
	try {
		pop.signForm(form2);
	}
	catch(std::exception & e) {
		std::cerr  << "[Error]: " << e.what() << std::endl;
	}

    printHeader("WITHOUT exception");
	std::cout << form2 << std::endl;
	try {
		pop.decGrade();
		pop.signForm(form2);
	}
	catch(std::exception & e) {
		std::cerr  << "[Error signForm 100 - 100]: " << e.what() << std::endl;
	}
	std::cout << form2 << std::endl;
	std::cout << form1 << std::endl;
	try {
		bob.signForm(form1);
	}
	catch(std::exception & e) {
		std::cerr  << "[Error signForm 100 - 100]: " << e.what() << std::endl;
	}
	std::cout << form1 << std::endl;
    printHeader("EXIT");
    return (0);
}
