/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 10:57:46 by mbany             #+#    #+#             */
/*   Updated: 2025/08/31 14:32:35 by mbany            ###   ########.fr       */
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
	
	//copy and sort
	std::vector<int> sortData = _vectorData;
	fordJohnsonSort(sortData);
	
	printSequence("After: ", sortData);
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

std::vector<int> PmergeMe::generateJacobsthal(int n) {
	std::vector<int> jacobsthal;
	if (n <= 0) return jacobsthal;
	
	jacobsthal.push_back(0);
	if (n > 1) jacobsthal.push_back(1);

	for (int i = 2; i < n; ++i) {
		int next = jacobsthal[i-1] + 2 * jacobsthal[i-2];
		if (next > n) break;
		jacobsthal.push_back(next);
	}
	return jacobsthal;
}

void PmergeMe::fordJohnsonSort(std::vector<int>& container) {
	if (container.size() <= 1)
		return;
	if (container.size() == 2) {
		if (container[0] > container[1])
			std::swap(container[0], container[1]);
		return;
	}
	for (size_t i = 0; i < container.size() - 1; i++)
		for (size_t j = 0; j < container.size() - 1 - i; j++)
			if (container[j] > container[j + 1])
				std::swap(container[j], container[j + 1]);

}

int PmergeMe::binarySearch(const std::vector<int>& arr, int target, int left, int right) {
	while ( left <right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] < target)
			left = mid + 1;
		else
			right = mid;
	}
	return left;
}