/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:16:56 by mbany             #+#    #+#             */
/*   Updated: 2025/07/21 19:45:07 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 02: Mutated abomination
Exercise : 02
Mutated abomination
Turn-in directory : ex02/
Files to turn in : Makefile, main.cpp, MutantStack.{h, hpp}
and optional file: MutantStack.tpp
Forbidden functions : None
Now, time to move on more serious things. Let’s develop something weird.
The std::stack container is very nice. Unfortunately, it is one of the only STL Containers that is NOT iterable. That’s too bad.
But why would we accept this? Especially if we can take the liberty of butchering the
original stack to create missing features.
To repair this injustice, you have to make the std::stack container iterable.
Write a MutantStack class. It will be implemented in terms of a std::stack.
It will offer all its member functions, plus an additional feature: iterators.
Of course, you will write and turn in your own tests to ensure everything works as
expected.
C++ - Module 08 Templated containers, iterators, algorithms
Find a test example below.
int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);
return 0;
}
If you run it a first time with your MutantStack, and a second time replacing the
MutantStack with, for example, a std::list, the two outputs should be the same. Of
course, when testing another container, update the code below with the corresponding
member functions (push() can become push_back()).
*/
#include <iostream>
#include "MutantStack.hpp"

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);

//---
// Test empty stack
// MutantStack<int> emptyStack;
// std::cout << "Empty stack size: " << emptyStack.size() << std::endl;
// if (emptyStack.begin() == emptyStack.end())
// {
// 	std::cout << "Empty stack iterators are equal (begin == end)." << std::endl;
// }
// // Test large stack
// MutantStack<int> largeStack;
// for (int i = 0; i < 1000; ++i)
// {
// 	largeStack.push(i);
// }
// std::cout << "Large stack size: " << largeStack.size() << std::endl;
// std::cout << "First 10 elements of large stack:" << std::endl;
// MutantStack<int>::iterator largeIt = largeStack.begin();
// for (int i = 0; i < 10 && largeIt != largeStack.end(); ++i, ++largeIt)
// {
// 	std::cout << *largeIt << std::endl;
// }

//---------------
return 0;
}