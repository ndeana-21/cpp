#include "Bureaucrat.hpp"

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
    printHeader("WITHOUT exception");
	try {
		Bureaucrat pop("Pop", 75);
		std::cout << pop;
		pop.incGrade();
		std::cout << pop;
		pop.decGrade();
		std::cout << pop;
	}
	catch(std::exception & e) {
		std::cerr << "[Error]: " << e.what() << std::endl;
	}

    printHeader("WITH exception");
	try {
		Bureaucrat jack("Jack", 0);
		std::cout << jack;
	}
	catch(std::exception & e) {
		std::cerr << "[Error]: " << e.what() << std::endl;
	}
	try {
		Bureaucrat bob("Bob", 151);
		std::cout << bob;
	}
	catch(std::exception & e)
	{
		std::cerr << "[Error]: " << e.what() << std::endl;
	}
	try {
		Bureaucrat bill("Bill", 1);
		std::cout << bill;
		bill.decGrade();
		std::cout << bill;
		bill.incGrade();
		std::cout << bill;
	}
	catch(std::exception & e) {
		std::cerr << "[Error]: " << e.what() << std::endl;
	}
	try {
		Bureaucrat tod("Tod", 150);
		std::cout << tod;
		tod.incGrade();
		std::cout << tod;
		tod.decGrade();
		std::cout << tod;
	}
	catch(std::exception & e) {
		std::cerr << "[Error]: " << e.what() << std::endl;
	}
	
    return (0);
}