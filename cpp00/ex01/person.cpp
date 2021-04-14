/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   person.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 23:47:56 by ndeana            #+#    #+#             */
/*   Updated: 2020/12/21 03:38:12 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "person.hpp"

void	Person::print_all(void)
{
	std::cout.width(18);
	std::cout << std::right << "First name: " << this->first_name << std::endl;
	std::cout.width(18);
	std::cout << std::right << "Last name: " << this->last_name << std::endl;
	std::cout.width(18);
	std::cout << std::right << "Nickname: " << this->nickname << std::endl;
	std::cout.width(18);
	std::cout << std::right << "Login: " << this->login << std::endl;
	std::cout.width(18);
	std::cout << std::right << "Postal address: " << this->postal_address << std::endl;
	std::cout.width(18);
	std::cout << std::right << "Email address: " << this->email_address << std::endl;
	std::cout.width(18);
	std::cout << std::right << "Phone number: " << this->phone_number << std::endl;
	std::cout.width(18);
	std::cout << std::right << "Birthday date: " << this->birthday_date << std::endl;
	std::cout.width(18);
	std::cout << std::right << "Favorite meal: " << this->favorite_meal << std::endl;
	std::cout.width(18);
	std::cout << std::right << "Underwear color: " << this->underwear_color << std::endl;
	std::cout.width(18);
	std::cout << std::right << "Darkest secret: " << this->darkest_secret << std::endl;
}

void	Person::add_person(void)
{
	std::cout.width(18);
	std::cout << std::right << "First name: ";
	std::cin >> this->first_name;
	std::cout.width(18);
	std::cout << std::right << "Last name: ";
	std::cin >> this->last_name;
	std::cout.width(18);
	std::cout << std::right << "Nickname: ";
	std::cin >> this->nickname;
	std::cout.width(18);
	std::cout << std::right << "Login: ";
	std::cin >> this->login;
	std::cout.width(18);
	std::cout << std::right << "Postal address: ";
	std::cin >> this->postal_address;
	std::cout.width(18);
	std::cout << std::right <<  "Email address: ";
	std::cin >> this->email_address;
	std::cout.width(18);
	std::cout << std::right <<  "Phone number: ";
	std::cin >> this->phone_number;
	std::cout.width(18);
	std::cout << std::right << "Birthday date: ";
	std::cin >> this->birthday_date;
	std::cout.width(18);
	std::cout << std::right << "Favorite meal: ";
	std::cin >> this->favorite_meal;
	std::cout.width(18);
	std::cout << std::right << "Underwear color: ";
	std::cin >> this->underwear_color;
	std::cout.width(18);
	std::cout << std::right << "Darkest secret: ";
	std::cin >> this->darkest_secret;
}

void	Person::print_main(size_t index)
{
	std::cout.width(10);
	std::cout << std::left << index << "|";
	std::cout.width(10);
	if (this->first_name.length() > 10)
		std::cout << std::left << this->first_name.substr(0, 9).append(".") << '|';
	else
		std::cout << std::left << this->first_name << '|';
	std::cout.width(10);
	if (this->last_name.length() > 10)
		std::cout << std::left << this->last_name.substr(0, 9).append(".") << '|';
	else
		std::cout << std::left << this->last_name << '|';
	std::cout.width(10);
	if (this->nickname.length() > 10)
		std::cout << std::left << this->nickname.substr(0, 9).append(".") << '|' << std::endl;
	else
		std::cout << std::left << this->nickname << '|' << std::endl;
	
}
