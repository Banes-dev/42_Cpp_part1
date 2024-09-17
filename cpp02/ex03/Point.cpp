/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/17 13:03:01 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Construtor etc
Point::Point(void) : _x(Fixed(0)), _y(Fixed(0))
{
	// std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float recup_x, const float recup_y) : _x(Fixed(recup_x)), _y(Fixed(recup_y))
{
	// std::cout << "Int constructor called" << std::endl;
}

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y)
{
	// std::cout << "Copy constructor called" << std::endl;
}

Point &Point::operator=(const Point &copy)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_x = copy._x;
	this->_y = copy._y;
	return (*this);
}

Point::~Point(void)
{
	// std::cout << "Destructor called" << std::endl;
}

// Get x & y

Fixed const Point::GetX(void) const
{
	return (this->_x);
}

Fixed const Point::GetY(void) const
{
	return (this->_y);
}
