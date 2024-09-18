/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/18 15:42:37 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Construtor etc
FragTrap::FragTrap(std::string recup_name) : ClapTrap(recup_name)
{
	std::cout << "FragTrap " << recup_name << " constructor called" << std::endl;
	this->_hp = 100;
	this->_energy = 100;
	this->_attack_dmg = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " Destructor called" << std::endl;
}

// Other function
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " want to do high fives !" << std::endl;
}
