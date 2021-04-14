#include "mutantstack.hpp"
#include <stack>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <list>

void printHeader(std::string header, std::string color) {
	std::cout	<< color
				<< "<<<<< "
				<< header
				<< " >>>>>"
				<< "\033[0m"
				<< std::endl;
}

template <typename T>
static void		mstackPrint(MutantStack<T> &mstack) {
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator it_end = mstack.end();
	
	printHeader("Print mstack", "\033[1;35m");
	while (it != it_end) {
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	return;
}

int main(void) {
	srand(time(0));

	printHeader("Subj test", "\033[1;36m");
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator it_end = mstack.end();
		++it;
		--it;
		while (it != it_end)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	
	printHeader("STANDART TEST WITH LIST", "\033[1;36m");
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator it_end = mstack.end();
		++it;
		--it;
		while (it != it_end)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::list<int> s(mstack);
	}

	printHeader("STANDAR BEHAVIOUR", "\033[1;36m");
	MutantStack<int> mstack;
	mstack.push(rand() % 20);
	mstack.push(rand() % 20);
	mstackPrint(mstack);
	std::cout << "\033[1;33m- Checking size -\033[0m" << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << "\033[1;33m- Checking top -\033[0m" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "\033[1;33m- Popping last value  -\033[0m" << std::endl << std::endl;
	mstack.pop();
	mstackPrint(mstack);
	std::cout << "\033[1;33m- Checking size -\033[0m" << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << "\033[1;33m- Checking top -\033[0m" << std::endl;
	std::cout << mstack.top() << std::endl << std::endl;


	printHeader("ITERATORS", "\033[1;36m");
	mstack.push(rand() % 20);
	mstack.push(rand() % 20);
	mstack.push(rand() % 20);
	mstack.push(rand() % 20);
	mstack.push(rand() % 20);
	mstack.push(rand() % 20);
	mstack.push(rand() % 20);
	mstack.push(rand() % 20);
	mstackPrint(mstack);
	MutantStack<int>::iterator it1 = mstack.begin();
	MutantStack<int>::iterator ite1 = mstack.end();
	while(it1 != ite1) {
		std::cout << *it1 << " ";
		++it1;
	}
	std::cout << std::endl;
	MutantStack<int>::const_iterator it2 = mstack.begin();
	MutantStack<int>::const_iterator ite2 = mstack.end();
	std::cout << "\033[1;33m- Using those iterators to check the contents -\033[0m" << std::endl;
	while(it2 != ite2) {
		std::cout << *it2 << " ";
		++it2;
	}
	std::cout << std::endl << std::endl;
	
	printHeader("COPY CONSTRUCTOR AND ASSIGN OPERATOR", "\033[1;36m");
	MutantStack<int> cpy1(mstack);
	mstackPrint(cpy1);
	mstack.pop();
	mstackPrint(mstack);
	mstackPrint(cpy1);
	MutantStack<int> cpy2;
	cpy2 = mstack;
	mstackPrint(cpy2);
	mstack.pop();
	mstackPrint(mstack);
	mstackPrint(cpy2);

	return (0);
}