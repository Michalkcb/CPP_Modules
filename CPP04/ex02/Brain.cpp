/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:52:41 by mbany             #+#    #+#             */
/*   Updated: 2025/06/01 12:13:27 by mbany            ###   ########.fr       */
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

void Brain::setIdea(int index, const std::string &idea) {
	if (index >= 0 && index < 100) {
		this->ideas[index] = idea;
	} else {
		std::cerr << "Index out of bounds!" << std::endl;
	}
}

std::string Brain::getIdea(int index) const {
	if (index >= 0 && index < 100) {
		return ideas[index];
	} else {
		std::cerr << "Index out of bounds!" << std::endl;
		return "";
	}
}