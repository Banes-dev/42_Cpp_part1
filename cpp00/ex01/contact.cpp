/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:44:06 by ehay              #+#    #+#             */
/*   Updated: 2024/09/03 15:40:17 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

// Constructor & Destructor
Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}


// Getter
std::string Contact::GetFirstName(void) const
{
	return (this->_firstname);
}

std::string Contact::GetLastName(void) const
{
	return (this->_lastname);
}

std::string Contact::GetNickName(void) const
{
	return (this->_nickname);
}

std::string Contact::GetNumphone(void) const
{
	return (this->_numphone);
}

std::string Contact::GetSecret(void) const
{
	return (this->_secret);
}

// Setter
void Contact::SetFirstName(std::string str)
{
	this->_firstname = str;
}

void Contact::SetLastName(std::string str)
{
	this->_lastname = str;
}

void Contact::SetNickName(std::string str)
{
	this->_nickname = str;
}

void Contact::SetNumphone(std::string str)
{
	this->_numphone = str;
}

void Contact::SetSecret(std::string str)
{
	this->_secret = str;
}
