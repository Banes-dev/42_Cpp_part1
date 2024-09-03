/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:17:38 by ehay              #+#    #+#             */
/*   Updated: 2024/09/03 16:16:33 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>

// class
class PhoneBook {
	private:
		Contact _contacts[8];
		int _count_contact;
		int _index;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void AddContact(void);
		void SearchContact(void) const;
		int GetCount() const;
};

// function

#endif