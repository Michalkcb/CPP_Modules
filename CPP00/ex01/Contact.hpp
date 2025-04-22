/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:56:57 by mbany             #+#    #+#             */
/*   Updated: 2025/04/22 19:26:41 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <iomanip>

void print_Contact(std::string str);

class Contact
{
	public:
	void setFirstName(std::string s);
	void setLastName(std::string s);
	void setNickName(std::string s);
	void setNumber(std::string s);
	void setSecret(std::string s);
	void setid(int number);
	int get_id() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getNumber() const;
	std::string getSecret() const;

	private:
	int m_id;
	std::string mFirstName;
	std::string mLastName;
	std::string mNickName;
	std::string mNumber;
	std::string mSecret;

};