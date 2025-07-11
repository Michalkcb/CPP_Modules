/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:12:12 by mbany             #+#    #+#             */
/*   Updated: 2025/07/11 20:07:43 by mbany            ###   ########.fr       */
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
		std::cout << "identify(Base*): A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "identify(Base*): B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "identify(Base*): C" << std::endl;
}

void identify(Base& p) {
	if (dynamic_cast<A*>(&p))
		std::cout << "identify(Base&): A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "identify(Base&): B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "identify(Base&): C" << std::endl;
	else 
		std::cout << "p is not type of ABC" << std::endl;
}
