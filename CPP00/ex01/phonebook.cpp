/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:45:08 by mbany             #+#    #+#             */
/*   Updated: 2025/04/26 16:56:16 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Welcome to the 80s and their unbelievable technology! Write a program that behaves
like a crappy awesome phonebook software.
You have to implement two classes:
• PhoneBook
◦ It has an array of contacts.
◦ It can store a maximum of 8 contacts. If the user tries to add a 9th contact,
replace the oldest one by the new one.
◦ Please note that dynamic allocation is forbidden.
• Contact
◦ Stands for a phonebook contact.
In your code, the phonebook must be instantiated as an instance of the PhoneBook
class. Same thing for the contacts. Each one of them must be instantiated as an instance
of the Contact class. You’re free to design the classes as you like but keep in mind that
anything that will always be used inside a class is private, and that anything that can be
used outside a class is public.
Don’t forget to watch the intranet videos.
6
C++ - Module 00
Namespaces, classes, member functions, stdio streams,
initialization lists, static, const, and some other basic stuff
On program start-up, the phonebook is empty and the user is prompted to enter one
of three commands. The program only accepts ADD, SEARCH and EXIT.
• ADD: save a new contact
◦ If the user enters this command, they are prompted to input the information
of the new contact one field at a time. Once all the fields have been completed,
add the contact to the phonebook.
◦ The contact fields are: first name, last name, nickname, phone number, and
darkest secret. A saved contact can’t have empty fields.
• SEARCH: display a specific contact
◦ Display the saved contacts as a list of 4 columns: index, first name, last
name and nickname.
◦ Each column must be 10 characters wide. A pipe character (’|’) separates
them. The text must be right-aligned. If the text is longer than the column,
it must be truncated and the last displayable character must be replaced by a
dot (’.’).
◦ Then, prompt the user again for the index of the entry to display. If the index
is out of range or wrong, define a relevant behavior. Otherwise, display the
contact information, one field per line.
• EXIT
◦ The program quits and the contacts are lost forever!
• Any other input is discarded.
Once a command has been correctly executed, the program waits for another one. It
stops when the user inputs EXIT.
Give a relevant name to your executable.
*/
# include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	nb_Contact = 0;
}
int PhoneBook::addContact()
{
	if (PhoneBook::nb_Contact == 8)
	{
		std::cout << "PhoneBook is full, replacing the oldest contact" << std::endl << "Overwrite the last one" << std::endl;
		for (int i = 0; i < 7; i++)
		{
			user[i] = user[i + 1];
			user[i].setid(i);
		}
		PhoneBook::nb_Contact--;
	}
	std::string input;
	
	do {
		std::cout << "First Name: ";
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "Error: Field cannot be empty" << std::endl;
	} while (input.empty());
	user[PhoneBook::nb_Contact].setFirstName(input);

	do{
		std::cout << "Last Name: ";
		std::getline(std::cin, input);
		if (input.empty())
		std::cout << "Error: Field cannot be empty" << std::endl;
	} while (input.empty());
	user[PhoneBook::nb_Contact].setLastName(input);
	
	do {
		std::cout << "Nick Name: ";
		std::getline(std::cin, input);
		if (input.empty())
		std::cout << "Error: Field cannot be empty" << std::endl;
	} while (input.empty());
	user[PhoneBook::nb_Contact].setNickName(input);

	do{		
		std::cout << "Number: ";
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "Error: Field cannot be empty" << std::endl;
	} while (input.empty());
	user[PhoneBook::nb_Contact].setNumber(input);
	
	do {	
		std::cout << "Secret: ";
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "Error: Field cannot be empty" << std::endl;
	} while (input.empty());
	user[PhoneBook::nb_Contact].setNumber(input);
		user[PhoneBook::nb_Contact].setSecret(input);
	

	
	user[PhoneBook::nb_Contact].setid(PhoneBook::nb_Contact);
	nb_Contact++;
	return 0;
}
int PhoneBook::searchContact()
{
	if (PhoneBook::nb_Contact == 0){
		std::cout << "Error: No Contact in memory" << std::endl;
		return (-1);
	}
    std::cout << "|  Index  |First Name| Last Name| Nickname |\n";
	for (int i=0; i < PhoneBook::nb_Contact; i++)
	{
		std::cout << "\n";
		std::cout << std::setw(10) << user[i].get_id() + 1;
		std::cout << "|";
		print_Contact(user[i].getFirstName());
		std::cout << "|";
		print_Contact(user[i].getLastName());
		std::cout << "|";
		print_Contact(user[i].getNickName());
		std::cout << "|" << std::endl;
	}
	
	std::cout << "Enter the index of the contact you want to see: ";
	std::string input;
	std::getline(std::cin, input);

	int index;
	std::stringstream ss(input);
	if (!(ss >> index) || index < 1)
	{
		std::cout << "Error: Invalid input" << std::endl;
		return (-1);
	}
	index -= 1;

	if (index < 0 || index >= PhoneBook::nb_Contact)
	{
		std::cout << "Error: Index out of range" << std::endl;
		return (-1);
	}
	
	std::cout << "First Name: " << user[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << user[index].getLastName() << std::endl;
	std::cout << "Nick Name: " << user[index].getNickName() << std::endl;
	std::cout << "Number: " << user[index].getNumber() << std::endl;
	std::cout << "Secret: " << user[index].getSecret() << std::endl;
	
	// init_menu();
	return 0;
}
