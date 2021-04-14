#include <iostream>

#include <vector>
#include "easyfind.hpp"

int main() {
	std::vector<int> vec;
	
	for (int i = 0; i < 20; i++){
		vec.push_back(i);
	}
	try {
		std::cout << *easyfind(vec, 0) << std::endl;
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	try {
		std::cout << *easyfind(vec, 15) << std::endl;
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	try {
		std::cout << *easyfind(vec, -1) << std::endl;
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
}
