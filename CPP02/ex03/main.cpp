/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:01:36 by mbany             #+#    #+#             */
/*   Updated: 2025/05/17 13:31:41 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 03: BSP
Exercise 03
BSP
Turn-in directory : ex03/
Files to turn in : Makefile, main.cpp, Fixed.{h, hpp}, Fixed.cpp,
Point.{h, hpp}, Point.cpp, bsp.cpp
Allowed functions : roundf (from <cmath>)
Now that you have a functional Fixed class, it would be nice to use it.
Implement a function which indicates whether a point is inside of a triangle or not.
Very useful, isn’t it?
BSP stands for Binary space partitioning. You are welcome. :)
You can pass this module without doing exercise 03

Let’s start by creating the class Point in Orthodox Canonical Form that represents
a 2D point:
• Private members:
◦ A Fixed const attribute x.
◦ A Fixed const attribute y.
◦ Anything else useful.
• Public members:
◦ A default constructor that initializes x and y to 0.
◦ A constructor that takes as parameters two constant floating-point numbers.
It initializes x and y with those parameters.
◦ A copy constructor.
◦ A copy assignment operator overload.
◦ A destructor.
◦ Anything else useful.
To conclude, implement the following function in the appropriate file:
bool bsp( Point const a, Point const b, Point const c, Point const point);
• a, b, c: The vertices of our beloved triangle.
• point: The point to check.
• Returns: True if the point is inside the triangle. False otherwise.
Thus, if the point is a vertex or on edge, it will return False.
Implement and turn in your own tests to ensure that your class behaves as expected.
*/

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
// Fixed a;
// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
Fixed a = 10;
Fixed b = 5;
std::cout << "a: " << a << std::endl;
std::cout << "++a: " << ++a << std::endl;
std::cout << "++a: " << ++a << std::endl;
std::cout << "++a: " << ++a << std::endl;
std::cout << "a: " << a << std::endl;
std::cout << "++a: " << ++a << std::endl;
std::cout << "++a: " << ++a << std::endl;
std::cout << "a++: " << a++ << std::endl;
std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl;
std::cout << "max: " << Fixed::max( a, b ) << std::endl;

std::cout << "min: " << Fixed::min( a, b ) << std::endl;
std::cout << ">: " << ( a > b ? a : b ) << std::endl;
std::cout << "<: " << ( a < b ? a : b) << std::endl;
std::cout << ">=: " << ( a >= b ? a : b) << std::endl;
std::cout << "<=: " << ( a <= b ? a : b) << std::endl;
std::cout << "==: " << ( a == b) << std::endl;
std::cout << "!=: " << ( a != b) << std::endl;
std::cout << "/: " << ( a / b) << std::endl;
std::cout << "+: " << ( a + b) << std::endl;
std::cout << "-: " << ( a - b) << std::endl;
std::cout << "--a: " << --a << std::endl;
std::cout << "--a: " << --a << std::endl;
std::cout << "--a: " << --a << std::endl;
std::cout << "--a: " << --a << std::endl;
std::cout << "b--: " << b-- << std::endl;
std::cout << "b--: " << b-- << std::endl;
std::cout << "b--: " << b-- << std::endl;
std::cout << "b--: " << b-- << std::endl;


return 0;
}