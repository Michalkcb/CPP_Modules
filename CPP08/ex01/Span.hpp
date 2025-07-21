/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:56:40 by mbany             #+#    #+#             */
/*   Updated: 2025/07/21 17:06:46 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <stdexcept>

class Span {
private:
	unsigned int _maxSize;
	std::vector<int> _numbers;
	
public:
	Span();
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();
	Span(unsigned int n);

	void addNumber(int number);
	
	template <typename InputIt>
	void addNumbers(InputIt begin, InputIt end) {
		size_t count = std::distance(begin, end);
		if (_numbers.size() + count > _maxSize) {
			throw std::length_error("Span is full, cannot add more numbers.");
		}
		_numbers.insert(_numbers.end(), begin, end);
	}
	int shortestSpan() const;
	int longestSpan() const;
};
