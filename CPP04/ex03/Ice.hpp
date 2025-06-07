/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 21:23:15 by mbany             #+#    #+#             */
/*   Updated: 2025/06/07 22:21:37 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
    public:
        Ice();
        virtual ~Ice();
        Ice(Ice const & other);
        Ice & operator=(Ice const & other);

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);

};

#endif