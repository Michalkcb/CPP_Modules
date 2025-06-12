/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 19:21:17 by mbany             #+#    #+#             */
/*   Updated: 2025/06/12 19:25:56 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		templates[i] = nullptr;
	}
}

MateriaSource:: ~MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		delete templates[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	for (int i = 0; i < 4; ++i) {
		if (other.templates[i]) {
			templates[i] = other.templates[i]->clone();
		} else {
			templates[i] = nullptr;
		}
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
		for (int i = 0; i < 4; ++i) {
			delete templates[i];
			if (other.templates[i]) {
				templates[i] = other.templates[i]->clone();
			} else {
				templates[i] = nullptr;
			}
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	if (!m) return;
	for (int i = 0; i < 4; ++i) {
		if (!templates[i]) {
			templates[i] = m->clone();
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; ++i) {
		if (templates[i] && templates[i]->getType() == type) {
			return templates[i]->clone();
		}
	}
	return nullptr;
}