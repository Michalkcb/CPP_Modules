/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:29:36 by mbany             #+#    #+#             */
/*   Updated: 2025/05/22 18:25:45 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name, 100, 50, 20)
{
	std::cout << "FragTrap constructor called for " << name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		std::cout << "FragTrap attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap has no energy or hit points left to attack!" << std::endl;
	}
}

void FragTrap::guardGate()
{
	std::cout << "FragTrap is now in Gate keeper mode." << std::endl;
}