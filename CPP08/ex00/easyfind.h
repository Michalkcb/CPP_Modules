/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:49:35 by mbany             #+#    #+#             */
/*   Updated: 2025/07/15 20:01:28 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <stdexcept>
template <typename T>
int easyfind( const T &container, int value){
	typename T::const_iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::runtime_error("Value not found");
	return std::distance(container.begin(), it);
}