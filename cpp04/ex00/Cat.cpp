/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/23 14:09:09 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Construtor etc
Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat " << "Cat" << " constructor called" << std::endl;
}

Cat::Cat(std::string recup_type) : Animal(recup_type)
{
	std::cout << "Cat " << recup_type << " constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->_type = copy._type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << this->_type << " Destructor called" << std::endl;
}

// Other function
void Cat::makeSound(void) const
{
	std::cout << this->_type << " say Miaouuuuuuuuuu" << std::endl;
}
