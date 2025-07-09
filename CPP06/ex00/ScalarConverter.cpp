/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:55:51 by mbany             #+#    #+#             */
/*   Updated: 2025/07/09 19:12:22 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdlib>
#include <string>
#include <cmath>
#include <cctype>

ScalarConverter :: ScalarConverter() {};
ScalarConverter :: ScalarConverter(const ScalarConverter&) {};
ScalarConverter& ScalarConverter::operator=(const ScalarConverter&) { return *this;}// Prevent assignment
ScalarConverter :: ~ScalarConverter() {};

void ScalarConverter::convert(const std::string &literal) {
	if (isChar(literal)) {
		convertChar(literal);
	} else if (isInt(literal)) {
		convertInt(literal);
	} else if (isFloat(literal)) {
		convertFloat(literal);
	} else if (isDouble(literal)) {
		convertDouble(literal);
	} else {
		std::cerr << "Invalid literal: " << literal << std::endl;
	}
}

bool ScalarConverter::isChar(const std::string &literal) {
	return literal.length() == 1 && isprint(literal[0]) && !isdigit(literal[0]);
}

bool ScalarConverter::isInt(const std::string &literal) {
	char* end;
	long value = strtol(literal.c_str(), &end, 10);
	return *end == '\0' && value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max();
}

bool ScalarConverter::isFloat(const std::string &literal) {
	if (literal == "nanf" || literal == "+inff" || literal == "-inff")
		return true;
	char* end;
	std::strtof(literal.c_str(), &end);
	return *(end -1) == 'f' && *end == '\0';	
}

bool ScalarConverter::isDouble(const std::string &literal) {
	if (literal == "nan" || literal == "+inf" || literal == "-inf")
		return true;
	char* end;
	std::strtod(literal.c_str(), &end);
	return *end == '\0';	
}

void ScalarConverter::convertChar(const std::string &literal) {
	char c = literal[0];
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}
