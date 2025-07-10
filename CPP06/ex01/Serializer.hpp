/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:55:10 by mbany             #+#    #+#             */
/*   Updated: 2025/07/10 19:51:06 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdint.h>
#include "Data.hpp"

class Serializer
{
public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
private:
	Serializer();
	Serializer(const Serializer& other);
	Serializer &operator=(const Serializer &other);
	~Serializer();
};
