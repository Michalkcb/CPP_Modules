/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:31:09 by mbany             #+#    #+#             */
/*   Updated: 2025/09/06 12:00:32 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>		// std::string
#include <cctype>		// isdigit(), funkcje dla znaków
#include <cstdlib>		// atoi(), strtol(), konwersje
#include <iostream>		// std::cout, std::cerr
#include <fstream>		// std::ifstream - czytanie plików
#include <map>			// std::map<string, double> - kontener dla kursów
#include <sstream>		// std::istringstream - parsowanie stringów


bool isValidDate(const std::string& date);
bool isValidValue(const std::string& valueStr, double& value);
bool loadExchangeRates(const std::string& filename, std::map<std::string, double>& exchangeRates);
void processLine(const std::string& date, double value, const std::map<std::string, double>& exchangeRates);