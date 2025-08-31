/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 10:57:46 by mbany             #+#    #+#             */
/*   Updated: 2025/08/31 11:44:27 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) : _vectorData(other._vectorData), _dequeData(other._dequeData) {
	
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
	if (this != &other) {
		_vectorData = other._vectorData;
		_dequeData = other._dequeData;
	}
	return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::processInput(int argc, char ** argv) {
	for (int i = 1; i < argc; i++) {
		std::string arg = argv[i];
		
		if (arg.empty()) {
			throw std::runtime_error("Invalid input");
		}
		for (size_t j = 0; j < arg.length(); j++) {
			if (!std::isdigit(arg[j])) {
				throw std::runtime_error("Invalid input");
			}
		}
		char* endptr;
		long num = std::strtol(arg.c_str(), &endptr, 10);

		if(*endptr != '\0' || num <= 0 || num > INT_MAX) {
			throw std::runtime_error("invalid input");
		}
		int value = static_cast<int>(num);
		_vectorData.push_back(value);
		_dequeData.push_back(value);
	}
}

void PmergeMe::run() {
	printSequence("Before: ", _vectorData);
	printSequence("After: ", _vectorData);
}

void PmergeMe::printSequence(const std::string& prefix, const std::vector<int>& container) {
	std::cout << prefix;
	for (size_t i = 0; i < container.size(); i++) {
		std::cout << container[i];
		if (i < container.size() -1) {
			std::cout << " ";
		}
	}
	std::cout << std::endl;
}