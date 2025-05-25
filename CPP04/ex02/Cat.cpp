/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:52:41 by mbany             #+#    #+#             */
/*   Updated: 2025/05/25 15:01:30 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat"; // Set the type to "Cat"
	std::cout << "Cat constructor called!" << std::endl;
}
Cat::~Cat() {
	std::cout << "Cat destructor called!" << std::endl;
}
void Cat::makeSound() const {
	std::cout << "Meow Meow!" << std::endl; // Cat sound
}