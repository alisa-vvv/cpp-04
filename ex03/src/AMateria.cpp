/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   AMateria.cpp                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/31 20:06:54 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/31 20:14:26 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp" // reee

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
