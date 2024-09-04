/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:17:38 by ehay              #+#    #+#             */
/*   Updated: 2024/09/04 15:23:23 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <iomanip>

// class
class PhoneBook {
	private:
		Contact _contacts[8];
		int _index;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void AddContact(void);
		void SearchContact(void);
		Contact get_contact(int index);
};

// function

#endif