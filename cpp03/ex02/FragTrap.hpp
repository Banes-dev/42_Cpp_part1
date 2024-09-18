/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/18 13:57:49 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string recup_name);
		FragTrap(const FragTrap &copy);
		FragTrap& operator=(const FragTrap &copy);
		~FragTrap(void);

		// Other function
		void highFivesGuys(void);
};
