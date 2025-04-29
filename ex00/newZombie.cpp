/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:08:01 by mbany             #+#    #+#             */
/*   Updated: 2025/04/29 19:12:28 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
//utworzony obiekt istnieje poza funkcją
//nie jest automatycznie niszczony więc trzeba go dniszczyć po wywołaniu
// obiekt jest tworzony na stercie (heap)

Zombie* newZombie(std::string name)
{
	return new Zombie(name);
}