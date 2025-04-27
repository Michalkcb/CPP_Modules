/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:45:08 by mbany             #+#    #+#             */
/*   Updated: 2025/04/27 14:33:09 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Just to make sure that everybody is awake, write a program that behaves as follows:
$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
$>
*/
#include <iostream>
#include <cctype>

//obsłużyć spację pomiędzy argumentami

void ft_toupper(char *s)
{
    for (int i = 0; s[i]; i++)
        std::cout << (char)toupper(s[i]);
}

int main(int ac, char **av)
{
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < ac; i++)
        {
            ft_toupper(av[i]);
            if (i != ac - 1)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}