/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:53:06 by mbany             #+#    #+#             */
/*   Updated: 2025/05/24 16:46:36 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;
public:
	ClapTrap(std::string name = "Default", unsigned int hitPoints = 10, unsigned int energyPoints = 10, unsigned int attackDamage = 0);
	~ClapTrap();
	
	void attack(const std::string& target);	
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	unsigned int getHitPoints() const { return hitPoints; }
	unsigned int getEnergyPoints() const { return energyPoints; }
	unsigned int getAttackDamage() const { return attackDamage; }
	std::string getName() const { return name;}
};

#endif
