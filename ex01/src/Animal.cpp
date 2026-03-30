/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Animal.cpp                                              :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:23:14 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/30 20:17:51 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : _type("platonic_animal") {
	std::cout << CLR_MAG << "Animal default constructor is called" << CLR_NON << '\n';
}

Animal::Animal(const Animal& other) : _type("platonic_animal") {
	std::cout << CLR_MAG << "Animal copy constructor is called" << CLR_NON << '\n';
	*this = other;
}

Animal&	Animal::operator=(const Animal& other) {
	std::cout << CLR_MAG << "Animal assign operator is called" << CLR_NON << '\n';
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

Animal::~Animal() {
	std::cout << CLR_MAG << "Animal default destructor is called" << CLR_NON << '\n';
}

auto Animal::makeSound(
	void
) const -> void {
	std::cout << CLR_YEL << _type << ": " << CLR_NON << "platonic ideal of an animal sound!"<< '\n';
}

auto Animal::getType(
	void
) const -> std::string {
	return (_type);
}
auto Animal::getBrainAddress(
) const -> Brain* {
	return (_brain);
}
