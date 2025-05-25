/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:01:36 by mbany             #+#    #+#             */
/*   Updated: 2025/05/25 12:39:44 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 00: Polymorphism
Exercise : 00
Polymorphism
Turn-in directory : ex00/
Files to turn in : Makefile, main.cpp, *.cpp, *.{h, hpp}
Forbidden functions : None
For every exercise, you have to provide the most complete tests you can.
Constructors and destructors of each class must display specific messages. Don’t use the
same message for all classes.
Start by implementing a simple base class called Animal. It has one protected
attribute:
• std::string type;
Implement a Dog class that inherits from Animal.
Implement a Cat class that inherits from Animal.
These two derived classes must set their type field depending on their name. Then,
the Dog’s type will be initialized to "Dog", and the Cat’s type will be initialized to "Cat".
The type of the Animal class can be left empty or set to the value of your choice.
Every animal must be able to use the member function:
makeSound()
It will print an appropriate sound (cats don’t bark).
Running this code should print the specific sounds of the Dog and Cat classes, not
the Animal’s.
int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
...
return 0;
}
To ensure you understood how it works, implement a WrongCat class that inherits
from a WrongAnimal class. If you replace the Animal and the Cat by the wrong ones
in the code above, the WrongCat should output the WrongAnimal sound.
Implement and turn in more tests than the ones given above.
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