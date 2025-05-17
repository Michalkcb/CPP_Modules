/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 13:36:03 by mbany             #+#    #+#             */
/*   Updated: 2025/05/17 14:46:18 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

static Fixed absFixed(Fixed const &f)
{
    Fixed zero(0);
    return (f < zero) ? zero - f : f;
}
Fixed area(Point const a, Point const b, Point const c)
{
	Fixed area = 	(a.getX() * (b.getY() - c.getY()) +
					b.getX() * (c.getY() - a.getY()) + 
					c.getX() * (a.getY() - b.getY()));
	return absFixed(area) / Fixed(2);
}
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed A = area(a, b, c);
	Fixed A1 = area(point, b, c);
	Fixed A2 = area(a, point, c);
	Fixed A3 = area(a, b, point);

	Fixed sum = A1 + A2 + A3;
	Fixed epsilon(0.01f);

	// std::cout << "A = " << A << ", A1 = " << A1 << ", A2 = " << A2 << ", A3 = " << A3 << ", sum = " << sum << std::endl;
    // std::cout << "sum - A = " << (sum - A) << std::endl;
    // std::cout << "abs(sum - A) = " << absFixed(sum - A) << std::endl;
    // std::cout << "epsilon = " << epsilon << std::endl;
    // std::cout << "A1 > 0: " << (A1 > Fixed(0)) << ", A2 > 0: " << (A2 > Fixed(0)) << ", A3 > 0: " << (A3 > Fixed(0)) << std::endl;

	if (absFixed(sum - A) < epsilon && A1 >= Fixed(0) && A2 >= Fixed(0) && A3 >= Fixed(0))
		return true;
	else
		return false;
}