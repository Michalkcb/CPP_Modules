/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:53:06 by mbany             #+#    #+#             */
/*   Updated: 2025/06/01 14:40:17 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class AAnimal
{
protected:
	std::string type;
public:
	AAnimal();
	virtual ~AAnimal();
	
	AAnimal(const AAnimal &other);
	AAnimal &operator=(const AAnimal &other);
	
	//Getter for type
	virtual std::string getType() const;
	virtual void makeSound() const = 0;
};

#endif
