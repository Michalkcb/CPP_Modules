/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:57:53 by mbany             #+#    #+#             */
/*   Updated: 2025/07/10 18:58:46 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Data {
public:
	Data(const std::string &name, int value);
	Data(const Data &other);
	Data &operator=(const Data &other);
	~Data();

	const std::string &getName() const;
	int getValue() const;
};