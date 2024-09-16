/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/16 15:35:39 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _entier;
		static const int _fraction;
	public:
		Fixed(void);
		Fixed(int const nb);
		Fixed(float const nb);
		Fixed(const Fixed &copy);
		Fixed& operator=(const Fixed &copy);
		~Fixed(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		bool operator>(const Fixed &copy);
		bool operator<(const Fixed &copy);
		bool operator>=(const Fixed &copy);
		bool operator<=(const Fixed &copy);
		bool operator==(const Fixed &copy);
		bool operator!=(const Fixed &copy);

		Fixed operator+(const Fixed &copy);
		Fixed operator-(const Fixed &copy);
		Fixed operator*(const Fixed &copy);
		Fixed operator/(const Fixed &copy);

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		
		static			Fixed& min(Fixed& a, Fixed& b);
		static const	Fixed& min(const Fixed& a, const Fixed& b);
		static			Fixed& max(Fixed& a, Fixed& b);
		static const	Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);
