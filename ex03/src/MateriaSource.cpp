/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   MateriaSource.cpp                                       :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/04/02 19:20:31 by avaliull            #+#    #+#           */
/*   Updated: 2026/04/02 19:42:32 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	*this = other;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other)
		*this = other;
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int inv_idx = 0; inv_idx < SLOT_COUNT; inv_idx++) {
		delete _template_slots[inv_idx];
	}
}

auto MateriaSource::learnMateria(
	AMateria* materia
) -> void {
	int	first_free_slot;

	for (first_free_slot = 0; first_free_slot < SLOT_COUNT; first_free_slot++) {
		if (_template_slots[first_free_slot] == nullptr) {
			break ;
		}
	}
	if (first_free_slot == SLOT_COUNT) {
		std::cout << "Materia Source can't learn materia ";
		std::cout << materia->getType();
		std::cout << ": slots filled!\n";
		return ;
	}
	_template_slots[first_free_slot] = materia->clone();
}

auto MateriaSource::createMateria(
	std::string const & type
) -> AMateria* {
	int	first_free_slot;

	for (first_free_slot = 0; first_free_slot < SLOT_COUNT; first_free_slot++) {
		if (_template_slots[first_free_slot] == nullptr) {
			break ;
		}
		if (_template_slots[first_free_slot]->getType() == type)
			return (_template_slots[first_free_slot]->clone());
	}
	std::cout << "Materia Source doesn't have a template for materia type ";
	std::cout << CLR_YEL << type << CLR_NON;
	std::cout << "\n";
	return (nullptr);
}
