/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/10/17 14:10:28 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Construtor etc
Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure &copy)
{
	std::cout << "Cure copy assignment operator called" << std::endl;
	if (this != &copy)
		AMateria::operator=(copy);
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure Destructor called" << std::endl;
}

// Other function
AMateria* Cure::clone() const
{
	AMateria *new_cure = new Cure(*this);
	std::cout << "Cure clone has created" << std::endl;
	return (new_cure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

