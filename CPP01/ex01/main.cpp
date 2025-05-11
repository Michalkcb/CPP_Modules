/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:07:12 by mbany             #+#    #+#             */
/*   Updated: 2025/05/11 15:33:23 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 01: Moar brainz!
Exercise : 01
Moar brainz!
Turn-in directory : ex01/
Files to turn in : Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp,
zombieHorde.cpp
Forbidden functions : None
Time to create a horde of Zombies!
Implement the following function in the appropriate file:
Zombie* zombieHorde( int N, std::string name );
It must allocate N Zombie objects in a single allocation. Then, it has to initialize the
zombies, giving each one of them the name passed as parameter. The function returns a
pointer to the first zombie.
Implement your own tests to ensure your zombieHorde() function works as expected.
Try to call announce() for each one of the zombies.
Don’t forget to delete all the zombies and check for memory leaks.
*/
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	int N = 10;
	Zombie* horde = zombieHorde(N, "Stupid ");

	for (int i = 0; i < N; i++)
		horde[i].announce();

	// for (int i = 0; i < 10; ++i)
	delete[] horde;
		
	return 0;
}