/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:01:36 by mbany             #+#    #+#             */
/*   Updated: 2025/05/11 15:10:20 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 06: Harl filter
Exercise : 06
Harl filter
Turn-in directory : ex06/
Files to turn in : Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp
Forbidden functions : None
Sometimes you don’t want to pay attention to everything Harl says. Implement a
system to filter what Harl says depending on the log levels you want to listen to.
Create a program that takes as parameter one of the four levels. It will display all
messages from this level and above. For example:
$> ./harlFilter "WARNING"
[ WARNING ]
I think I deserve to have some extra bacon for free.
I've been coming for years whereas you started working here since last month.
[ ERROR ]
This is unacceptable, I want to speak to the manager now.
$> ./harlFilter "I am not sure how tired I am today..."
[ Probably complaining about insignificant problems ]
Although there are several ways to deal with Harl, one of the most effective is to
SWITCH it off.
Give the name harlFilter to your executable.
You must use, and maybe discover, the switch statement in this exercise.
*/

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: ./harlFilter <level>" << std::endl;
		return 1;
	}
	Harl harl;
	harl.complain(av[1]);
	
	return 0;
}