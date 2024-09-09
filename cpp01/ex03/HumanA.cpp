/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:33:23 by ehay              #+#    #+#             */
/*   Updated: 2024/09/09 15:51:51 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// Constructor & Destructor
HumanA::HumanA(std::string recup_name, Weapon& recup_weapon) : _name(recup_name), _weapon(recup_weapon)
{
    // std::cout << this->_name << " created with " << this->weapon_type << std::endl;
}

HumanA::~HumanA(void)
{
    // std::cout << this->_name << " destructed" << std::endl;
}

// Other function
void HumanA::Attack(void)
{
    std::cout << this->_name << " attack with their " << this->_weapon.GetType() << std::endl;
}