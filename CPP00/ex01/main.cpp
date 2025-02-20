/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:43:09 by mbany             #+#    #+#             */
/*   Updated: 2025/02/20 19:50:52 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"
void init_menu()
{
	std::cout << " "<< std::endl;
 	std::cout << " __  __ ___   _   _  ___   __" << std::endl << "|  \\/  | _ ) /_\\ | \\| \\ \\ / /" << std::endl << "| |\\/| | _ \\/ _ \\| .` |\\ V / " << std::endl << "|_|  |_|___/_/ \\_\\_|\\_| |_|  " << std::endl << std::endl;
    std::cout << "commands: ADD | SEARCH | EXIT\n\n\n" << std::endl;
}


int main(void)
{
	PhoneBook PhoneBook;
	std::string input;
	
	init_menu(); //set_homepage

	while (1)
	{
		std::cout << "$ -> ";
		if (std::getline(std::cin, input) == 0)
			return 0;
		else if (input == "ADD")
			PhoneBook.addContact();
		else if (input == "SEARCH")
			PhoneBook.searchContact();
		else if (input == "EXIT")
			return 0;
		else
			std::cout << "error: wrong input" << std::endl;
		
	}
	return 0;
}