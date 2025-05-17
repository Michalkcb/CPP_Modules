/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:01:36 by mbany             #+#    #+#             */
/*   Updated: 2025/05/17 14:45:56 by mbany            ###   ########.fr       */
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
#include "Point.hpp"
#include <iostream>

int main( void ) {
Point a(0 , 0);
Point b(10 , 0);
Point c(0 , 10);

Point inside(1 , 1);
Point outside(3 , 1);
// Point outside(15 , 15);
Point onEdge(0 , 1);
Point onVertex(0 , 0);

std::cout << "Point (1, 1) is inside triangle: " << (bsp(a, b, c, inside) ? "yes" : "no") << std::endl;
std::cout << "Point (3, 1) is outside triangle: " << (bsp(a, b, c, outside) ? "no" : "yes") << std::endl;
// std::cout << "Point (15, 15) is outside triangle: " << (bsp(a, b, c, outside) ? "no" : "yes") << std::endl;
std::cout << "Point (0, 1) is on edge: " << (bsp(a, b, c, onEdge) ? "yes" : "no") << std::endl;
std::cout << "Point (0, 0) is on vertex: " << (bsp(a, b, c, onVertex) ? "yes" : "no") << std::endl;

return 0;
}