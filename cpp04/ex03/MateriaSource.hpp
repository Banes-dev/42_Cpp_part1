/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/10/17 14:59:26 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "IMateriaSource.hpp"
// #include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materia_inventory[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		MateriaSource& operator=(const MateriaSource &copy);
		virtual ~MateriaSource(void);

		// other function
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const &type);
};
