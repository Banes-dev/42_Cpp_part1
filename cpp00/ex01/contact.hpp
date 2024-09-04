/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:17:38 by ehay              #+#    #+#             */
/*   Updated: 2024/09/04 13:12:12 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

// class
class Contact {
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _numphone;
		std::string _secret;
	public:
		Contact(void);
		~Contact(void);
		// Getter & Setter
		std::string GetFirstName() const;
		std::string GetLastName() const;
		std::string GetNickName() const;
		std::string GetNumphone() const;
		std::string GetSecret() const;

		void SetFirstName(std::string str);
		void SetLastName(std::string str);
		void SetNickName(std::string str);
		void SetNumphone(std::string str);
		void SetSecret(std::string str);
};

// function

#endif