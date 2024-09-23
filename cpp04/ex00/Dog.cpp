/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/23 14:09:05 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Construtor etc
Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog " << "Dog" << " constructor called" << std::endl;
}

Dog::Dog(std::string recup_type) : Animal(recup_type)
{
	std::cout << "Dog " << recup_type << " constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->_type = copy._type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << this->_type << " Destructor called" << std::endl;
}

// Other function
void Dog::makeSound(void) const
{
	std::cout << this->_type << " say Waf Waf" << std::endl;
}
