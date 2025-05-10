/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:06:10 by mbany             #+#    #+#             */
/*   Updated: 2025/05/10 15:27:12 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name), weapon(NULL)
{
}
void HumanB::setWeapon(Weapon &newWeapon)
{
	this->weapon = &newWeapon;
}
void HumanB::attack() const
{
	if (this->weapon != NULL)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon to attack with!" << std::endl;
}