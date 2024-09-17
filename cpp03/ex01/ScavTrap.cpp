/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/17 16:11:12 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

// Construtor etc
ScavTrap::ScavTrap(std::string recup_name) : _name(recup_name), _hp(10), _energy(10), _attack_dmg(0)
{
	std::cout << "ScavTrap " << recup_name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : _name(copy._name), _hp(copy._hp), _energy(copy._energy), _attack_dmg(copy._attack_dmg)
{
	std::cout << "Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = copy._name;
	this->_hp = copy._hp;
	this->_energy = copy._energy;
	this->_attack_dmg = copy._attack_dmg;
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
		this->_energy = this->_energy - 1;
	}
	else
		std::cout << "ScavTrap " << this->_name << " has not enought hp or energy for attack" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << "ScavTrap " << this->_name << " his already dead ..." << std::endl;
		return ;
	}
	if (amount > this->_hp)
	{
		this->_hp = 0;
		std::cout << "ScavTrap " << this->_name << " has just died" << std::endl;
	}
	else
	{
		this->_hp = this->_hp - amount;
		std::cout << "ScavTrap " << this->_name << " has taken " << amount << " damage, " << this->_hp << " hp remaining" << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_hp + amount > 10)
		this->_hp = 10;
	else
		this->_hp = this->_hp + amount;
	std::cout << "ScavTrap " << this->_name << " has repaired " << amount << " hp, " << this->_hp << " hp remaining" << std::endl;
}
