// Copyright 2025 mbany

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:39:32 by mbany             #+#    #+#             */
/*   Updated: 2025/07/12 14:39:33 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 01: Serialization
Exercise : 01
Serialization
Turn-in directory : ex01/
Files to turn in : Makefile, *.cpp, *.{h, hpp}
Forbidden functions : None
Implement a class Serializer, who will not be initializable by the user by any way,
with the following static methods:
uintptr_t serialize(Data* ptr);
It takes a pointer and converts it to the unsigned integer type uintptr_t.
Data* deserialize(uintptr_t raw);
It takes an unsigned integer parameter and converts it to a pointer to Data.
Write a program to test that your class works as expected.
You must create a non-empty (it means it has data members) Data structure.
Use serialize() on the address of the Data object and pass its return value to
deserialize(). Then, ensure the return value of deserialize() compares equal to the
original pointer.
Do not forget to turn in the files of your Data structure.
*/

#include <iostream>
#include "CPP06/ex01/Serializer.hpp"
#include "CPP06/ex01/Data.hpp"

int main() {
Data data = {42, "Hello, World!"};
Data* ptr = &data;

uintptr_t raw = Serializer::serialize(ptr);
Data* deserializedPtr = Serializer::deserialize(raw);

std::cout << "Orginal pointer: " << ptr << std::endl;
std::cout << "Deserialized pointer: " << deserializedPtr << std::endl;
std::cout << "Data number: " << deserializedPtr->number
<< "' Text:" << deserializedPtr->text <<std::endl;

if (ptr == deserializedPtr) {
std::cout << "Serialization and deserialization successful!" << std::endl;
} else {
std::cout << "Serialization or deserialization failed!" << std::endl;
}
return 0;
}
