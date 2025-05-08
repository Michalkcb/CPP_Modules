/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:08:07 by mbany             #+#    #+#             */
/*   Updated: 2025/05/08 23:42:05 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("")
{
}

Zombie::Zombie(std::string name) : name(name)
{
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " destroyed." << std::endl;
}
void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announce(void) const
{
	std::cout << name << ": MooooaaaaR BraiiiiiiinnnzzzZ..." << std::endl;
}
