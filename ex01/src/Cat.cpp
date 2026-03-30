/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Cat.cpp                                                 :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:23:14 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/30 20:24:01 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
	std::cout << CLR_MAG << "Cat default constructor is called" << CLR_NON << '\n';
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat& other) {
	std::cout << CLR_MAG << "Cat copy constructor is called" << CLR_NON << '\n';
	_type = "Cat";
	this->_type = other._type;
	this->_brain = new Brain();
	*this->_brain = *other._brain;
}

Cat&	Cat::operator=(const Cat& other) {
	std::cout << CLR_MAG << "Cat assign operator is called" << CLR_NON << '\n';
	if (this != &other) {
		this->_type = other._type;
		this->_brain = new Brain();
		*this->_brain = *other._brain;
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << CLR_MAG << "Cat default destructor is called" << CLR_NON << '\n';
	delete _brain;
}

auto Cat::makeSound(
	void
) const -> void {
	std::cout << CLR_YEL << _type << ": " << CLR_NON << "Meow!"<< '\n';
}

auto Cat::getBrainAddress(
	void
) const -> Brain* {
	return (_brain);
}
