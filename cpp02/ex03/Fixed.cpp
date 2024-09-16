/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/16 15:44:44 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fraction = 8;

// Construtor etc
Fixed::Fixed(void) : _entier(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const nb) : _entier(nb << _fraction)
{
	// std::cout << "Int constructor called" << std::endl;
	// this->_entier = (nb << _fraction);
}

Fixed::Fixed(float const nb) : _entier(int(roundf(nb * (1 << _fraction))))
{
	// std::cout << "Float constructor called" << std::endl;
	// this->_entier = int(roundf(nb * (1 << _fraction)));
}

Fixed::Fixed(const Fixed &copy) : _entier(copy._entier)
{
	// std::cout << "Copy constructor called" << std::endl;
	// this->_entier = copy.getRawBits();
	// *this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_entier = copy._entier;
	return (*this);
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
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
	return (float(this->_entier) / (1 << _fraction));
}

int Fixed::toInt(void) const
{
	return (this->_entier >> _fraction);
}

// operator function
std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return o;
}

bool Fixed::operator>(const Fixed &copy)
{
	return (this->_entier > copy._entier);
}

bool Fixed::operator<(const Fixed &copy)
{
	return (this->_entier < copy._entier);
}

bool Fixed::operator>=(const Fixed &copy)
{
	return (this->_entier >= copy._entier);
}

bool Fixed::operator<=(const Fixed &copy)
{
	return (this->_entier <= copy._entier);
}

bool Fixed::operator==(const Fixed &copy)
{
	return (this->_entier == copy._entier);
}

bool Fixed::operator!=(const Fixed &copy)
{
	return (this->_entier != copy._entier);
}

Fixed Fixed::operator+(const Fixed &copy)
{
	Fixed result;
	result.setRawBits(this->_entier + copy._entier);
	return (result);
}

Fixed Fixed::operator-(const Fixed &copy)
{
	Fixed result;
	result.setRawBits(this->_entier - copy._entier);
	return (result);
}

Fixed Fixed::operator*(const Fixed &copy)
{
	Fixed result;
	result.setRawBits(this->_entier * copy._entier >> _fraction);
	return (result);
}

Fixed Fixed::operator/(const Fixed &copy)
{
	Fixed result;
	result.setRawBits(this->_entier * (1 << _fraction) / copy._entier);
	return (result);
}


Fixed &Fixed::operator++()
{
	this->_entier++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	this->_entier--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return (tmp);
}

// function min and max
Fixed& Fixed::min(Fixed& copy1, Fixed& copy2)
{
	if (copy1 > copy2)
		return (copy2);
	return (copy1);
}

Fixed& Fixed::max(Fixed& copy1, Fixed& copy2)
{
	if (copy1 < copy2)
		return (copy2);
	return (copy1);
}

const Fixed& Fixed::min(const Fixed& copy1, const Fixed& copy2)
{
	if (copy1._entier > copy2._entier)
		return (copy2);
	return (copy1);
}

const Fixed& Fixed::max(const Fixed& copy1, const Fixed& copy2)
{
	if (copy1._entier < copy2._entier)
		return (copy2);
	return (copy1);
}
