/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:44:12 by mbany             #+#    #+#             */
/*   Updated: 2025/02/23 17:01:49 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>
// # include "Contact.hpp"

void init_menu();
int is_number(std::string str);

class Contact
{
	public:
		void setFirstName(std::string s);
		void setLastName(std::string s);
		void setNickName(std::string s);
		void setNumber(std::string s);
		void setSecret(std::string s);
		void setid(int nb);
	

	private:
	int m_id;
	std::string mFirstName;

};

class PhoneBook
{
	public:
		PhoneBook();
		int addContact();
		int searchContact();
		int showContact(int index);

	private:
		Contact user[8];
		int nb_Contact;
};
