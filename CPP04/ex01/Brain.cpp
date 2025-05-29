/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:52:41 by mbany             #+#    #+#             */
/*   Updated: 2025/05/29 20:30:04 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

// Default constructor
Brain::Brain() {
	std::cout << "Brain constructor called!" << std::endl;
}
// Destructor
Brain::~Brain() {
	std::cout << "Brain destructor called!" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain copy constructor called!" << std::endl;
	for (int i = 0; i < 100; ++i) {
		this->ideas[i] = other.ideas[i];
	}	
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain assignment operator called!" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; ++i) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}