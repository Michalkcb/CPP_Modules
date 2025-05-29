/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:59:30 by mbany             #+#    #+#             */
/*   Updated: 2025/05/29 20:01:57 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}
WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}
void WrongCat::makeSound() const {
    std::cout << "WrongCat meows!" << std::endl;
}