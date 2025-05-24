/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:53:06 by mbany             #+#    #+#             */
/*   Updated: 2025/05/24 17:38:16 by mbany            ###   ########.fr       */
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
	ClapTrap(std::string name = "Default", unsigned int hitPoints = 88, unsigned int energyPoints = 88, unsigned int attackDamage = 88);
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
