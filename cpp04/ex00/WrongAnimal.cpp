/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/23 14:50:13 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Construtor etc
WrongAnimal::WrongAnimal() : _type("default")
{
	std::cout << "WrongAnimal " << "default" << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string recup_type) : _type(recup_type)
{
	std::cout << "WrongAnimal " << recup_type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : _type(copy._type)
{
	std::cout << "Copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_type = copy._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal " << this->_type << " Destructor called" << std::endl;
}

// Other function
std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal " << this->_type << " make a sound" << std::endl;
}
