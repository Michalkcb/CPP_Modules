// Copyright 2025 mbany

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:11:54 by mbany             #+#    #+#             */
/*   Updated: 2025/07/12 14:45:41 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CPP06/ex01/Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr) {
return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
return reinterpret_cast<Data*>(raw);
}
