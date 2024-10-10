/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/10/10 15:55:55 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Ice
{
	protected:
		std::string _type;
	public:
		Ice(std::string const & type);
		Ice(const Ice &copy);
		Ice& operator=(const Ice &copy);
		~Ice(void);

		// other function
		std::string const & getType() const; //Returns the materia type

		// interface function
		Ice* clone() const = 0;
		void use(ICharacter& target);
};
