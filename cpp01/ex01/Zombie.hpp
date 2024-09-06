/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:49:15 by ehay              #+#    #+#             */
/*   Updated: 2024/09/06 16:36:14 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(void);
		~Zombie(void);

		void announce(void);
		std::string GetName(void);
		void SetName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);
