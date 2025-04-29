/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:08:04 by mbany             #+#    #+#             */
/*   Updated: 2025/04/29 19:12:37 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
// utworzony obiekt istnieje tylko w zakresie funkcji
// obiekt jest automatycznie usuwany po zakończeniu funkcji
// obiekt jest tworzony na stosie (stack)

void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}