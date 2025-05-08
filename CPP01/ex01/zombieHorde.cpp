/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michalkcb <michalkcb@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:08:07 by mbany             #+#    #+#             */
/*   Updated: 2025/05/08 23:29:44 by michalkcb        ###   ########.fr       */
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

//utworzony obiekt istnieje poza funkcją
//nie jest automatycznie niszczony więc trzeba go dniszczyć po wywołaniu
// obiekt jest tworzony na stercie (heap)

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std:: ostringstream oss;
		oss << name << (i + 1);
		horde[i].setName(oss.str());
	}
	return horde;
}