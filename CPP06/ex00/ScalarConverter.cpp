/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:55:51 by mbany             #+#    #+#             */
/*   Updated: 2025/07/12 16:39:27 by mbany            ###   ########.fr       */
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

	static void convertChar(const std::string &literal);
	static void convertInt(const std::string &literal);
	static void convertFloat(const std::string &literal);
	static void convertDouble(const std::string &literal);
	static bool isChar(const std::string &literal);
	static bool isInt(const std::string &literal);
	static bool isFloat(const std::string &literal);
	static bool isDouble(const std::string &literal);

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

bool isChar(const std::string &literal) {
	return literal.length() == 1 && isprint(literal[0]) && !isdigit(literal[0]);
}

bool isInt(const std::string &literal) {
	char* end;
	long value = strtol(literal.c_str(), &end, 10);
	return *end == '\0' && value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max();
}

bool isFloat(const std::string &literal) {
	if (literal == "nanf" || literal == "+inff" || literal == "-inff")
		return true;
	char* end;
	std::strtof(literal.c_str(), &end);
	return (*end == 'f' && *(end + 1) == '\0');
}

bool isDouble(const std::string &literal) {
	if (literal == "nan" || literal == "+inf" || literal == "-inf")
		return true;
	char* end;
	std::strtod(literal.c_str(), &end);
	return *end == '\0';	
}

void convertChar(const std::string &literal) {
	char c = literal[0];
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void convertInt(const std::string &literal) {
	char* end;
	long  l = std::strtol(literal.c_str(), &end, 10);
	int i = static_cast<int>(l);

	if (*end != '\0' || l < std::numeric_limits<int>::min() || l > std::numeric_limits<int>::max()) {
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: impossible\n";
		std::cout << "double: impossible\n";
		return;
	}
	
	if (i >= 32 && i <= 126)
		std::cout << "char: '" << static_cast<char>(i) << "'\n";
	else if (i >= 0 && i < 32)
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: impossible\n";
	std::cout << "int: " << i << "\n";
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f\n";
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << "\n";
}

void convertFloat(const std::string &literal) {
	float f = std::strtof(literal.c_str(), NULL);
	if (std::isnan(f) || std::isinf(f) || f < 0 || f > 127)
		std::cout << "char: impossible\n";
	else if (f >= 32 && f <= 126)
		std::cout << "char: '" << static_cast<char>(f) << "'\n";
	else
		std::cout << "char: Non displayable\n";
	if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min() || std::isnan(f))
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(f) << "\n";
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f\n";
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << "\n";
}

void convertDouble(const std::string &literal) {
	double d = std::strtod(literal.c_str(), NULL);
	if (std::isnan(d) || std::isinf(d) || d < 0 || d > 127)
		std::cout << "char: impossible\n";
	else if (d >= 32 && d <= 126)
		std::cout << "char: '" << static_cast<char>(d) << "'\n";
	else
		std::cout << "char: Non displayable\n";
	if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min() || std::isnan(d))
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(d) << "\n";
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f\n";
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << "\n";
}
