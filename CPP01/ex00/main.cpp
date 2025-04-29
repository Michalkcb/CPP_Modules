/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:07:12 by mbany             #+#    #+#             */
/*   Updated: 2025/04/27 16:38:08 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 00: BraiiiiiiinnnzzzZ
Exercise : 00
BraiiiiiiinnnzzzZ
Turn-in directory : ex00/
Files to turn in : Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp,
newZombie.cpp, randomChump.cpp
Forbidden functions : None
First, implement a Zombie class. It has a string private attribute name.
Add a member function void announce( void ); to the Zombie class. Zombies
announce themselves as follows:
<name>: BraiiiiiiinnnzzzZ...
Don’t print the angle brackets (< and >). For a zombie named Foo, the message
would be:
Foo: BraiiiiiiinnnzzzZ...
Then, implement the two following functions:
• Zombie* newZombie( std::string name );
It creates a zombie, name it, and return it so you can use it outside of the function
scope.
• void randomChump( std::string name );
It creates a zombie, name it, and the zombie announces itself.
Now, what is the actual point of the exercise? You have to determine in what case
it’s better to allocate the zombies on the stack or heap.
Zombies must be destroyed when you don’t need them anymore. The destructor must
print a message with the name of the zombie for debugging purposes.
*/
#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	Zombie* heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete heapZombie;

	randomChump("BigZombie");
	randomChump("SmallZombie");
	randomChump("FatZombie");
	randomChump("SkinnyZombie");
	randomChump("HeadlessZombie");
	randomChump("LeglessZombie");
	randomChump("StackZombie");

	return 0;
}