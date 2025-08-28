/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:31:09 by mbany             #+#    #+#             */
/*   Updated: 2025/08/28 19:45:13 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"



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

bool isValidValue(const std::string& valueStr, double& value) {
    char* endptr = NULL;
    value = std::strtod(valueStr.c_str(), &endptr);
    if (*endptr != '\0') // nie całość jest liczbą
        return false;
    if (value <= 0)
        return false;
    if (value > 1000)
        return false;
    return true;
}

bool loadExchangeRates(const std::string& filename, std::map<std::string, double>& exchangeRates) {
    std::ifstream dbFile(filename.c_str());
    if (!dbFile.is_open())
        return false;
    std::string dbLine;
    if (std::getline(dbFile, dbLine)) {} // pomiń nagłówek
    while (std::getline(dbFile, dbLine)) {
        std::istringstream iss(dbLine);
        std::string date, rateStr;
        if (std::getline(iss, date, ',') && std::getline(iss, rateStr)) {
            exchangeRates[date] = atof(rateStr.c_str());
        }
    }
    dbFile.close();
    return true;
}

void processLine(const std::string& date, double value, const std::map<std::string, double>& exchangeRates) {
    std::map<std::string, double>::const_iterator it = exchangeRates.lower_bound(date);
    if (it == exchangeRates.end() || it->first != date) {
        if (it == exchangeRates.begin()) {
            std::cout << "Error: no exchange rate for date " << date << std::endl;
            return;
        }
        --it; // najbliższa wcześniejsza data
    }
    double result = value * it->second;
    std::cout << date << " => " << value << " = " << result << std::endl;
}

