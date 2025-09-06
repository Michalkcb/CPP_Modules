/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:03:24 by mbany             #+#    #+#             */
/*   Updated: 2025/09/06 15:00:30 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>     // dla std::string
#include <stack>      // dla std::stack<int> - stos do obliczeń
#include <vector>     // dla std::vector<std::string> - lista tokenów
#include <sstream>    // dla parsowania stringów
#include <iostream>   // dla wypisywania błędów

class RPN{
	
	private:
		std::stack<int> _stack;
		bool isOperator(const std::string& token);
		bool isNumber(const std::string& token);
		int performOperation(int a, int b, char op);
		std::vector<std::string> tokenize(const std::string& expression);
		
	
	public:
		RPN();
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);
		~RPN();

		int evaluate(const std::string& expression);
		
};