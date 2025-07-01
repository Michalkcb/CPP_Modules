/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:01:36 by mbany             #+#    #+#             */
/*   Updated: 2025/07/01 19:19:52 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 02: No, you need form 28B,
not 28C...
Exercise : 02
No, you need form 28B, not 28C...
Turn-in directory : ex02/
Files to turn in : Makefile, main.cpp, Bureaucrat.[{h, hpp},cpp],
Bureaucrat.cpp +
AForm.[{h, hpp},cpp], ShrubberyCreationForm.[{h, hpp},cpp], +
RobotomyRequestForm.[{h, hpp},cpp], PresidentialPardonForm.[{h, hpp},cpp]
Forbidden functions : None
Since you now have basic forms, it’s time to make a few more that actually do something.
In all cases, the base class Form must be an abstract class, and therefore should be
renamed AForm. Keep in mind the form’s attributes need to remain private and that
they are in the base class.
Add the following concrete classes:

• ShrubberyCreationForm: Required grades: sign 145, exec 137
Create a file <target>_shrubbery in the working directory, and writes ASCII trees
inside it.

• RobotomyRequestForm: Required grades: sign 72, exec 45
Makes some drilling noises. Then, informs that <target> has been robotomized
successfully 50% of the time. Otherwise, informs that the robotomy failed.

• PresidentialPardonForm: Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox.
All of them take only one parameter in their constructor: the target of the form. For
example, "home" if you want to plant shrubbery at home.
10
C++ - Module 05 Repetition and Exceptions
Now, add the execute(Bureaucrat const & executor) const member function to
the base form and implement a function to execute the form’s action of the concrete
classes. You have to check that the form is signed and that the grade of the bureaucrat
attempting to execute the form is high enough. Otherwise, throw an appropriate exception.
Whether you want to check the requirements in every concrete class or in the base
class (then call another function to execute the form) is up to you. However, one way is
prettier than the other one.
Lastly, add the executeForm(AForm const & form) member function to the Bureaucrat. It must attempt to execute the form. If it’s successful, print something like:
<bureaucrat> executed <form>
If not, print an explicit error message.
Implement and turn in some tests to ensure everything works as expected.
*/

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <ctime>


int main()
{
	srand(time(0)); // Initialize random seed
	
	ShrubberyCreationForm shrubberyForm("Home");
	RobotomyRequestForm robotomyForm("Robot");
	Bureaucrat b1("Alice", 1);
	Bureaucrat b2("Bob", 150);
	
	try {
		b1.signForm(shrubberyForm);
		b1.signForm(robotomyForm);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		b1.executeForm(shrubberyForm);
		b1.executeForm(robotomyForm);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		b2.executeForm(shrubberyForm);
		b2.executeForm(robotomyForm);
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

	// try {
	// 	AForm f1("TopSecret", 1, 10);
	// 	std::cout << f1 << std::endl;
	// 	b1.signForm(f1);
	// 	std::cout << f1 << std::endl;
	// } catch (const std::exception &e) {
	// 	std::cerr << "Exception: " << e.what() << std::endl;
	// }
	// try {
	// 	Form f2("Secret", 1, 10);
	// 	b2.signForm(f2); // Bob ma za niski stopień
	// } catch (const std::exception &e) {
	// 	std::cerr << "Exception: " << e.what() << std::endl;
	// }

	return 0;
}