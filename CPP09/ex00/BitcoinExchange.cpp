/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:31:09 by mbany             #+#    #+#             */
/*   Updated: 2025/08/28 18:44:00 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#include <cctype>
#include <cstdlib>

bool isValidDate(const std::string& date) {
    if (date.length() != 10)
        return false;
    if (date[4] != '-' || date[7] != '-')
        return false;
    for (int i = 0; i < 4; ++i)
        if (!isdigit(date[i]))
            return false;
    for (int i = 5; i < 7; ++i)
        if (!isdigit(date[i]))
            return false;
    for (int i = 8; i < 10; ++i)
        if (!isdigit(date[i]))
            return false;
    int month = std::atoi(date.substr(5,2).c_str());
    int day = std::atoi(date.substr(8,2).c_str());
    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > 31)
        return false;
    return true;
}