/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/10/15 16:16:00 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Construtor etc
Character::Character(std::string recup_name) : _name(recup_name)
{
	int i = 0;
	while (i < 4)
	{
		this->_inventory[i] = NULL;
		i++;
	}
	std::cout << "Character " << recup_name << " constructor called" << std::endl;
}

Character::Character(const Character &copy) : _name(copy._name)
{
	int i = 0;
	while (i < 4)
	{
		if (copy._inventory[i] != NULL)
			this->_inventory[i] = copy._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
		i++;
	}
	std::cout << "Character " << copy._name << " copy constructor called" << std::endl;
}

Character& Character::operator=(const Character &copy)
{
	if (this !=&copy)
	{
		this->_name = copy._name;
		int i = 0;
		while (i < 4)
		{
			if (this->_inventory[i] != NULL)
				delete this->_inventory[i];
			if (copy._inventory != NULL)
				this->_inventory = copy._inventory[i]->clone();
			else
				this->_inventory = NULL;
			i++;
		}
	}
	std::cout << "Character copy assignment operator called" << std::endl;
	return (*this);
}

Character::~Character(void)
{
	int i = 0;
	while (i < 4)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
		i++;
	}
	std::cout << "Character " << this->_name << " Destructor called" << std::endl;
}

// Other function
std::string const& getName(void) const
{
	
}

void equip(AMateria* m)
{
	int i = 0;
	while(i < 4)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break;
		}
		i++;
	}
}

void unequip(int idx)
{
	if (idx < 1 || idx > 4)
	{
		std::cout << "The number must be beetween 1 and 4" << std::endl;
		return ;
	}
	idx = idx - 1;
	if (this->_inventory[idx] != NULL)
	{
		std::cout << this->_name << "drop the " << this->_inventory[i]->getType() << " AMateria on the floor" << std::endl;
		// drop au sol le materia;
		this->_inventory[i] = NULL;
	}
	else
		std::cout << this->_name << "have not AMateria at this place of inventory" << std::endl;
}

void use(int idx, ICharacter& target)
{
	
}

