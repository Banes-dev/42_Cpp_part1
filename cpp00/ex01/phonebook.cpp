/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:44:06 by ehay              #+#    #+#             */
/*   Updated: 2024/09/04 15:57:36 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string truncate(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void PhoneBook::AddContact(void)
{
	Contact instance;
	std::string str;

	std::cout << "\033[36m" << "First Name :" << "\033[0m" << std::endl;
	if (std::getline(std::cin, str) && str != "" && str != " ")
		instance.SetFirstName(str);
	else
	{
		std::cout << std::endl << "\033[31m" << "Contact not added ×" << "\033[0m" << std::endl;
		return;
	}
	std::cout << "\033[36m" << "Last Name :" << "\033[0m" << std::endl;
	if (std::getline(std::cin, str) && str != "" && str != " ")
		instance.SetLastName(str);
	else
	{
		std::cout << std::endl << "\033[31m" << "Contact not added ×" << "\033[0m" << std::endl;
		return;
	}
	std::cout << "\033[36m" << "Nick Name :" << "\033[0m" << std::endl;
	if (std::getline(std::cin, str) && str != "" && str != " ")
		instance.SetNickName(str);
	else
	{
		std::cout << std::endl << "\033[31m" << "Contact not added ×" << "\033[0m" << std::endl;
		return;
	}
	std::cout << "\033[36m" << "Phone Number :" << "\033[0m" << std::endl;
	if (std::getline(std::cin, str) && str != "" && str != " ")
		instance.SetNumphone(str);
	else
	{
		std::cout << std::endl << "\033[31m" << "Contact not added ×" << "\033[0m" << std::endl;
		return;
	}
	std::cout << "\033[36m" << "shhhhhh secret ..." << "\033[0m" << std::endl;
	if (std::getline(std::cin, str) && str != "" && str != " ")
		instance.SetSecret(str);
	else
	{
		std::cout << std::endl << "\033[31m" << "Contact not added ×" << "\033[0m" << std::endl;
		return;
	}
	
	this->_contacts[this->_index] = instance;
	this->_index = (this->_index + 1) % 8;
	std::cout << std::endl << "\033[32m" << "Contact Added ✓" << "\033[0m" << std::endl;
	return;
}

void PhoneBook::SearchContact(void)
{
	int i = 0;
	std::string str;

	if (!this->_contacts[0].GetFirstName().empty())
	{
		std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
		std::cout << "|" << std::setw(7) << "Index" << std::setw(4);
		std::cout << "|" << std::setw(10) << "First Name";
		std::cout << "|" << std::setw(9) << "Last Name" << std::setw(2);
		std::cout << "|" << std::setw(9) << "Nick Name" << std::setw(2) << "|" << std::endl;
		std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
		while (i < 8)
		{
			Contact contact;
			contact = this->_contacts[i];
			std::cout << "|" << std::setw(10) << std::right << i + 1;
			std::cout << "|" << std::setw(10) << std::right << truncate(contact.GetFirstName());
			std::cout << "|" << std::setw(10) << std::right << truncate(contact.GetLastName());
			std::cout << "|" << std::setw(10) << std::right << truncate(contact.GetNickName()) << "|" << std::endl;
			i++;
		}
		std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;

		std::cout << std::endl << "\033[36m" << "Id of contact :" << "\033[0m" << std::endl;
		std::getline(std::cin, str);
		if (str.size() == 1 && str[0] >= '1' && str[0] <= '8')
		{
			if (!this->_contacts[str[0] - '1'].GetFirstName().empty())
			{
				Contact contact;
				contact = this->_contacts[str[0] - '1'];

				std::cout << "\033[33m" << "→ " << "First Name : " << "\033[36m" << contact.GetFirstName() << "\033[0m" << std::endl;
				std::cout << "\033[33m" << "→ " << "Last Name : " << "\033[36m" << contact.GetLastName() << "\033[0m" << std::endl;
				std::cout << "\033[33m" << "→ " << "Nick Name : " << "\033[36m" << contact.GetNickName() << "\033[0m" << std::endl;
				std::cout << "\033[33m" << "→ " << "Phone Number : " << "\033[36m" << contact.GetNumphone() << "\033[0m" << std::endl;
				std::cout << "\033[33m" << "→ " << "Secret : " << "\033[36m" << contact.GetSecret() << "\033[0m" << std::endl;
			}
			else
			{
				std::cout << "\033[31m" << "No contact with this ID" << "\033[0m" << std::endl;
			}
		}
	}
	else
		std::cout << "\033[34m" << "You don't have friend on your phone, " << "\033[35m" << "sad" << "\033[34m" << "..." << "\033[0m" << std::endl;
	return;
}
