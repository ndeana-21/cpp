#include <iostream>
#include "span.hpp"
#include <ctime>
#include <vector>
#include <cstdlib>
#include <algorithm>

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
	std::srand(std::time(NULL));
	
	printHeader("Standart test");
	{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	printHeader("With exception");
	try {
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	try {
		Span sp = Span(5);
		std::vector<int> vec;
		vec.push_back(5);
		vec.push_back(3);
		vec.push_back(17);
		vec.push_back(9);
		vec.push_back(11);
		vec.push_back(11);
		sp.addNumber(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	printHeader("Without exception");
	try {
		Span sp = Span(5);
		std::vector<int> vec;
		vec.push_back(5);
		vec.push_back(3);
		vec.push_back(17);
		vec.push_back(9);
		vec.push_back(11);
		sp.addNumber(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	printHeader("Random 10 000");
	try {
		Span sp = Span(10001);
		std::vector<int> vec(10001);
		std::generate(vec.begin(), vec.end(), std::rand);
		sp.addNumber(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
}
