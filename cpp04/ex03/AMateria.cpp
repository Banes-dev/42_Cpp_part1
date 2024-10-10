/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/10/10 15:34:32 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Construtor etc
AMateria::AMateria(const std::string recup_type) : _type(recup_type)
{
	std::cout << "AMateria " << recup_type << " constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy) : _type(copy._type)
{
	std::cout << "Copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_type = copy._type;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria " << this->_type << " Destructor called" << std::endl;
}

// Other function
std::string const & AMateria::getType() const  //Returns the materia type
{
	return (this->_type);
}
