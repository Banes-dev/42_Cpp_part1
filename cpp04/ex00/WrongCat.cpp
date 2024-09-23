/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/23 15:05:03 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Construtor etc
WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat " << "WrongCat" << " constructor called" << std::endl;
}

WrongCat::WrongCat(std::string recup_type) : WrongAnimal(recup_type)
{
	std::cout << "WrongCat " << recup_type << " constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	this->_type = copy._type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << this->_type << " Destructor called" << std::endl;
}

// Other function
void WrongCat::makeSound(void) const
{
	std::cout << this->_type << " say Miaouuuuuuuuuu" << std::endl;
}
