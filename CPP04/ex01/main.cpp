/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:01:36 by mbany             #+#    #+#             */
/*   Updated: 2025/05/29 18:21:35 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 01: I don’t want to set the
world on fire
Exercise : 01
I don’t want to set the world on fire
Turn-in directory : ex01/
Files to turn in : Files from previous exercise + *.cpp, *.{h, hpp}
Forbidden functions : None
Constructors and destructors of each class must display specific messages.
Implement a Brain class. It contains an array of 100 std::string called ideas.
This way, Dog and Cat will have a private Brain* attribute.
Upon construction, Dog and Cat will create their Brain using new Brain();
Upon destruction, Dog and Cat will delete their Brain.
In your main function, create and fill an array of Animal objects. Half of it will
be Dog objects and the other half will be Cat objects. At the end of your program
execution, loop over this array and delete every Animal. You must delete directly dogs
and cats as Animals. The appropriate destructors must be called in the expected order.
Don’t forget to check for memory leaks.
A copy of a Dog or a Cat mustn’t be shallow. Thus, you have to test that your copies
are deep copies!
int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
...
return 0;
}
Implement and turn in more tests than the ones given above.
*/

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
delete meta;
delete j;
delete i;

return 0;
}