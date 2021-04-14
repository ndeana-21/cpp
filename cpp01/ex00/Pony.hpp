/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 23:16:16 by ndeana            #+#    #+#             */
/*   Updated: 2021/03/16 17:00:56 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <string>
#include <iostream>

class Pony {
	private:
		std::string	_name;
		std::string	_color;
		float		_hight;
		float		_weight;
		float		_age;

	public:
		Pony(std::string name="Johan");
		Pony(std::string name="Johan", std::string color="Black", float hight=1, float weight=20, float age=0);
		~Pony();
		void	ponyDoSomething();
};

#endif