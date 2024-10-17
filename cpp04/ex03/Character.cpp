/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/10/17 16:14:21 by ehay             ###   ########.fr       */
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
	int i_ground = 0;
	while (i_ground < 1000)
	{
		this->_ground[i_ground] = NULL;
		i_ground++;
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
	int i_ground = 0;
	while (i_ground < 1000)
	{
		if (copy._ground[i_ground] != NULL)
			this->_ground[i_ground] = copy._ground[i_ground]->clone();
		else
			this->_ground[i_ground] = NULL;
		i_ground++;
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
			{
				delete this->_inventory[i];
				this->_inventory[i] = NULL;
			}
			if (copy._inventory[i] != NULL)
				this->_inventory[i] = copy._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
			i++;
		}
		int i_ground = 0;
		while (i_ground < 1000)
		{
			if (this->_ground[i_ground] != NULL)
			{
				delete this->_ground[i_ground];
				this->_ground[i_ground] = NULL;
			}
			if (copy._ground[i_ground] != NULL)
				this->_ground[i_ground] = copy._ground[i_ground]->clone();
			else
				this->_ground[i_ground] = NULL;
			i_ground++;
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
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		i++;
	}
	int i_ground = 0;
	while (i_ground < 1000)
	{
		if (this->_ground[i_ground] != NULL)
        {
            delete this->_ground[i_ground];
            this->_ground[i_ground] = NULL;
        }
		i_ground++;
	}
	std::cout << "Character " << this->_name << " Destructor called" << std::endl;
}

// Other function
std::string const& Character::getName(void) const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
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

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "The number must be beetween 1 and 4" << std::endl;
		return ;
	}
	if (this->_inventory[idx] != NULL)
	{
		std::cout << this->_name << " drop the " << this->_inventory[idx]->getType() << " AMateria on the floor" << std::endl;
		int i = 0;
		while (i < 1000)
		{
			if (this->_ground[i] == NULL)
			{
				this->_ground[i] = this->_inventory[idx];
				break;
			}
			i++;
		}
		this->_inventory[idx] = NULL;
	}
	else
		std::cout << this->_name << " have not AMateria at this place of inventory" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "The number must be beetween 1 and 4" << std::endl;
		return ;
	}
	if (this->_inventory[idx] != NULL)
	{
		std::cout << this->_name << " use " << this->_inventory[idx]->getType() << " on " << target.getName() << std::endl;
		this->_inventory[idx]->use(target);
	}
	else
		std::cout << this->_name << " have not AMateria at this place of inventory" << std::endl;
}

