/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:48:39 by ehay              #+#    #+#             */
/*   Updated: 2024/09/06 13:44:07 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	// cree zombie dans la stack puis le nommer
	Zombie Zombie;
	Zombie.SetName(name);
	Zombie.announce();
}
