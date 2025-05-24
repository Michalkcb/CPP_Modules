/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:01:36 by mbany             #+#    #+#             */
/*   Updated: 2025/05/24 11:52:37 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 03: Now it’s weird!
Exercise : 03
Now it’s weird!
Turn-in directory : ex03/
Files to turn in : Files from previous exercises + DiamondTrap.{h, hpp},
DiamondTrap.cpp
Forbidden functions : None
In this exercise, you will create a monster: a ClapTrap that’s half FragTrap, half
ScavTrap. It will be named DiamondTrap, and it will inherit from both the FragTrap
AND the ScavTrap. This is so risky!
The DiamondTrap class will have a name private attribute. Give to this attribute
exactly the same variable’s name (not talking about the robot’s name here) than the one
in the ClapTrap base class.
To be more clear, here are two examples.
If ClapTrap’s variable is name, give the name name to the one of the DiamondTrap.
If ClapTrap’s variable is _name, give the name _name to the one of the DiamondTrap.
Its attributes and member functions will be picked from either one of its parent classes:
• Name, which is passed as parameter to a constructor
• ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
• Hit points (FragTrap)
• Energy points (ScavTrap)
• Attack damage (FragTrap)
• attack() (Scavtrap)
In addition to the special functions of both its parent classes, DiamondTrap will have
its own special capacity:
void whoAmI();
This member function will display both its name and its ClapTrap name.
Of course, the ClapTrap subject of the DiamondTrap will be created once, and only
once. Yes, there’s a trick.
Again, add more tests to your program.
*/
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>

int main() {
	ClapTrap a("Titanic", 200, 10, 1);
	ClapTrap b("Iceberg", 1000, 20, 5);
	ScavTrap c("Guardian");
	FragTrap d("High5");

	std::cout << "\nStart of fight " << std::endl;
	
	while ((a.getHitPoints() > 0 && a.getEnergyPoints() > 0) ||(b.getHitPoints() > 0 && b.getEnergyPoints() > 0) || (c.getHitPoints() > 0 && c.getEnergyPoints() > 0)) {
		if (a.getHitPoints() > 0 && a.getEnergyPoints() > 0) {
			a.attack("Iceberg");
			b.takeDamage(a.getAttackDamage());
			d.highFivesGuys();
		}

		if (b.getHitPoints() > 0 && b.getEnergyPoints() > 0) {
			b.attack("Guardian");
			c.takeDamage(b.getAttackDamage());
			d.highFivesGuys();

		}

		if (c.getHitPoints() > 0 && c.getEnergyPoints() > 0) {
			c.attack("Titanic");
			a.takeDamage(c.getAttackDamage());
			c.beRepaired(5);
			d.highFivesGuys();

		}

		std::cout << "---------------------------" << std::endl;

		// Opcjonalnie: przerwij, jeśli jeden z nich zginie
		if (
			a.getHitPoints() == 0 ||
			b.getHitPoints() == 0 ||
			c.getHitPoints() == 0
		)
			break;
	}
	
	std::cout << "\n ScavTrap " <<  std::endl;
	c.guardGate();
	
	std::cout << "\nEnd of fight " << std::endl;
	std::cout << "Titanic HP: " << a.getHitPoints() << "; Titanic EP: " << a.getEnergyPoints() << std::endl;
	std::cout << "Iceberg HP: " << b.getHitPoints() << "; Iceberg EP: " << b.getEnergyPoints() << std::endl;
	std::cout << "Guardian HP: " << c.getHitPoints() << "; Guardian EP: " << c.getEnergyPoints() <<std::endl;
	std::cout << "High5 HP: " << d.getHitPoints() << "; High5 EP: " << d.getEnergyPoints() <<std::endl;
	return 0;
}