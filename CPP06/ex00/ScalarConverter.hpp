/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:44:10 by mbany             #+#    #+#             */
/*   Updated: 2025/07/12 14:22:00 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class ScalarConverter {
public:
	static void convert(const std::string &literal);	
private:
	ScalarConverter(); // Prevent instantiation
	ScalarConverter(const ScalarConverter &other); // Prevent copy
	ScalarConverter &operator=(const ScalarConverter &other); // Prevent assignment
	~ScalarConverter(); // Prevent destruction
};
