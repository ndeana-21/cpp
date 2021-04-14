/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 22:56:10 by ndeana            #+#    #+#             */
/*   Updated: 2020/12/21 03:28:00 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "person.hpp"

bool	find_person(int index, Person *person, int count_persons)
{
	if (index < 1 || index > count_persons)
	{
		std::cout << "\x1b[31;1mERROR Invalid index\x1b[0m" << std::endl;
		return (false);
	}
	person[index - 1].print_all();
	return (true);
}

void	search(Person *person, int count_persons)
{
	std::string	tmp;
	int			index = 0;

	while (index < count_persons)
	{
		person[index].print_main(index + 1);
		index++;
	}
	index = 0;
	while (true)
	{
		std::cout << "\x1b[32;1mEnter index: \x1b[0m";
		std::cin >> tmp;
		index = std::atoi(tmp.c_str());
		if (find_person(index, person, count_persons))
			break ;
	}
	
}

void	phone_book(void)
{
	std::string	input;
	Person		*person = new Person[8];
	int			count_persons = 0;

	while (true)
	{
		std::cout << "\x1b[32;1mEnter comand: \x1b[0m";
		std::cin >> input;
		if (input == "ADD")
		{
			if (count_persons > 7)
				std::cout << "\x1b[31;1mThere is already have 8 persons\x1b[0m" << std::endl;
			else
				person[count_persons++].add_person();
		}
		else if (input == "SEARCH")
		{
			if (count_persons == 0)
				std::cout << "\x1b[31;1mThere is 0 persons\x1b[0m" << std::endl;
			else
				search(person, count_persons);
		}
		else if (input == "EXIT")
		{
			delete [] person;
			exit(0);
		}
		else
			std::cout << "\x1b[31;1mERROR relevant input is ADD, SEARCH and EXIT\x1b[0m" << std::endl;
	}
}

int 	main(int argc, char const *argv[])
{
	if (argc != 1)
	{
		std::cerr << "\x1b[31;1mERROR " << argv[0] << ": too many args\x1b[0m" << std::endl;
		return (1);
	}
	else
		phone_book();
	return (0);
}
