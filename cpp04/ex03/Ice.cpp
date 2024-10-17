/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/10/17 14:10:05 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Construtor etc
Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice &copy)
{
	std::cout << "Ice copy assignment operator called" << std::endl;
	if (this != &copy) {
		AMateria::operator=(copy);
	}
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice Destructor called" << std::endl;
}

// Other function
AMateria* Ice::clone() const
{
	AMateria *new_ice = new Ice(*this);
	std::cout << "Ice clone has created" << std::endl;
	return (new_ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
