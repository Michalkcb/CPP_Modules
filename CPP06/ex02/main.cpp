/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:03:28 by mbany             #+#    #+#             */
/*   Updated: 2025/07/11 20:08:46 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 02: Identify real type
Exercise : 02
Identify real type
Turn-in directory : ex02/
Files to turn in : Makefile, *.cpp, *.{h, hpp}
Forbidden functions : std::typeinfo
Implement a Base class that has a public virtual destructor only. Create three empty
classes A, B and C, that publicly inherit from Base.
These four classes don’t have to be designed in the Orthodox
Canonical Form.
Implement the following functions:
Base * generate(void);
It randomly instanciates A, B or C and returns the instance as a Base pointer. Feel free
to use anything you like for the random choice implementation.
void identify(Base* p);
It prints the actual type of the object pointed to by p: "A", "B" or "C".
void identify(Base& p);
It prints the actual type of the object pointed to by p: "A", "B" or "C". Using a pointer
inside this function is forbidden.
Including the typeinfo header is forbidden.
Write a program to test that everything works as expected.
*/
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>

int main() {
	srand(time(NULL));
	for (int i = 0; i < 10; ++i){
		std::cout << "------------------------" << std::endl;
		std::cout << "Iteration: " << i + 1 << std::endl;
		Base *basePtr = generate();
		identify(basePtr);
		identify(*basePtr);
		delete basePtr;
		std::cout << "------------------------" << std::endl;
	}
	return 0;
}