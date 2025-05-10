/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:04:53 by mbany             #+#    #+#             */
/*   Updated: 2025/05/10 13:50:45 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
private:
	std::string type;

public:
	Weapon(const std::string &type);
	const std::string &getType() const;
	void setType(const std::string& newType);
};
#endif