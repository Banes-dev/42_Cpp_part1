/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:06:57 by ehay              #+#    #+#             */
/*   Updated: 2024/09/17 14:10:58 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

float calcul(Point const p1, Point const p2, Point const p3)
{
    return std::abs((p1.GetX().toFloat() * (p2.GetY().toFloat() - p3.GetY().toFloat()) +
                    p2.GetX().toFloat() * (p3.GetY().toFloat() - p1.GetY().toFloat()) +
                    p3.GetX().toFloat() * (p1.GetY().toFloat() - p2.GetY().toFloat())) / 2.0f);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float aire_all = calcul(a, b, c);
    float aire_ab = calcul(point, a, b);
    float aire_bc = calcul(point, b, c);
    float aire_ac = calcul(point, c, a);

    // std::cout << "Aire totale : " << aire_all << std::endl;
	// std::cout << "Aire calcule: " << aire_ab + aire_bc + aire_ac << std::endl;
	if ((aire_ab + aire_bc + aire_ac) == aire_all)
		return (true);
	return (false);
}

