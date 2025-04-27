/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:56:57 by mbany             #+#    #+#             */
/*   Updated: 2025/04/22 19:30:15 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

std::string Contact::getFirstName() const
{ return mFirstName;}

std::string Contact::getLastName() const
{ return mLastName;}

std::string Contact::getNickName() const
{ return mNickName;}

std::string Contact::getNumber() const
{ return mNumber;}

std::string Contact::getSecret() const
{ return mSecret;}	

int Contact::get_id() const
{return m_id;}

void Contact::setFirstName(std::string s)
{ mFirstName = s;}

void Contact::setLastName(std::string s)
{ mLastName = s;}

void Contact::setNickName(std::string s)
{ mNickName = s;}

void Contact::setNumber(std::string s)
{ mNumber = s;}

void Contact::setSecret(std::string s)
{ mSecret = s;}

void Contact::setid(int number)
{ m_id = number;}

void print_Contact(std::string s)
{
	int i = 0;
	if (s.length() > 10)
	{
		s[9] = '.';
		while (s[i] && i < 10)
		{
			std::cout << s[i];
			i++;
		}
	}
	else
		std::cout << std::setw(10) << s;
}
