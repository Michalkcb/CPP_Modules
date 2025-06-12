/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:23:27 by mbany             #+#    #+#             */
/*   Updated: 2025/06/12 18:24:08 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {}
Cure::~Cure() {}
Cure::Cure(Cure const & other) : AMateria(other.type) {}
Cure & Cure::operator=(Cure const & other) {
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}
AMateria* Cure::clone() const {
	return new Cure(*this);
}
void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}