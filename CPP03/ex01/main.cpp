/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:01:36 by mbany             #+#    #+#             */
/*   Updated: 2025/05/24 11:45:23 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 01: Serena, my love!
Exercise : 01
Serena, my love!
Turn-in directory : ex01/
Files to turn in : Files from previous exercise + ScavTrap.{h, hpp},
ScavTrap.cpp
Forbidden functions : None
Because you can never have enough ClapTraps, you will now create a derived robot.
It will be named ScavTrap and will inherit the constructors and destructor from ClapTrap. However, its constructors, destructor and attack() will print different messages.
After all, ClapTraps are aware of their individuality.
Note that proper construction/destruction chaining must be shown in your tests.
When a ScavTrap is created, the program starts by building a ClapTrap. Destruction is
in reverse order. Why?
ScavTrap will use the attributes of ClapTrap (update ClapTrap in consequence) and
must initialize them to:
• Name, which is passed as parameter to a constructor
• Hit points (100), represent the health of the ClapTrap
• Energy points (50)
• Attack damage (20)
ScavTrap will also have its own special capacity:
void guardGate();
This member function will display a message informing that ScavTrap is now in Gate
keeper mode.
Don’t forget to add more tests to your program.
*/
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int main() {
	ClapTrap a("Titanic", 200, 10, 1);
	ClapTrap b("Iceberg", 1000, 20, 5);
	ScavTrap c("Guardian");

	std::cout << "\nStart of fight " << std::endl;
	
	while ((a.getHitPoints() > 0 && a.getEnergyPoints() > 0) ||(b.getHitPoints() > 0 && b.getEnergyPoints() > 0) || (c.getHitPoints() > 0 && c.getEnergyPoints() > 0)) {
		if (a.getHitPoints() > 0 && a.getEnergyPoints() > 0) {
			a.attack("Iceberg");
			b.takeDamage(a.getAttackDamage());
		}

		if (b.getHitPoints() > 0 && b.getEnergyPoints() > 0) {
			b.attack("Guardian");
			c.takeDamage(b.getAttackDamage());
		}

		if (c.getHitPoints() > 0 && c.getEnergyPoints() > 0) {
			c.attack("Titanic");
			a.takeDamage(c.getAttackDamage());
			c.beRepaired(5);
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
	std::cout << "Guardian HP: " << c.getHitPoints() << "; Guardian EP: " << c.getEnergyPoints() << "\n " <<std::endl;
	return 0;
	
}