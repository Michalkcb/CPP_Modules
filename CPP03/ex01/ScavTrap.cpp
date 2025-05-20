/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:29:36 by mbany             #+#    #+#             */
/*   Updated: 2025/05/20 19:46:18 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << name << " created!\n" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << ClapTrap::getHitPoints() << " HP unit\n" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (ClapTrap::getEnergyPoints() > 0 && ClapTrap::getHitPoints() > 0)
	{
		ClapTrap::attack(target);
		std::cout << "ScavTrap " << ClapTrap::getHitPoints() << " attacks " << target << ", causing " << ClapTrap::getAttackDamage() << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << ClapTrap::getHitPoints() << " has no energy or hit points left to attack!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << ClapTrap::getHitPoints() << " is now in Gate keeper mode!" << std::endl;
}