/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:36:33 by michalkcb         #+#    #+#             */
/*   Updated: 2025/05/08 23:55:17 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 02: HI THIS IS BRAIN
Exercise : 02
HI THIS IS BRAIN
Turn-in directory : ex02/
Files to turn in : Makefile, main.cpp
Forbidden functions : None
Write a program that contains:
• A string variable initialized to "HI THIS IS BRAIN".
• stringPTR: A pointer to the string.
• stringREF: A reference to the string.
Your program has to print:
• The memory address of the string variable.
• The memory address held by stringPTR.
• The memory address held by stringREF.
And then:
• The value of the string variable.
• The value pointed to by stringPTR.
• The value pointed to by stringREF.
That’s all, no tricks. The goal of this exercise is to demystify references which can
seem completely new. Although there are some little differences, this is another syntax
for something you already do: address manipulation.
*/

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Memory address of the string variable: " << &str << std::endl;

    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;

    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "Value of the string variable: " << str << std::endl;

    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;

    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}