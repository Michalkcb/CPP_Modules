/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 10:57:46 by mbany             #+#    #+#             */
/*   Updated: 2025/08/31 14:15:28 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 Jacobsthal Numbers: The sequence: 1, 1, 3, 5, 11, 21, 43, 85, 171, ... Formula: J(n) = J(n-1) + 2×J(n-2), with J(0)=0, J(1)=1
*/

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>  // dla atoi(), strtol()
#include <climits> // dla INT_MAX

class PmergeMe {
	private:
		std::vector<int> _vectorData;
		std::deque<int> _dequeData;
		
		void printSequence(const std::string& prefix, const std::vector<int>& container);
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe();
		
		void processInput(int argc, char** argv);
		void run();	
		// Ford-Johnson algorithm functions
		std::vector<int> generateJacobsthal(int n);
		void fordJohnsonSort(std::vector<int>& container);
		int binarySearch(const std::vector<int>&arr, int target, int left, int right);
		
};

