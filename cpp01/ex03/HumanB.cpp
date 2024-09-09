/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:33:23 by ehay              #+#    #+#             */
/*   Updated: 2024/09/09 15:56:39 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Constructor & Destructor
HumanB::HumanB(std::string recup_name)
{
    this->_name = recup_name;
    // std::cout << this->_name << " created with " << this->weapon_type << std::endl;
}

HumanB::~HumanB(void)
{
    // std::cout << this->_name << " destructed" << std::endl;
}

// Other function
void HumanB::Attack(void)
{
    std::cout << this->_name << " attack with their ";
    if (this->_weapon)
        std::cout << this->_weapon->GetType() << std::endl;
    else
        std::cout << " fists only" << std::endl;
}

void HumanB::SetWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}
