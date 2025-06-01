/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:01:36 by mbany             #+#    #+#             */
/*   Updated: 2025/06/01 14:27:12 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 02: Abstract class
Exercise : 02
Abstract class
Turn-in directory : ex02/
Files to turn in : Files from previous exercise + *.cpp, *.{h, hpp}
Forbidden functions : None
Creating AAnimal objects doesn’t make sense after all. It’s true, they make no sound!
To avoid any possible mistakes, the default AAnimal class should not be instantiable.
Fix the AAnimal class so nobody can instantiate it. Everything should work as before.
If you want to, you can update the class name by adding a A prefix to AAnimal.
*/

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    const AAnimal* animals[100];
    
    for (int i = 0; i < 50; i++) {
        std::cout << "Creating Dog " << i + 1 << std::endl;
        animals[i] = new Dog();
    }

    for (int i = 50; i < 100; i++) {
        std::cout << "Creating Cat " << i - 49 << std::endl;
        animals[i] = new Cat();
    }

    std::cout << "Testing deep copy for Dog:" << std::endl;
    Dog originalDog;
    Dog copiedDog = originalDog;

    originalDog.makeSound();
    copiedDog.makeSound();

    std::cout << "Testing Brain ideas manipulation:" << std::endl;
    Dog dog;
    Cat cat;

    // Dodaj pomysły do Brain w Dog i Cat
    dog.getBrain()->setIdea(0, "Chase the ball");
    cat.getBrain()->setIdea(0, "Climb the tree");

    // Sprawdź, czy pomysły są poprawnie zapisane
    std::cout << "Dog idea: " << dog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Cat idea: " << cat.getBrain()->getIdea(0) << std::endl;

    for (int i = 0; i < 100; i++) {
        std::cout << "AAnimal " << i + 1 << " type: " << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    }

    for (int i = 0; i < 100; i++) {
        std::cout << "Deleting AAnimal " << i + 1 << std::endl;
        delete animals[i];
    }

    // const AAnimal* animal = new AAnimal();

return 0;
}