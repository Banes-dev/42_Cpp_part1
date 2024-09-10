/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:47:57 by ehay              #+#    #+#             */
/*   Updated: 2024/09/10 15:09:18 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	Harl harl;
	int i = 0;

	std::string list_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4 && list_level[i] != argv[1])
		i++;
	switch (i)
	{
		case 0:
		{
			std::cout << "[ " << list_level[0] << " ]" << std::endl;
			harl.complain(list_level[0]);
			std::cout << std::endl;
		}
		case 1:
		{
			std::cout << "[ " << list_level[1] << " ]" << std::endl;
			harl.complain(list_level[1]);
			std::cout << std::endl;
		}
		case 2:
		{
			std::cout << "[ " << list_level[2] << " ]" << std::endl;
			harl.complain(list_level[2]);
			std::cout << std::endl;
		}
		case 3:
		{
			std::cout << "[ " << list_level[3] << " ]" << std::endl;
			harl.complain(list_level[3]);
			std::cout << std::endl;
			break;
		}
		default: 
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
