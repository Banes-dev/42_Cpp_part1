/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:09:58 by ehay              #+#    #+#             */
/*   Updated: 2024/09/06 16:36:02 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	// if (N < 1)
	// {
	// 	std::cout << "\033[31m" << "The horde cannot be less than 1" << "\033[0m" << std::endl;
	// 	return (NULL);
	// }
	Zombie *horde = new Zombie[N];
	// if (z == NULL)
	// {
	// 	std::cout << "\033[31m" << "The allocation has failed" << "\033[0m" << std::endl;
	// 	return (NULL);
	// }
	int i = 0;
	while (i <= N)
	{
		horde[i].SetName(name);
		i++;
	}
	return (horde);
}
