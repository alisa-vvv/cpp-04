/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   AMateria.cpp                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/31 20:06:54 by avaliull            #+#    #+#           */
/*   Updated: 2026/04/03 14:20:03 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp" // reee

AMateria::AMateria() {
}

AMateria::AMateria(std::string const& type) {
	_type = type;
}

AMateria::AMateria(const AMateria& other) {
	*this = other;
}
AMateria&	AMateria::operator=(const AMateria& other) {
	if (this != &other)
		*this = other;
	return (*this);
}

AMateria::~AMateria() {
}

auto 	AMateria::getType(
	void
) const -> const std::string& {
	return (_type);
}

auto	AMateria::cleanFloor(
	void
) ->void {
	for (int i = 0; i < free_floor_idx; i++) {
		delete AMateria::floor[i];
	}
}

AMateria*	AMateria::floor[FLOOR_SIZE] { 0 };
int			AMateria::free_floor_idx { 0 };
