/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:44:12 by mbany             #+#    #+#             */
/*   Updated: 2025/02/18 19:53:30 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>

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