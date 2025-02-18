/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:43:09 by mbany             #+#    #+#             */
/*   Updated: 2025/02/18 20:06:17 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"
void init_menu()
{
	std::cout << " "<< std::endl;
	std::cout << " " << std::endl;
	std::cout << "commands: ADD | SEARCH | EXIT\n\n\n" << std::endl;
}


int main(void)
{
	PhoneBook PhoneBook;
	std::string input;
	
	init_menu(); //set_homepage
	
}