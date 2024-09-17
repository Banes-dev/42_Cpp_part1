/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/17 16:07:06 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Construtor etc
ClapTrap::ClapTrap(std::string recup_name) : _name(recup_name), _hp(10), _energy(10), _attack_dmg(0)
{
	std::cout << "ClapTrap " << recup_name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : _name(copy._name), _hp(copy._hp), _energy(copy._energy), _attack_dmg(copy._attack_dmg)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = copy._name;
	this->_hp = copy._hp;
	this->_energy = copy._energy;
	this->_attack_dmg = copy._attack_dmg;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " Destructor called" << std::endl;
}

// Other function
void ClapTrap::attack(const std::string& target)
{
	if (this->_hp > 0 && this->_energy > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage !" << std::endl;
		// attacker le claptrap avec le nom <target>
		this->_energy = this->_energy - 1;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has not enought hp or energy for attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << "ClapTrap " << this->_name << " his already dead ..." << std::endl;
		return ;
	}
	if (amount > this->_hp)
	{
		this->_hp = 0;
		std::cout << "ClapTrap " << this->_name << " has just died" << std::endl;
	}
	else
	{
		this->_hp = this->_hp - amount;
		std::cout << "ClapTrap " << this->_name << " has taken " << amount << " damage, " << this->_hp << " hp remaining" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp + amount > 10)
		this->_hp = 10;
	else
		this->_hp = this->_hp + amount;
	std::cout << "ClapTrap " << this->_name << " has repaired " << amount << " hp, " << this->_hp << " hp remaining" << std::endl;
}
