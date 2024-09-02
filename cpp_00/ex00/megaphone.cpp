/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:44:06 by ehay              #+#    #+#             */
/*   Updated: 2024/09/02 15:45:38 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

int main(int argc, char **argv)
{
	int argv_nb = 1;
	int argv_char_nb;
    if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[argv_nb] != NULL)
	{
		argv_char_nb = 0;
		while (argv[argv_nb][argv_char_nb] != '\0')
		{
			std::cout << (char)std::toupper(argv[argv_nb][argv_char_nb]);
			argv_char_nb++;
		}
		argv_nb++;
	}
	std::cout << std::endl;
    return (0);
}
