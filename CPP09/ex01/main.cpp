/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 10:57:46 by mbany             #+#    #+#             */
/*   Updated: 2025/08/30 16:23:28 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac, char** av){
	if (ac < 2) {
		std::cerr << "Error" << std::endl;
		return 1;
	}
	
	try {
		PmergeMe sorter;
		sorter.processInput(ac, av);
		sorter.run();
	}

	catch (const std::exception& e) {
		std::cerr << "Error" << std::endl;
		return 1;
	}
	return 0;
}