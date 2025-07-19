/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:35:43 by mbany             #+#    #+#             */
/*   Updated: 2025/07/19 17:13:50 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _maxSize(0) {}
Span::Span(const Span &other) : _maxSize(other._maxSize), _numbers(other._numbers) {}
Span &Span::operator=(const Span &other) {
	if (this != &other) {
		_maxSize = other._maxSize;
		_numbers = other._numbers;
	}
	return *this;
}
Span::~Span() {}
Span::Span(unsigned int n) : _maxSize(n) {}

void addNumber(int number) {
	
}
int shortestSpan() {
	
}
int longestSpan() {
	
}