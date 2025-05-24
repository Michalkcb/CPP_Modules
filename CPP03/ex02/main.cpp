/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:01:36 by mbany             #+#    #+#             */
/*   Updated: 2025/05/24 11:49:32 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 02: Repetitive work
Exercise : 02
Repetitive work
Turn-in directory : ex02/
Files to turn in : Files from previous exercises + FragTrap.{h, hpp},
FragTrap.cpp
Forbidden functions : None
Making ClapTraps is probably starting to get on your nerves.
Now, implement a FragTrap class that inherits from ClapTrap. It is very similar to
ScavTrap. However, its construction and destruction messages must be different. Proper
construction/destruction chaining must be shown in your tests. When a FragTrap is
created, the program starts by building a ClapTrap. Destruction is in reverse order.
Same things for the attributes, but with different values this time:
• Name, which is passed as parameter to a constructor
• Hit points (100), represent the health of the ClapTrap
• Energy points (100)
• Attack damage (30)
FragTrap has a special capacity too:
void highFivesGuys(void);
This member function displays a positive high fives request on the standard output.
Again, add more tests to your program
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