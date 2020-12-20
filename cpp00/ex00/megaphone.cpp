/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:46:42 by ndeana            #+#    #+#             */
/*   Updated: 2020/12/08 22:58:38 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>

int main(int argc, char const *argv[])
{
	if (argc > 0)
	{
		if (argc == 1)
                std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		else
			for (int i = 1; i < argc; i++)
				for (int j = 0; argv[i][j]; j++)
					std::cout << (char)(toupper(argv[i][j])); 
		std::cout << std::endl;
	}
	return 0;
}
