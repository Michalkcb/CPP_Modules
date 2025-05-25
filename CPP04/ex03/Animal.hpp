/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:53:06 by mbany             #+#    #+#             */
/*   Updated: 2025/05/25 14:20:15 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;
public:
	//Default constructor
	Animal();
	
	//Virtual destructor
	virtual ~Animal();
	//Virtual method
	virtual void makeSound() const;

	//Getter for type
	virtual std::string getType() const;
};

#endif
