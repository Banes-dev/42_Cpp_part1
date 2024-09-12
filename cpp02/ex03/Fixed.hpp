/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/12 16:16:47 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _entier;
		static const int _fration;
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

		// >
		// <
		// >=
		// <=
		// ==
		// !=

		Fixed& operator+(const Fixed &copy);
		Fixed& operator-(const Fixed &copy);
		Fixed& operator*(const Fixed &copy);
		Fixed& operator/(const Fixed &copy);

		// ++a
		// a++
		// --a
		// a--
		
		static const Fixed &min(const Fixed &copy, const Fixed &copy2);
		static const Fixed &max(const Fixed &copy, const Fixed &copy2);
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);
