/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:31:09 by mbany             #+#    #+#             */
/*   Updated: 2025/08/28 19:17:53 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <cctype>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <map>
#include <sstream>


bool isValidDate(const std::string& date);
bool isValidValue(const std::string& valueStr, double& value);
bool loadExchangeRates(const std::string& filename, std::map<std::string, double>& exchangeRates);