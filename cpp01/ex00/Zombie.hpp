/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:49:15 by ehay              #+#    #+#             */
/*   Updated: 2024/09/06 13:39:10 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

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

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif