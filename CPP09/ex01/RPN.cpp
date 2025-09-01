/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:57:17 by mbany             #+#    #+#             */
/*   Updated: 2025/09/01 20:14:03 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){};
RPN::RPN(const RPN& other) : _stack(other._stack) {};
RPN& RPN::operator=(const RPN& other) {
	if (this != &other)
		_stack = other._stack;
	return *this;
}
RPN::~RPN(){};

bool RPN::isNumber(const std::string& token) {
	return token.size() == 1 && std::isdigit(token[0]);
}

bool RPN::isOperator(const std::string& token) {
	return token == "+" || token == "-" || token == "*" || token == "/";
}

int RPN::performOperation(int a, int b, char op) {
	switch (op) {
		case '+' : return a + b;
		case '-' : return a - b;
		case '*' : return a * b;
		case '/' :
			if (b == 0) throw std::runtime_error("Division by zero");
			return a / b;
		default: throw std::runtime_error("Invalid operator");
	}
}

int RPN::evaluate(const std::string& expression) {
	_stack = std::stack<int>(); //clean
	
	std::vector<std::string> tokens = tokenize(expression);
	
	for (size_t i = 0; i < tokens.size(); ++i) {
		const std::string& token = tokens[i];
		if (isNumber(token))
			_stack.push(token[0] - '0'); // chat -> int
		else if (isOperator(token)) {
			if (_stack.size() < 2)
				throw std::runtime_error("Not enough operands");
			int b = _stack.top(); _stack.pop();
			int a = _stack.top(); _stack.pop();

			int result = performOperation(a, b, token[0]);
			_stack.push(result);
		}
		else
			throw std::runtime_error("Invalid token: " + token);
	}
	if (_stack.size() != 1)
		throw std::runtime_error("Invalid expression");
	return _stack.top();
}

std::vector<std::string> RPN::tokenize(const std::string& expression) {
    std::vector<std::string> tokens;
    std::istringstream iss(expression);
    std::string token;
    while (iss >> token) {
        tokens.push_back(token);
    }
    return tokens;
}
