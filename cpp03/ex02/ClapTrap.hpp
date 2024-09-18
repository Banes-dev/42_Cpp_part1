/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/18 13:53:33 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		unsigned int _hp;
		unsigned int _energy;
		unsigned int _attack_dmg;
	public:
		ClapTrap(std::string recup_name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap& operator=(const ClapTrap &copy);
		~ClapTrap(void);

		// Other function
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
