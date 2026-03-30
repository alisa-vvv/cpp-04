/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Cat.cpp                                                 :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:23:14 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/30 18:23:55 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
	_type = "Cat";
	std::cout << CLR_MAG << "Cat default constructor is called" << CLR_NON << '\n';
}

Cat::Cat(const Cat& other) {
	_type = "Cat";
	std::cout << CLR_MAG << "Cat copy constructor is called" << CLR_NON << '\n';
	*this = other;
}

Cat&	Cat::operator=(const Cat& other) {
	std::cout << CLR_MAG << "Cat assign operator is called" << CLR_NON << '\n';
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << CLR_MAG << "Cat default destructor is called" << CLR_NON << '\n';
}

auto Cat::makeSound(
	void
) const -> void {
	std::cout << CLR_YEL << _type << ": " << CLR_NON << "Meow!"<< '\n';
}
