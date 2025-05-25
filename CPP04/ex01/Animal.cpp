/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:52:41 by mbany             #+#    #+#             */
/*   Updated: 2025/05/25 14:29:23 by mbany            ###   ########.fr       */
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

// Getter for type
std::string Animal::getType() const {
	return type;
}


