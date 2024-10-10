/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/10/10 15:56:07 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Cure
{
	protected:
		std::string _type;
	public:
		Cure(std::string const & type);
		Cure(const Cure &copy);
		Cure& operator=(const Cure &copy);
		~Cure(void);

		// other function
		std::string const & getType() const; //Returns the materia type

		// interface function
		Cure* clone() const = 0;
		void use(ICharacter& target);
};
