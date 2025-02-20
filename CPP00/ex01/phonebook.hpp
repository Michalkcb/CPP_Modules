/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:44:12 by mbany             #+#    #+#             */
/*   Updated: 2025/02/20 19:57:59 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>
void init_menu();

class PhoneBook
{
	public:
		PhoneBook();
		int addContact();
		int searchContact();
		int showContact(int index);

	private:
		int nb_Contact;
};