/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 11:49:09 by mbany             #+#    #+#             */
/*   Updated: 2025/05/11 14:36:19 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
#include <iostream>
#include <fstream>
#include <string>

class Harl
{
public:
	Harl();
	void complain( std::string level );
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	
	typedef void (Harl::*HarlFunc)(void);
	static const std::string levels[4];
	static const HarlFunc funcs[4];
	
};	
#endif