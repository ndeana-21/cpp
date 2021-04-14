#include "iter.hpp"
#include <iostream>
#include <string>

template<typename T, size_t SIZE>
void print(const T (&to_print)[SIZE]){
	std::cout << "{";
	for (size_t i = 0; i < SIZE; i++) {
		if (i > 0)
			std::cout << ", ";
		std::cout << to_print[i];
	}
	std::cout << "}" << std::endl;
}

void funcInt(int &i){
	i += i-3;
}

void funcstring(std::string &s){
	s += "_NEW";
}

template<typename T>
void funcTemplate(const T &s){
	s += s;
}

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
	printHeader("Test int");
	{
		int arr[] = {1,2,3,4,5};

		print(arr);
		iter(arr, 5, funcInt);
		print(arr);
	}
	printHeader("Test String");
	{
		std::string arr[] = {"A","B","C","D","E"};

		print(arr);
		iter(arr, 5, ::funcstring);
		print<std::string>(arr);
	}
	
	printHeader("Test String");
	{
		std::string arr[] = {"A","B","C","D","E"};

		print(arr);
		
		iter(arr, 5, &funcTemplate<std::string &>);
		print(arr);
		iter(arr, 5, &funcTemplate<std::string &>);
		print(arr);
	}
	return 0;
}