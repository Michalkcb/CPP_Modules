/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:44:12 by mbany             #+#    #+#             */
/*   Updated: 2025/04/26 16:56:55 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>
# include <sstream> 
# include "Contact.hpp"

void init_menu();
int is_number(std::string str);

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
