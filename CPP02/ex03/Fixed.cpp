/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 11:49:00 by mbany             #+#    #+#             */
/*   Updated: 2025/05/17 14:18:44 by mbany            ###   ########.fr       */
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

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed result;
	result.setRawBits((this->getRawBits() << _fractionalBits) / other.getRawBits());

	return result;
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() + other.getRawBits());
	return result;
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() - other.getRawBits());
	return result;
}

Fixed Fixed::operator-() const
{
    return Fixed(0) - *this;
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


Fixed &Fixed::operator--()
{
	this -> _fixedPointValue--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this -> _fixedPointValue--;
	return temp;
}


//>
bool Fixed::operator>(const Fixed &other) const
{
	return this->_fixedPointValue > other._fixedPointValue;
}
//<
bool Fixed::operator<(const Fixed &other) const
{
	return this->_fixedPointValue < other._fixedPointValue;
}
//>=
bool Fixed::operator>=(const Fixed &other) const
{
	return this->_fixedPointValue >= other._fixedPointValue;
}
//<=
bool Fixed::operator<=(const Fixed &other) const
{
	return this->_fixedPointValue <= other._fixedPointValue;
}

bool Fixed::operator==(const Fixed &other) const
{
	return this->_fixedPointValue == other._fixedPointValue;
}

bool Fixed::operator!=(const Fixed &other) const
{
	return this->_fixedPointValue != other._fixedPointValue;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
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
	// std::cout << "Destructor called" << std::endl;
}

