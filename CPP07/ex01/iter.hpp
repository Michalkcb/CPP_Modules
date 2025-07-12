/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:27:11 by mbany             #+#    #+#             */
/*   Updated: 2025/07/12 15:30:58 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef> // for size_t
template <typename T>
void iter(T* array, size_t length, void (*func)(T&)) {
	for (size_t i = 0; i < length; ++i) {
		func(array[i]);
	}
}