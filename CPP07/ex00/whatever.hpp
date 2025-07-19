/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 11:58:18 by mbany             #+#    #+#             */
/*   Updated: 2025/07/19 14:08:04 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void swap ( T& a, T& b ) {
	T temp = a;
	a = b;
	b = temp;
}
template <typename T>
const T& min (const T& a,const T& b ) {
		return ( a < b )? a : b;
}
template <typename T>
const T& max (const T& a,const T& b ) {
		return ( a > b )? a : b;
}