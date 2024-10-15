/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/10/15 14:13:53 by ehay             ###   ########.fr       */
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
	if (copy._type != "ice")
	{
		std::cout << "Sth wrong in Ice Assignation operator called" << std::endl;
		return (*this);
	}
	std::cout << "Ice copy assignment operator called" << std::endl;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice Destructor called" << std::endl;
}

// Other function
Ice* Ice::clone() const
{
	Ice *new_ice = new Ice();
	std::cout << "Ice clone has created" << std::endl;
	return (new_ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.GetName() << " *" << std::endl;
}
