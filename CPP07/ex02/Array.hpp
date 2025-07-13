/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 15:08:34 by mbany             #+#    #+#             */
/*   Updated: 2025/07/13 15:27:22 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

template <typename T>
class Array {
	private:
		T* _array;
		unsigned int _size;

	public:
		Array();
		Array(const Array<T>& other);
		Array &operator=(const Array<T>& other);
		~Array();
		
		Array(unsigned int n);
	};