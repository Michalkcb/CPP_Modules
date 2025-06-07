/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 21:23:43 by mbany             #+#    #+#             */
/*   Updated: 2025/06/07 22:27:33 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {};

Ice::~Ice() {};
Ice::Ice(Ice const & other) : AMateria(other) {};

Ice & Ice::operator=(Ice const & other) {
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
