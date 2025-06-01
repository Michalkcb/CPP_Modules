/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:52:41 by mbany             #+#    #+#             */
/*   Updated: 2025/06/01 13:28:34 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain()) {
	type = "Cat"; // Set the type to "Cat"
	std::cout << "Cat constructor called!" << std::endl;
}
Cat::~Cat() {
	std::cout << "Cat destructor called!" << std::endl;
}
void Cat::makeSound() const {
	std::cout << "Meow Meow!" << std::endl; // Cat sound
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain)) {
	std::cout << "Cat copy constructor called!" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat assignment operator called!" << std::endl;
	if (this != &other) {
		Animal::operator=(other); // Call base class assignment operator
		delete brain; // Delete existing brain
		brain = new Brain(*other.brain); // Create a new brain
	}
	return *this;
}

Brain *Cat::getBrain() const {
	return brain; // Return the pointer to the brain
}

std::string Cat::getType() const {
	return type; // Return the type of the animal
}
