/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/23 14:07:33 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Construtor etc
Animal::Animal() : _type("default")
{
	std::cout << "Animal " << "default" << " constructor called" << std::endl;
}

Animal::Animal(std::string recup_type) : _type(recup_type)
{
	std::cout << "Animal " << recup_type << " constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) : _type(copy._type)
{
	std::cout << "Copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_type = copy._type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal " << this->_type << " Destructor called" << std::endl;
}

// Other function
std::string Animal::getType(void) const
{
	return (this->_type);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal " << this->_type << " make a sound" << std::endl;
}
