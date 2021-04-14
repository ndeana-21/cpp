#include "Array.hpp"
#include <iostream>

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
	printHeader("Test basic int array");
	{
		Array<int> arr(3);

		std::cout << arr << std::endl;
		arr[0] = 1;
		arr[1] = 3;
		arr[2] = 5;
		std::cout << arr << std::endl;
	}
	printHeader("Test basic int array");
	{
		Array<int> arr(2);

		arr[0] = 1;
		arr[1] = 3;
		try {
			arr[2] = 5;
		}
		catch(std::out_of_range &e){
			std::cout << e.what() << std::endl;
		}
		std::cout << arr << std::endl;
	}
	printHeader("Test string + copy array");
	{
		Array<std::string> arr(3);
		Array<std::string> arr2;
		Array<std::string> arr3(3);

		arr[0] = "one";
		arr[1] = "two";
		arr[2] = "three";

		arr3 = arr2 = arr;
	
		std::cout << arr << std::endl;
		std::cout << arr2 << std::endl;
		std::cout << arr3 << std::endl;

		arr3[0] = "CHANGED";

		std::cout << arr << std::endl;
		std::cout << arr2 << std::endl;
		std::cout << arr3 << std::endl;
	}
	return 0;
}