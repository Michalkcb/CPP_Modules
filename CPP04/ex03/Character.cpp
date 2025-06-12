/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:15:54 by mbany             #+#    #+#             */
/*   Updated: 2025/06/12 18:20:47 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>
Character::Character(std::string const & name) : name(name) {
	for (int i = 0; i < 4; ++i)
		inventory[i] = nullptr;
}

Character:: ~Character() {
	for (int i = 0; i < 4; ++i)
		delete inventory[i];
}

Character::Character(const Character & other) : name(other.name) {
	for (int i = 0; i < 4; ++i) {
		if (other.inventory[i])
			inventory[i] = other.inventory[i]->clone();
		else
			inventory[i] = nullptr;
	}
}

Character & Character::operator=(const Character & other) {
	if (this != &other) {
		name = other.name;
		for (int i = 0; i < 4; ++i) {
			delete inventory[i];
			if (other.inventory[i])
				inventory[i] = other.inventory[i]->clone();
			else
				inventory[i] = nullptr;
		}
	}
	return *this;
}

std::string const & Character::getName() const {
	return name;
}

void Character::equip(AMateria* m) {
	if (!m) return; // Check if the materia is valid
	
	for (int i = 0; i < 4; ++i) {
		if (!inventory[i]) {
			inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return; // Invalid index
	inventory[idx] = nullptr;
};

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3 || !inventory[idx])
		return; // Invalid index or no materia equipped
	inventory[idx]->use(target);
}