/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/10/10 15:37:44 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Construtor etc
Ice::Ice(const std::string recup_type) : _type(recup_type)
{
	std::cout << "Ice " << recup_type << " constructor called" << std::endl;
}

Ice::Ice(const Ice &copy) : _type(copy._type)
{
	std::cout << "Copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_type = copy._type;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice " << this->_type << " Destructor called" << std::endl;
}

// Other function
std::string const & Ice::getType() const  //Returns the materia type
{
	return (this->_type);
}
