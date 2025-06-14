/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 12:03:52 by mbany             #+#    #+#             */
/*   Updated: 2025/06/14 13:46:32 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class AMateria
{
protected:

public:
AMateria(std::string const & type);

std::string const & getType() const; //Returns the materia type
virtual AMateria* clone() const = 0;
virtual void use(ICharacter& target);
};

class IMateriaSource
{
public:
virtual ~IMateriaSource() {}
virtual void learnMateria(AMateria*) = 0;
virtual AMateria* createMateria(std::string const & type) = 0;
};

class ICharacter
{
public:
virtual ~ICharacter() {}
virtual std::string const & getName() const = 0;
virtual void equip(AMateria* m) = 0;
virtual void unequip(int idx) = 0;
virtual void use(int idx, ICharacter& target) = 0;
};

class MateriaSource
{
	private:
		AMateria* trmplates[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & other);
		MateriaSource & operator=(MateriaSource const & other);
		virtual ~MateriaSource();

		virtual void learnMateria(AMateria* m);	
		virtual AMateria* createMateria(std::string const & type);

};

class Ice
{

};

class Cure
{

};

class Character
{

};