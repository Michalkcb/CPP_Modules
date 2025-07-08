/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:44:10 by mbany             #+#    #+#             */
/*   Updated: 2025/07/08 18:51:19 by mbany            ###   ########.fr       */
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
	static void convertChar(const std::string &literal);
	static void convertInt(const std::string &literal);
	static void convertFloat(const std::string &literal);
	static void convertDouble(const std::string &literal);
	static bool isChar(const std::string &literal);
	static bool isInt(const std::string &literal);
	static bool isFloat(const std::string &literal);
	static bool isDouble(const std::string &literal);
	static bool isSpecialFloat(const std::string &literal);
	static bool isSpecialDouble(const std::string &literal);
};
