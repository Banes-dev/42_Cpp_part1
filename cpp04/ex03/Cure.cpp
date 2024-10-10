/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/10/10 15:37:27 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Construtor etc
Cure::Cure(const std::string recup_type) : _type(recup_type)
{
	std::cout << "Cure " << recup_type << " constructor called" << std::endl;
}

Cure::Cure(const Cure &copy) : _type(copy._type)
{
	std::cout << "Copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_type = copy._type;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure " << this->_type << " Destructor called" << std::endl;
}

// Other function
std::string const & Cure::getType() const  //Returns the materia type
{
	return (this->_type);
}
