/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 11:41:42 by mbany             #+#    #+#             */
/*   Updated: 2025/07/12 12:55:24 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Array {
	private:
		int* arr;
		unsigned int size;
		Array();
		Array (const Array &other);
		Array &operator=(const Array &other);
		~Array();
};