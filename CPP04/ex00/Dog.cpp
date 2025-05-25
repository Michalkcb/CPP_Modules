/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:52:41 by mbany             #+#    #+#             */
/*   Updated: 2025/05/25 14:46:24 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog"; // Set the type to "Dog"
	std::cout << "Dog constructor called!" << std::endl;
}
Dog::~Dog() {
	std::cout << "Dog destructor called!" << std::endl;
}
void Dog::makeSound() const {
	std::cout << "Woof Woof!" << std::endl; // Dog sound
}