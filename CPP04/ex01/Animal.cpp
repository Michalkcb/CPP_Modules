/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:52:41 by mbany             #+#    #+#             */
/*   Updated: 2025/06/01 13:00:59 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

// Default constructor
Animal::Animal() : type("Animal") {
	std::cout << "Animal constructor called!" << std::endl;
}

// destructor
Animal::~Animal() {
	std::cout << "Animal destructor called!" << std::endl;
}

// method to make sound
void Animal::makeSound() const {
	std::cout << "Animal sound!" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) {
	std::cout << "Animal copy constructor called!" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
	std::cout << "Animal assignment operator called!" << std::endl;
	if (this != &other) {
		type = other.type; // Copy the type
	}
	return *this;
}

// Getter for type
std::string Animal::getType() const {
	return type;
}


