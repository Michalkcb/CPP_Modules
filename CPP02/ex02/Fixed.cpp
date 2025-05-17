/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 11:49:00 by mbany             #+#    #+#             */
/*   Updated: 2025/05/17 11:21:13 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intValue)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = intValue << _fractionalBits;
}
Fixed::Fixed(const float floatValue){
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(floatValue * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointValue = src._fixedPointValue;
}

Fixed &Fixed::operator=(const Fixed &crs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &crs)
		this->_fixedPointValue = crs._fixedPointValue;
	return *this;
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() * other.getRawBits() >> _fractionalBits);
	return result;
}

Fixed &Fixed::operator++()
{
	this -> _fixedPointValue++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	this -> _fixedPointValue++;
	return temp;
}

int Fixed::toInt(void) const
{
	return this->_fixedPointValue >> _fractionalBits;	
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->_fixedPointValue) / (1 << _fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

