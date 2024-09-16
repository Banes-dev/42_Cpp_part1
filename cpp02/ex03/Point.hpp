/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/16 16:18:48 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

class Point
{
	private:
		Fixed _x;
		Fixed _y;
	public:
		Point(void);
		Point(const float recup_x, const float recup_y);
		Point(const Point &copy);
		Point& operator=(const Point &copy);
		~Point(void);

		// Get value of x & y
		Fixed const GetX(void) const;
		Fixed const GetY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
