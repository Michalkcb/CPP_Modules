/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 10:57:46 by mbany             #+#    #+#             */
/*   Updated: 2025/08/31 16:37:59 by mbany            ###   ########.fr       */
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

	std::vector<int> vectorCopy = _vectorData;
	std::deque<int> dequeCopy = _dequeData;
	
	// time for vector
	clock_t startVector = clock();
	fordJohnsonSort(vectorCopy);
	clock_t endVector = clock();
	double timeVector = static_cast<double>(endVector - startVector) / CLOCKS_PER_SEC * 1000000;

	// time for deque
	clock_t startDeque = clock();
	fordJohnsonSortDeque(dequeCopy);
	clock_t endDeque = clock();
	double timeDeque = static_cast<double>(endDeque - startDeque) / CLOCKS_PER_SEC * 1000000;

	printSequence("After: ", vectorCopy);

	std::cout << "Time to process a range of " << _vectorData.size() << " elements with std::vector : " << timeVector << " us" << std::endl;
	std::cout << "Time to process a range of " << _dequeData.size() << " elements with std::deque : " << timeDeque << " us" << std::endl;
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

void PmergeMe::fordJohnsonSort(std::vector<int>& container) {
	if (container.size() <= 1)
		return;
		
	if (container.size() == 2) {
		if (container[0] > container[1])
			std::swap(container[0], container[1]);
		return;
	}
	
	std::vector < std::pair <int, int> >pairs;
	bool hasOdd = false;
	int oddElement = 0;
	
	// paring and sorting in pairs
	for (size_t i = 0; i < container.size() - 1; i += 2) {
		int a = container[i];
		int b = container[i + 1];
		if (a > b)
			pairs.push_back(std::make_pair(b, a));
		else
			pairs.push_back(std::make_pair(a, b));
	}

	// odd 
	if (container.size() % 2 == 1) {
		hasOdd = true;
		oddElement = container[container.size() - 1];
	}

	// take bigger and sort
	std::vector<int> larger;
	for (size_t i = 0; i < pairs.size(); i++)
		larger.push_back(pairs[i].second);
		
	//recursive sort bigger
	if (larger.size() > 1)
		fordJohnsonSort(larger);

	// insert smaller
	std::vector<int> result = larger;
	for (size_t i = 0; i < pairs.size(); i++) {
		int smaller = pairs[i].first;
		size_t pos = 0;
		while (pos < result.size() && result[pos] < smaller)
			pos++;
		result.insert(result.begin() + pos, smaller);
	}

	if (hasOdd) {
		size_t pos = 0;
		while (pos < result.size() && result[pos] < oddElement)
			pos++;
		result.insert(result.begin() + pos, oddElement);
	}
	container = result;
}

void PmergeMe::fordJohnsonSortDeque(std::deque<int>& container) {
	if (container.size() <= 1)
		return;
		
	if (container.size() == 2) {
		if (container[0] > container[1])
			std::swap(container[0], container[1]);
		return;
	}
	
	std::vector < std::pair <int, int> >pairs;
	bool hasOdd = false;
	int oddElement = 0;
	
	// paring and sorting in pairs
	for (size_t i = 0; i < container.size() - 1; i += 2) {
		int a = container[i];
		int b = container[i + 1];
		if (a > b)
			pairs.push_back(std::make_pair(b, a));
		else
			pairs.push_back(std::make_pair(a, b));
	}

	// odd 
	if (container.size() % 2 == 1) {
		hasOdd = true;
		oddElement = container[container.size() - 1];
	}

	// take bigger and sort
	std::deque<int> larger;
	for (size_t i = 0; i < pairs.size(); i++)
		larger.push_back(pairs[i].second);
		
	//recursive sort bigger
	if (larger.size() > 1)
		fordJohnsonSortDeque(larger);

	// insert smaller
	std::deque<int> result = larger;
	for (size_t i = 0; i < pairs.size(); i++) {
		int smaller = pairs[i].first;
		size_t pos = 0;
		while (pos < result.size() && result[pos] < smaller)
			pos++;
		result.insert(result.begin() + pos, smaller);
	}

	if (hasOdd) {
		size_t pos = 0;
		while (pos < result.size() && result[pos] < oddElement)
			pos++;
		result.insert(result.begin() + pos, oddElement);
	}
	container = result;
}
