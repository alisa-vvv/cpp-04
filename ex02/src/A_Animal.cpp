/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   A_Animal.cpp                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:23:14 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/31 18:04:56 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"
#include <iostream>

A_Animal::A_Animal() : _type("platonic_animal") {
	std::cout << CLR_MAG << "A_Animal default constructor is called" << CLR_NON << '\n';
}

A_Animal::A_Animal(const A_Animal& other) : _type("platonic_animal") {
	std::cout << CLR_MAG << "A_Animal copy constructor is called" << CLR_NON << '\n';
	*this = other;
}

A_Animal&	A_Animal::operator=(const A_Animal& other) {
	std::cout << CLR_MAG << "A_Animal assign operator is called" << CLR_NON << '\n';
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

A_Animal::~A_Animal() {
	std::cout << CLR_MAG << "A_Animal default destructor is called" << CLR_NON << '\n';
}

auto A_Animal::makeSound(
	void
) const -> void {
	std::cout << CLR_YEL << _type << ": " << CLR_NON << "platonic ideal of an animal sound!"<< '\n';
}

auto A_Animal::getType(
	void
) const -> std::string {
	return (_type);
}

auto A_Animal::getBrainAddress(
) const -> Brain* {
	return (nullptr);
}

auto A_Animal::thinkThoughtIndex(
	int	index
) const -> void {
	(void) index;
	std::cout << _type << "is thinking the platonic ideal of animal thought\n";
}
