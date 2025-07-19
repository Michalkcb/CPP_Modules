/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:56:40 by mbany             #+#    #+#             */
/*   Updated: 2025/07/19 16:56:12 by mbany            ###   ########.fr       */
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
	int shortestSpan() const;
	int longestSpan() const;
};
