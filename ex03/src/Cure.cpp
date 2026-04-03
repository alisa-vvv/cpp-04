/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Cure.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/31 20:06:54 by avaliull            #+#    #+#           */
/*   Updated: 2026/04/03 14:18:04 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() {
	_type = "cure";
}

Cure::Cure(std::string const& type) {
	_type = type;
}

Cure::Cure(const Cure& other) {
	*this = other;
}

Cure&	Cure::operator=(const Cure& other) {
	if (this != &other)
		*this = other;
	return (*this);
}

Cure::~Cure() {
}

auto Cure::clone(
	void
) const -> AMateria* {
	return (new Cure(getType()));
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
