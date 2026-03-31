/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Ice.cpp                                                 :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/31 20:06:54 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/31 20:29:17 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	_type = "ice";
}

Ice::Ice(std::string const& type) {
	_type = type;
}

Ice::Ice(const Ice& other) {
	*this = other;
}

Ice&	Ice::operator=(const Ice& other) {
	if (this != &other)
		*this = other;
	return (*this);
}

Ice::~Ice() {
}

auto Ice::clone(
	void
) const -> AMateria* {
	AMateria*	ice_clone = new Ice(getType());

	return (ice_clone);
}
