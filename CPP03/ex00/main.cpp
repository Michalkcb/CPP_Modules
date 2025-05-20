/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:01:36 by mbany             #+#    #+#             */
/*   Updated: 2025/05/20 19:06:10 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 00: Aaaaand... OPEN!
Exercise : 00
Aaaaand... OPEN!
Turn-in directory : ex00/
Files to turn in : Makefile, main.cpp, ClapTrap.{h, hpp}, ClapTrap.cpp
Forbidden functions : None
First, you have to implement a class! How original!
It will be called ClapTrap and will have the following private attributes initialized
to the values specified in brackets:
• Name, which is passed as parameter to a constructor
• Hit points (10), represent the health of the ClapTrap
• Energy points (10)
• Attack damage (0)
Add the following public member functions so the ClapTrap looks more realistic:
• void attack(const std::string& target);
• void takeDamage(unsigned int amount);
• void beRepaired(unsigned int amount);
When ClapTrap attacks, it causes its target to lose <attack damage> hit points.
When ClapTrap repairs itself, it gets <amount> hit points back. Attacking and repairing
cost 1 energy point each. Of course, ClapTrap can’t do anything if it has no hit points or
energy points left. However, since these exercises serve as an introduction, the ClapTrap
instances should not interact directly with one another, and the parameters will not refer
to another instance of ClapTrap.

In all of these member functions, you have to print a message to describe what happens. For example, the attack() function may display something like (of course, without
the angle brackets):
ClapTrap <name> attacks <target>, causing <damage> points of damage!
The constructors and destructor must also display a message, so your peer-evaluators
can easily see they have been called.
Implement and turn in your own tests to ensure your code works as expected.
*/
#include "ClapTrap.hpp"

#include <iostream>

int main() {
	ClapTrap a("Titanic", 10, 10, 5);
	ClapTrap b("Iceberg", 10, 10, 5);

	while (true) {
		if (b.getHitPoints() == 0 || b.getEnergyPoints() == 0)
			break;
		b.attack("Titanic");
		a.takeDamage(b.getAttackDamage());

		if(a.getHitPoints() == 0)
			break;
			
		if (a.getEnergyPoints() == 0 || a.getHitPoints() == 0)
			break;
		a.attack("Iceberg");
		b.takeDamage(a.getAttackDamage());

		if (b.getEnergyPoints() == 0)
			break;
	}
	
	std::cout << "\nEnd of fight " << std::endl;
	std::cout << "Titanic HP: " << a.getHitPoints() << "; Titanic EP: " << a.getEnergyPoints() << std::endl;
	std::cout << "Iceberg HP: " << b.getHitPoints() << "; Iceberg EP: " << b.getEnergyPoints() << "\n " <<std::endl;
	return 0;
	
}