/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:48:57 by mbany             #+#    #+#             */
/*   Updated: 2025/07/19 11:04:33 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 00: Easy find
Exercise : 00
Easy find
Turn-in directory : ex00/
Files to turn in : Makefile, main.cpp, easyfind.{h, hpp}
and optional file: easyfind.tpp
Forbidden functions : None
A first easy exercise is the way to start off on the right foot.
Write a function template easyfind that accepts a type T. It takes two parameters.
The first one has type T and the second one is an integer.
Assuming T is a container of integers, this function has to find the first occurrence
of the second parameter in the first parameter.
If no occurrence is found, you can either throw an exception or return an error value
of your choice. If you need some inspiration, analyze how standard containers behave.
Of course, implement and turn in your own tests to ensure everything works as expected.
You don’t have to handle associative containers.
*/

#include <iostream>
#include <vector>
#include "easyfind.h"

int main() {
	 int arr[] = {1, 2, 3, 4, 5};
	std::vector<int> vec(arr, arr + 5);

	try {
		int index = easyfind(vec, 3);
		std::cout << "Found 3 at index: " << index << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		int index = easyfind(vec, 6);
		std::cout << "Found 6 at index: " << index << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
