/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 22:56:07 by ndeana            #+#    #+#             */
/*   Updated: 2020/12/21 03:17:14 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_HPP
#define PERSON_HPP

#include <cstring>
#include <stdio.h>
#include <iostream>

class Person
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	login;
		std::string	postal_address;
		std::string	email_address;
		std::string	phone_number;
		std::string	birthday_date;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;

	public:
		void		print_all(void);
		void		add_person(void);
		void		print_main(size_t index);
};

#endif