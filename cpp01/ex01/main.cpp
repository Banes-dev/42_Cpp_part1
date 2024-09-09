/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:47:57 by ehay              #+#    #+#             */
/*   Updated: 2024/09/09 13:15:38 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int i;

	Zombie *z = zombieHorde(4, "test");
	i = 0;
	while (i < 4)
	{
		z[i].announce();
		i++;
	}
	delete[] z;
	z = zombieHorde(0, "nop");
	i = 0;
	while (i < 0)
	{
		z[i].announce();
		i++;
	}
	delete[] z;
	z = zombieHorde(100000, "lot");
	i = 0;
	while (i < 100000)
	{
		z[i].announce();
		i++;
	}
	delete[] z;
}
