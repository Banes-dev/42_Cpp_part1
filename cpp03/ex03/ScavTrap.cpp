/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/18 13:41:26 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Construtor etc
ScavTrap::ScavTrap(std::string recup_name) : ClapTrap(recup_name)
{
	std::cout << "ScavTrap " << recup_name << " constructor called" << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_attack_dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " Destructor called" << std::endl;
}

// Other function
void ScavTrap::attack(const std::string& target)
{
	if (this->_hp > 0 && this->_energy > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage !" << std::endl;
		this->_energy = this->_energy - 5;
	}
	else
		std::cout << "ScavTrap " << this->_name << " has not enought hp or energy for attack" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
