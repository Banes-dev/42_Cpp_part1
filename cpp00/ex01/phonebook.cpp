/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:44:06 by ehay              #+#    #+#             */
/*   Updated: 2024/09/03 16:09:27 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
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
	std::getline(std::cin, str) ;
	instance.SetFirstName(str);
	std::cout << "\033[36m" << "Last Name :" << "\033[0m" << std::endl;
	std::getline(std::cin, str) ;
	instance.SetLastName(str);
	std::cout << "\033[36m" << "Nick Name :" << "\033[0m" << std::endl;
	std::getline(std::cin, str) ;
	instance.SetNickName(str);
	std::cout << "\033[36m" << "Phone Number :" << "\033[0m" << std::endl;
	std::getline(std::cin, str) ;
	instance.SetNumphone(str);
	std::cout << "\033[36m" << "shhhhhh secret ..." << "\033[0m" << std::endl;
	std::getline(std::cin, str) ;
	instance.SetSecret(str);
	
	this->_contacts[this->_index] = instance;
	if (_count_contact < 8)
		_count_contact = _count_contact + 1;
	this->_index = (this->_index + 1) % 8;
	std::cout << std::endl << "\033[32m" << "Contact Added ✓" << "\033[0m" << std::endl;
	return;
}

void PhoneBook::SearchContact(void) const
{
	std::cout << "Search ..." << std::endl;
	return;
}
