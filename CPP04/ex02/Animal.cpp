/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
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
AAnimal::AAnimal() : type("AAnimal") {
	std::cout << "AAnimal constructor called!" << std::endl;
}
// destructor
AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called!" << std::endl;
}

// method to make sound
void AAnimal::makeSound() const {
	std::cout << "AAnimal sound!" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) : type(other.type) {
	std::cout << "AAnimal copy constructor called!" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
	std::cout << "AAnimal assignment operator called!" << std::endl;
	if (this != &other) {
		type = other.type; // Copy the type
	}
	return *this;
}

// Getter for type
std::string AAnimal::getType() const {
	return type;
}


