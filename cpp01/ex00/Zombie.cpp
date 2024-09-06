/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:49:09 by ehay              #+#    #+#             */
/*   Updated: 2024/09/06 13:36:36 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor & Destructor
Zombie::Zombie(void)
{
	std::cout << this->_name << "\033[32m" << " created" << "\033[0m" <<  std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << "\033[31m" << " destructed" << "\033[0m" <<  std::endl;
}

// Name setter & getter
std::string Zombie::GetName(void)
{
	return (this->_name);
}

void Zombie::SetName(std::string recup_name)
{
	Zombie::_name = recup_name;
}

// Announce
void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." <<  std::endl;
}
