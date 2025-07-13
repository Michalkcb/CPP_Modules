/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:24:39 by mbany             #+#    #+#             */
/*   Updated: 2025/07/13 14:59:16 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 01: Iter
Exercise : 01
Iter
Turn-in directory : ex01/
Files to turn in : Makefile, main.cpp, iter.{h, hpp}
Forbidden functions : None
Implement a function template iter that takes 3 parameters and returns nothing.
• The first parameter is the address of an array.
• The second one is the length of the array.
• The third one is a function that will be called on every element of the array.
Turn in a main.cpp file that contains your tests. Provide enough code to generate a
test executable.
Your iter function template must work with any type of array. The third parameter
can be an instantiated function template.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "iter.hpp"

void printInt(int n) {
	std::cout << n << " ";
}

void printStr(const std::string& s) {
	std::cout << s << " ";
}

int main() {
	int intArray[10];
	for (int i = 0; i < 10; ++i) {
		intArray[i] = std::rand() %1000; // Random integers between 0 and 99
	}
	std::string strArray[] = {"Hello", "World", "42", "Warsaw"};

	iter(intArray, 3, printInt);
	std::cout << std::endl << "-----------" << std::endl;

	iter(strArray, 4, printStr);
	std::cout << std::endl << "-----------" << std::endl;

	return 0;
}
