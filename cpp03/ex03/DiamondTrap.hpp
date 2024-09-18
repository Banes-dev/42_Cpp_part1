/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/18 16:07:29 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap(std::string recup_name);
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap& operator=(const DiamondTrap &copy);
		~DiamondTrap(void);

		// Other function
		void attack(std::string const &target);
		void whoAmI(void);
};
