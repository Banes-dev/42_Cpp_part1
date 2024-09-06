/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:47:57 by ehay              #+#    #+#             */
/*   Updated: 2024/09/06 16:34:42 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int qtty = 3;

	Zombie *horde = zombieHorde(qtty, "Zombie Horde");
	// if (obj == NULL)
	// 	return (1);
	int i = 0;
	while (i < qtty)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
}
