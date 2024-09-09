/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:50:31 by ehay              #+#    #+#             */
/*   Updated: 2024/09/09 13:06:41 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << "Not enought zombie for create a horde" << std::endl;
		return (NULL);
	}
	Zombie *z = new Zombie[N];
	int i = 0;
	while (i < N)
	{
		z[i].SetName(name);
		i++;
	}
	return (z);
}
