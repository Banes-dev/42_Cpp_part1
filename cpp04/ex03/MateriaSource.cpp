/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/10/17 15:02:52 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Construtor etc
MateriaSource::MateriaSource(void)
{
	int i = 0;
	while (i < 4)
	{
		this->_materia_inventory[i] = NULL;
		i++;
	}
	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	int i = 0;
	while (i < 4)
	{
		if (copy._materia_inventory[i] != NULL)
			this->_materia_inventory[i] = copy._materia_inventory[i]->clone();
		else
			this->_materia_inventory[i] = NULL;
		i++;
	}
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &copy)
{
	if (this !=&copy)
	{
		int i = 0;
		while (i < 4)
		{
			if (this->_materia_inventory[i] != NULL)
				delete this->_materia_inventory[i];
			if (copy._materia_inventory != NULL)
				this->_materia_inventory[i] = copy._materia_inventory[i]->clone();
			else
				this->_materia_inventory[i] = NULL;
			i++;
		}
	}
	std::cout << "MateriaSource copy assignment operator called" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	int i = 0;
	while (i < 4)
	{
		delete this->_materia_inventory[i];
		i++;
	}
	std::cout << "MateriaSource Destructor called" << std::endl;
}

// Other function
void MateriaSource::learnMateria(AMateria* materia)
{
	if (materia == NULL)
		return ;
	int i = 0;
	while (i < 4)
	{
		if (this->_materia_inventory[i] == NULL)
		{
			this->_materia_inventory[i] = materia;
			std::cout << materia->getType() << " add to MateriaSource" << std::endl;
			return ;
		}
		i++;
	}
	std::cout << "MateriaSource can't lean more materia" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	while (i < 4)
	{
		if (this->_materia_inventory[i] != NULL && this->_materia_inventory[i]->getType() == type)
			return (this->_materia_inventory[i]->clone());
		i++;
	}
	return (0);
}
