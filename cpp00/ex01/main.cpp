/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:44:06 by ehay              #+#    #+#             */
/*   Updated: 2024/09/03 15:30:16 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int main(void)
{
	PhoneBook instance;
	std::string command;

	while (true)
	{
		std::getline(std::cin, command);
		if (command == "ADD")
			instance.AddContact();
		if (command == "SEARCH")
			instance.SearchContact();
		if (command == "EXIT")
			break;
	}
    return (0);
}
