/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:48:19 by ehay              #+#    #+#             */
/*   Updated: 2024/09/06 13:46:04 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	// cree zombie dans la heap puis setname
	Zombie *zombie= new Zombie();
	zombie->SetName(name);
	return (zombie);
}
