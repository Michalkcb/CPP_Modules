/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:52:41 by mbany             #+#    #+#             */
/*   Updated: 2025/06/01 12:21:31 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) {
	type = "Dog"; // Set the type to "Dog"
	std::cout << "Dog constructor called!" << std::endl;
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog destructor called!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain)) {
	std::cout << "Dog copy constructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog assignment operator called!" << std::endl;
	if (this != &other) {
		Animal::operator=(other); // Call base class assignment operator
		delete brain; // Delete existing brain
		brain = new Brain(*other.brain); // Create a new brain
	}
	std::cout << "Dog assignment operator called!" << std::endl;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof Woof!" << std::endl; // Dog sound
}

Brain *Dog::getBrain() const {
	return brain; // Return the pointer to the brain
}
std::string Dog::getType() const {
	return type; // Return the type of the animal
}