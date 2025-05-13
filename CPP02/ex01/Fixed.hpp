/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 11:49:09 by mbany             #+#    #+#             */
/*   Updated: 2025/05/13 22:47:07 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <fstream>
#include <string>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &src);
	Fixed &operator=(const Fixed &crs);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	
private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;	
};	
#endif