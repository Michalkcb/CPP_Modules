/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:56:40 by mbany             #+#    #+#             */
/*   Updated: 2025/07/19 13:12:15 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Span {
private:

public:
	Span();
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();
	Span(unsigned int n);

	int addNumber(int number);
	int shortestSpan();
	int longestSpan();
};
