/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/19 13:07:10 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Construtor etc
DiamondTrap::DiamondTrap(std::string recup_name) : ClapTrap(recup_name + "_clap_name"), ScavTrap("default"), FragTrap("default"), _name(recup_name)
{
	std::cout << "DiamondTrap " << recup_name << " constructor called" << std::endl;
	this->FragTrap::_hp = 100;
	this->ScavTrap::_energy = 50;
	this->FragTrap::_attack_dmg = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap("default"), FragTrap("default")
{
	std::cout << "Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	ClapTrap::operator=(copy);
	ScavTrap("default");
	FragTrap("default");
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " Destructor called" << std::endl;
}

// Other function
void DiamondTrap::attack(std::string const &target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << this->_name << " and my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}
