/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:01:36 by mbany             #+#    #+#             */
/*   Updated: 2025/06/30 17:12:40 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Exercise 00: Mommy, when I grow
up, I want to be a bureaucrat!
Exercise : 00
Mommy, when I grow up, I want to be a bureaucrat!
Turn-in directory : ex00/
Files to turn in : Makefile, main.cpp, Bureaucrat.{h, hpp}, Bureaucrat.cpp
Forbidden functions : None
Please note that exception classes don’t have to be designed in
Orthodox Canonical Form. But every other class has to.
Let’s design an artificial nightmare of offices, corridors, forms, and waiting queues.
Sounds fun? No? Too bad.
First, start by the smallest cog in this vast bureaucratic machine: the Bureaucrat.
A Bureaucrat must have:
• A constant name.
• And a grade that ranges from 1 (highest possible grade) to 150 (lowest possible
grade).
Any attempt to instantiate a Bureaucrat using an invalid grade must throw an exception:
either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.
6
C++ - Module 05 Repetition and Exceptions
You will provide getters for both these attributes: getName() and getGrade(). Implement also two member functions to increment or decrement the bureaucrat grade. If
the grade is out of range, both of them will throw the same exceptions as the constructor.
Remember. Since grade 1 is the highest one and 150 the lowest,
incrementing a grade 3 should give a grade 2 to the bureaucrat.
The thrown exceptions must be catchable using try and catch blocks:
try
{
do some stuff with bureaucrats
}
catch (std::exception & e)
{
handle exception
}
You will implement an overload of the insertion («) operator to print something like
(without the angle brackets):
<name>, bureaucrat grade <grade>.
As usual, turn in some tests to prove everything works as expected.

*/

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{

}