/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   WrongAnimal.cpp                                         :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:23:14 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/30 18:37:05 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : _type("platonic_wrong_animal") {
	std::cout << CLR_MAG << "WrongAnimal default constructor is called" << CLR_NON << '\n';
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type("platonic_wrong_animal") {
	std::cout << CLR_MAG << "WrongAnimal copy constructor is called" << CLR_NON << '\n';
	*this = other;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << CLR_MAG << "WrongAnimal assign operator is called" << CLR_NON << '\n';
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << CLR_MAG << "WrongAnimal default destructor is called" << CLR_NON << '\n';
}

auto WrongAnimal::makeSound(
	void
) const -> void {
	std::cout << CLR_YEL << _type << ": " << CLR_NON << "platonic ideal of a wrong animal sound!"<< '\n';
}

auto WrongAnimal::getType(
	void
) const -> std::string {
	return (_type);
}
