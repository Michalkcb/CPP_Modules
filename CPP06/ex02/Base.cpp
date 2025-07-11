/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:12:12 by mbany             #+#    #+#             */
/*   Updated: 2025/07/11 19:54:05 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>

Base::~Base() {}

Base *generate(){
	int randomValue = rand() % 3;
	
	if (randomValue == 0)
		return new A();
	else if (randomValue == 1)
		return new B();
	else if (randomValue == 2)
		return new C();
	return 0;	
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "p is type of A" << std::endl;
	} catch (std::bad_cast&) {
		try {
			(void)dynamic_cast<B&>(p);
			std::cout << "p is type of B" << std::endl;
		} catch (std::bad_cast&) {
			try {
				(void)dynamic_cast<C&>(p);
				std::cout << "p is type of C" << std::endl;
			} catch (std::bad_cast&) {
				std::cout << "p is not type of A, B, C" << std::endl;
			}
		}
	}
}
