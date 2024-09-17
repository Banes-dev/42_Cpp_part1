/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/17 14:14:16 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point A(1, 1);
	Point B(1, 10);
	Point C(10, 6);
	Point P_Good(6, 4);
	Point P_Wrong(10, 10);

	if (bsp(A, B, C, P_Good))
		std::cout << "\033[32m" << "Le point " << "P_Good" << " est dans le triangle ABC" << "\033[0m" << std::endl;
	else
		std::cout << "\033[31m" << "Le point " << "P_Good" << " n'est pas dans le triangle ABC" << "\033[0m" << std::endl;

	if (bsp(A, B, C, P_Wrong))
		std::cout << "\033[32m" << "Le point " << "P_Wrong" << " est dans le triangle ABC" << "\033[0m" << std::endl;
	else
		std::cout << "\033[31m" << "Le point " << "P_Wrong" << " n'est pas dans le triangle ABC" << "\033[0m" << std::endl;
}
