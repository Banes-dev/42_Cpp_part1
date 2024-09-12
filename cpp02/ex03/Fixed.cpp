/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/12 16:15:35 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fration = 8;

// Construtor etc
Fixed::Fixed(void) : _entier(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const nb)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_entier = (nb << _fration);
}

Fixed::Fixed(float const nb)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_entier = int(roundf(nb * (1 << _fration)));
}

Fixed::Fixed(const Fixed &copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->_entier = copy.getRawBits();
	// *this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_entier = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

// Other function
int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_entier);
}

void Fixed::setRawBits(const int raw)
{
	this->_entier = raw;
}

float Fixed::toFloat(void) const
{
	return (float(this->_entier) / (1 << _fration));
}

int Fixed::toInt(void) const
{
	return (this->_entier >> _fration);
}

// operator function
std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return o;
}

Fixed &Fixed::operator+(const Fixed &copy)
{
	Fixed result(this->toFloat() + copy.toFloat());
	return (result);
}

Fixed &Fixed::operator-(const Fixed &copy)
{
	Fixed result(this->toFloat() - copy.toFloat());
	return (result);
}

Fixed &Fixed::operator*(const Fixed &copy)
{
	Fixed result(this->toFloat() * copy.toFloat());
	return (result);
}

Fixed &Fixed::operator/(const Fixed &copy)
{
	Fixed result(this->toFloat() / copy.toFloat());
	return (result);
}

// function min and max
const Fixed &Fixed::min(const Fixed &copy, const Fixed &copy2)
{
	if (copy < copy2)
		return (copy);
	return (copy2);
}

const Fixed &Fixed::max(const Fixed &copy, const Fixed &copy2)
{
	if (copy > copy2)
		return (copy);
	return (copy2);
}
