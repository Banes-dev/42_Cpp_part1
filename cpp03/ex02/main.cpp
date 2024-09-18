/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/18 14:41:33 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap john("John");
	ClapTrap jim("Jim");
	ClapTrap joe("Joe");
	ScavTrap yep("yep");
	FragTrap jaj("jaj");

	john.attack("Marge");
	john.attack("Bart");
	john.attack("Homer");
	john.takeDamage(5);
	jim.takeDamage(9);
	jim.takeDamage(10);
	joe.beRepaired(10);
	joe.takeDamage(19);
	yep.attack("Lisa");
	yep.takeDamage(99);
	yep.beRepaired(50);
	yep.guardGate();
	jaj.attack("Maggie");
	jaj.takeDamage(99);
	jaj.beRepaired(50);
	jaj.highFivesGuys();
}
