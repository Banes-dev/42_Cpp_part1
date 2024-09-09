/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:33:23 by ehay              #+#    #+#             */
/*   Updated: 2024/09/09 15:38:52 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructor & Destructor
Weapon::Weapon(std::string type_recup)
{
    this->_type = type_recup;
    // std::cout << this->_type << "weapon created" << std::endl;
}

Weapon::~Weapon(void)
{
    // std::cout << this->_type << " destructed" << std::endl;
}

// Set and Get _type
void Weapon::SetType(std::string type_recup)
{
    this->_type = type_recup;
}

std::string Weapon::GetType(void)
{
    return (this->_type);
}