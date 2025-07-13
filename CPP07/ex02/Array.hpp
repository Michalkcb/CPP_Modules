/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 15:08:34 by mbany             #+#    #+#             */
/*   Updated: 2025/07/13 16:47:55 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <cstdlib>
#include <ctime>

template <typename T>
class Array {
	private:
		T* _array;
		unsigned int _size;

	public:
		Array(const Array<T>& other) : _array(NULL), _size(other._size) {
			if (_size > 0) {
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; ++i) {
					_array[i] = other._array[i];
				}
			}
		}
		Array &operator=(const Array<T>& other) {
			if (this != &other) {
				delete[] _array; // Free existing memory
				_size = other._size;
				_array = (_size > 0) ? new T[_size] : NULL; // Allocate new memory
				for (unsigned int i = 0; i < _size; ++i)
					_array[i] = other._array[i];
			}
			return *this;
		}
		
		Array() : _array(NULL), _size(0) {}
		~Array() {
			delete[] _array;
		}
		Array(unsigned int n) : _array(n ? new T[n] : NULL), _size(n) {}		
		T& operator[](int index) {
			if (index < 0 || static_cast<unsigned int>(index) >= _size)
				throw std::out_of_range("Index out of bounds");
			return _array[index];
		}
		
		const T& operator[](int index) const {
			if (index < 0 || static_cast<unsigned int>(index) >= _size)
				throw std::out_of_range("Index out of bounds");
			return _array[index];
		}
		
		unsigned int size() const {
			return _size;
		}
	};
	