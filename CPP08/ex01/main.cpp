/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:56:08 by mbany             #+#    #+#             */
/*   Updated: 2025/07/21 16:59:29 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 01: Span
Exercise : 01
Span
Turn-in directory : ex01/
Files to turn in : Makefile, main.cpp, Span.{h, hpp}, Span.cpp
Forbidden functions : None
Develop a Span class that can store a maximum of N integers. N is an unsigned int
variable and will be the only parameter passed to the constructor.
This class will have a member function called addNumber() to add a single number
to the Span. It will be used in order to fill it. Any attempt to add a new element if there
are already N elements stored should throw an exception.
Next, implement two member functions: shortestSpan() and longestSpan()
They will respectively find out the shortest span or the longest span (or distance, if
you prefer) between all the numbers stored, and return it. If there are no numbers stored,
or only one, no span can be found. Thus, throw an exception.
Of course, you will write your own tests and they will be way more thorough than the
ones below. Test your Span at least with a minimum of 10 000 numbers. More would be
even better.
C++ - Module 08 Templated containers, iterators, algorithms
Running this code:
int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}
Should output:
$> ./ex01
2
14
$>
Last but not least, it would be wonderful to fill your Span using a range of iterators.
Making thousands calls to addNumber() is so annoying. Implement a member function
to add many numbers to your Span in one call.
If you don’t have a clue, study the Containers. Some member
functions take a range of iterators in order to add a sequence of
elements to the container.
*/
#include <iostream>
#include "Span.hpp"

// int main()
// {
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }

int main()
{
	Span sp = Span(5);
    try {
        sp.addNumber(42);
    } catch (const std::exception& e) {
        std::cout << "Exception (full): " << e.what() << std::endl;
    }

    // Test wyjątku przy zbyt małej liczbie elementów
    try {
        Span sp2(2);
        sp2.addNumber(1);
        std::cout << sp2.shortestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception (not enough numbers): " << e.what() << std::endl;
    }

    // Test masowego dodawania przez iteratory
    Span sp3(10000);
    std::vector<int> vec;
    for (int i = 0; i < 10000; ++i)
        vec.push_back(i * 2);
    sp3.addNumbers(vec.begin(), vec.end());
    std::cout << "sp3 shortestSpan: " << sp3.shortestSpan() << std::endl; // powinno być 2
    std::cout << "sp3 longestSpan: " << sp3.longestSpan() << std::endl;   // powinno być 19998

}