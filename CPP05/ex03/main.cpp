/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:01:36 by mbany             #+#    #+#             */
/*   Updated: 2025/07/06 12:00:21 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 03: At least this beats
coffee-making
Exercise : 03
At least this beats coffee-making
Turn-in directory : ex03/
Files to turn in : Files from previous exercises + Intern.{h, hpp}, Intern.cpp
Forbidden functions : None
Because filling out forms is annoying enough, it would be cruel to ask our bureaucrats
to do this all day long. Fortunately, interns exist. In this exercise, you have to implement
the Intern class. The intern has no name, no grade, no unique characteristics. The only
thing the bureaucrats care about is that they do their job.
However, the intern has one important capacity: the makeForm() function. It takes
two strings. The first one is the name of a form and the second one is the target of the
form. It return a pointer to a Form object (whose name is the one passed as parameter)
whose target will be initialized to the second parameter.
It will print something like:
Intern creates <form>
If the form name passed as parameter doesn’t exist, print an explicit error message.
C++ - Module 05 Repetition and Exceptions
You must avoid unreadable and ugly solutions like using a if/elseif/else forest. This
kind of things won’t be accepted during the evaluation process. You’re not in Piscine
(pool) anymore. As usual, you have to test that everything works as expected.
For example, the code below creates a RobotomyRequestForm targeted on "Bender":
{
Intern someRandomIntern;
Form* rrf;
rrf = someRandomIntern.makeForm("robotomy request", "Bender");
}
*/

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <ctime>


int main()
{
	srand(time(0)); // Initialize random seed
	
	ShrubberyCreationForm shrubberyForm("Home");
	RobotomyRequestForm robotomyForm("Robot");
	PresidentialPardonForm pardonForm("Alice");
	Bureaucrat b1("Alice", 1);
	Bureaucrat b2("Bob", 150);
	
	try {
		b1.signForm(shrubberyForm);
		b1.signForm(robotomyForm);
		b1.signForm(pardonForm);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		b1.executeForm(shrubberyForm);
		b1.executeForm(robotomyForm);
		b1.executeForm(pardonForm);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		b2.executeForm(shrubberyForm);
		b2.executeForm(robotomyForm);
		b2.executeForm(pardonForm);
	} catch (const std::exception &e) {
		std::cerr <<e.what() << std::endl;
	}
		
	try {
		std::cout << b1 << std::endl;
		b1.incrementGrade();
		std::cout << b1 << std::endl;
	} catch (const Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << b2 << std::endl;
		b2.decrementGrade();
		std::cout << b2 << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try {
		b2.signForm(shrubberyForm);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	ShrubberyCreationForm unsignedForm("Garden");
	try {
		b1.executeForm(unsignedForm);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	Intern someRandomIntern;
	AForm* form1 = someRandomIntern.makeForm("robotomy request", "Bender");
	AForm* form2 = someRandomIntern.makeForm("shrubbery creation", "Home");
	AForm* form3 = someRandomIntern.makeForm("presidential pardon", "Alice");
	AForm* form4 = someRandomIntern.makeForm("nonexistent form", "Nobody");

	delete form1;
	delete form2;
	delete form3;
	delete form4;

	return 0;
}