/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 22:08:53 by smachell          #+#    #+#             */
/*   Updated: 2021/03/19 14:23:01 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}
SuperMutant::SuperMutant(const SuperMutant& other) : Enemy(other) {}
SuperMutant::~SuperMutant() {std::cout << "Aaargh..." << std::endl;}
SuperMutant& SuperMutant::operator=(const SuperMutant& other) {
	if (this != &other)
		Enemy::operator=(other);
	return *this;
}

void	SuperMutant::takeDamage(int damage) {
	damage -= 3;
	if (damage < 0)
		return;
	_hP = (damage > _hP) ? 0 : _hP - damage;
}
