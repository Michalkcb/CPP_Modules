/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:22:00 by mbany             #+#    #+#             */
/*   Updated: 2025/06/12 18:22:51 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"
class Cure : public AMateria {
public:
	Cure();
	virtual ~Cure();
	Cure(Cure const & other);
	Cure & operator=(Cure const & other);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif // CURE_HPP