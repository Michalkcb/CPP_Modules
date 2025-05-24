/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 13:42:16 by mbany             #+#    #+#             */
/*   Updated: 2025/05/24 16:01:56 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
• ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
• Hit points (FragTrap)
• Energy points (ScavTrap)
• Attack damage (FragTrap)
• attack() (Scavtrap)
*/
#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() : ClapTrap("_clap_name"), FragTrap(), ScavTrap() {
    std::cout << "DiamondTrap default constructor" << std::endl;
    this->hitpoints = 100;
    this->energy_points = 50;
    this->attack_damage = 30;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name + "_clap_name"), ScavTrap(name) {
	std::cout << "DiamondTrap constructor called" << std::endl;
    this->_hitpoints = 100;
    this->_energy_points = 50;
    this->_attack_damage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const& other) : ClapTrap(other), FragTrap(other), ScavTrap(other) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->_name = other._name;
	this->_hitpoints = other.hitpoints;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& src) {
    std::cout << "Assignation DiamondTrap operator called" << std::endl;
    this->_name = src._name;
    this->_hitpoints = src._hitpoints;
    this->_energy_points = src._energy_points;
    this->_attack_damage = src._attack_damage;
    return(*this);
}

void DiamondTrap::whoAmI() {
    std::cout << "I am DiamondTrap and ClapTrap named " << this->ClapTrap::_name << std::endl;
}