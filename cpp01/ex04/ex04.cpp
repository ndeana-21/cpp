/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 23:53:53 by ndeana            #+#    #+#             */
/*   Updated: 2021/03/18 01:32:15 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string	brain("HI THIS IS BRAIN");
	std::string	*brain_point = &brain;
	std::string	&brain_ref = brain;

	std::cout << *brain_point << std::endl; 
	std::cout << brain_ref << std::endl;
	return 0;
}
