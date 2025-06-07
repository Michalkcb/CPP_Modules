/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 15:09:50 by mbany             #+#    #+#             */
/*   Updated: 2025/06/07 22:12:50 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <string>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string type;
public:
AMateria(std::string const & type);
virtual ~AMateria();
std::string const & getType() const;
virtual AMateria* clone() const = 0;
virtual void use(ICharacter& target);
};

#endif 