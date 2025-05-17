/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 11:49:09 by mbany             #+#    #+#             */
/*   Updated: 2025/05/17 11:46:43 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const int intValue);
	Fixed(float const floatValue);
	Fixed(const Fixed &src);
	Fixed &operator=(const Fixed &crs);
	Fixed operator*(const Fixed &other) const;
	Fixed &operator++();
	Fixed operator++(int);
	friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
	// friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	int toInt(void) const;
	float toFloat(void) const;
	bool operator>(const Fixed &other) const;
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
	
private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;	
};	
#endif