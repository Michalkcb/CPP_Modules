/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 13:42:16 by mbany             #+#    #+#             */
/*   Updated: 2025/05/24 15:07:31 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
• ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
• Hit points (FragTrap)
• Energy points (ScavTrap)
• Attack damage (FragTrap)
• attack() (Scavtrap)
*/

#include "ClapTrap.hpp"
#include <string>

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(const std::string& name)
	: ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "DiamondTrap constructor called for " << _name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_name << " destroyed!\n" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "My DiamondTrap name is: " << _name << std::endl;
}
