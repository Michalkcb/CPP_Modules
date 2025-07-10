/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:55:10 by mbany             #+#    #+#             */
/*   Updated: 2025/07/10 18:54:49 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdint>
class Serializer
{
public:
	static uintptr_t serialize(void* ptr);
	static Data* deserialize(uintptr_t raw);
private:
	Serializer();
	~Serializer();
	Serializer(const Serializer& other);
	Serializer &operator=(const Serializer &other);
};
