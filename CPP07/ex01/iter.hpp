/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:27:11 by mbany             #+#    #+#             */
/*   Updated: 2025/07/19 18:32:50 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef> // for size_t

template <typename T, typename F>
void iter(T* array, size_t length, F func) {
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}
