/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 15:09:48 by mbany             #+#    #+#             */
/*   Updated: 2025/06/07 22:14:35 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const & type) : type(type) {};
AMateria::~AMateria() {};
	
std::string const & AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter& target) {
	std::cout << "Using AMateria on " << target.getName() << std::endl;
}

