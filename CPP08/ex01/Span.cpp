/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:35:43 by mbany             #+#    #+#             */
/*   Updated: 2025/07/21 16:56:52 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

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

void Span::addNumber(int number) {
	if (_numbers.size() >= _maxSize) {
		throw std::length_error("Span is full, cannot add more numbers.");
	}
	_numbers.push_back(number);
}
template <typename InputIt>
void Span::addNumbers(InputIt begin, InputIt end) {
	size_t count = std::distance(begin, end);
	if (_numbers.size() + count > _maxSize) {
		throw std::length_error("Span is full, cannot add more numbers.");
	}
	_numbers.insert(numbers.end(), begin, end);
}

int Span::shortestSpan() const {
	if (_numbers.size() < 2)
		throw std::logic_error("Not enough numbers");
	std::vector<int> tmp = _numbers;
	std::sort(tmp.begin(), tmp.end());
	int minSpan = tmp[1] - tmp[0];
	for (size_t i = 1; i < tmp.size() - 1; ++i)
		minSpan = std::min(minSpan, tmp[i + 1] - tmp[i]);
	return minSpan;
}
int Span::longestSpan() const {
	if (_numbers.size() < 2)
		throw std::logic_error("Not enough numbers");
	int minVal = *std::min_element(_numbers.begin(), _numbers.end());
	int maxVal = *std::max_element(_numbers.begin(), _numbers.end());
	return maxVal - minVal;
}