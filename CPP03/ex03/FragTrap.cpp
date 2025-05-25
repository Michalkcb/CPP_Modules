/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:29:36 by mbany             #+#    #+#             */
/*   Updated: 2025/05/25 12:11:14 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name)
{
	this->energyPoints = 50;
	this->hitPoints = 100;
	this->attackDamage = 30;
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

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " <<  getName() << " requests high fives!" << std::endl;
}