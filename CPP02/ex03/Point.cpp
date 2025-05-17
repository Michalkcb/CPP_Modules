/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 13:35:20 by mbany             #+#    #+#             */
/*   Updated: 2025/05/17 13:47:05 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}
Point::Point(const float x, const float y) : x(x), y(y)
{
}
Point::Point(const Point &other) : x(other.x), y(other.y)
{
}
Point &Point::operator=(const Point &other)
{
	(void)other;
	return *this;
}
Point::~Point()
{
}
Fixed Point::getX() const
{
	return x;
}
Fixed Point::getY() const
{
	return y;
}