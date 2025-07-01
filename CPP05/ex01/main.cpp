/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:01:36 by mbany             #+#    #+#             */
/*   Updated: 2025/07/01 13:24:28 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Exercise 01: Form up, maggots!
Exercise : 01
Form up, maggots!
Turn-in directory : ex01/
Files to turn in : Files from previous exercise + Form.{h, hpp}, Form.cpp
Forbidden functions : None
Now that you have bureaucrats, let’s give them something to do. What better activity
could there be than the one of filling out a stack of forms?
Then, let’s make a Form class. It has:
• A constant name.
• A boolean indicating whether it is signed (at construction, it’s not).
• A constant grade required to sign it.
• And a constant grade required to execute it.
All these attributes are private, not protected.
The grades of the Form follow the same rules that apply to the Bureaucrat. Thus,
the following exceptions will be thrown if a form grade is out of bounds:
Form::GradeTooHighException and Form::GradeTooLowException.
Same as before, write getters for all attributes and an overload of the insertion («)
operator that prints all the form’s informations.
8
C++ - Module 05 Repetition and Exceptions
Add also a beSigned() member function to the Form that takes a Bureaucrat as
parameter. It changes the form status to signed if the bureaucrat’s grade is high enough
(higher or egal to the required one). Remember, grade 1 is higher than grade 2.
If the grade is too low, throw a Form::GradeTooLowException.
Then, modify the signForm() member function in the Bureaucrat class. This function must call Form::beSigned() to attempt to sign the form. If the form is signed
successfully, it will print something like:
<bureaucrat> signed <form>
Otherwise, it will print something like:
<bureaucrat> couldn’t sign <form> because <reason>.
Implement and turn in some tests to ensure everything works as expected.

*/

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
	
	Bureaucrat b1("Alice", 1);
	Bureaucrat b2("Bob", 150);
		
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
		Form f1("TopSecret", 1, 10);
		std::cout << f1 << std::endl;
		b1.signForm(f1);
		std::cout << f1 << std::endl;
	} catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try {
		Form f2("Secret", 1, 10);
		b2.signForm(f2); // Bob ma za niski stopień
	} catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}