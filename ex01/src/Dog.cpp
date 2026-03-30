/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Dog.cpp                                                 :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:23:14 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/30 20:55:27 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
	std::cout << CLR_MAG << "Dog default constructor is called" << CLR_NON << '\n';
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog& other) {
	std::cout << CLR_MAG << "Dog copy constructor is called" << CLR_NON << '\n';
	_type = "Dog";
	this->_type = other._type;
	this->_brain = new Brain;
}

Dog&	Dog::operator=(const Dog& other) {
	std::cout << CLR_MAG << "Dog assign operator is called" << CLR_NON << '\n';
	if (this != &other) {
		this->_type = other._type;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << CLR_MAG << "Dog default destructor is called" << CLR_NON << '\n';
	delete _brain;
}

auto Dog::makeSound(
	void
) const -> void {
	std::cout << CLR_YEL << _type << ": " << CLR_NON << "Bark!"<< '\n';
}
auto Dog::getBrainAddress(
) const -> Brain* {
	return (_brain);
}
