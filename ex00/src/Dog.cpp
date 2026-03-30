/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Dog.cpp                                                 :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:23:14 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/30 16:29:55 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
	_type = "Dog";
	std::cout << CLR_MAG << "Dog default constructor is called" << CLR_NON << '\n';
}

Dog::Dog(const Dog& other) {
	_type = "Dog";
	std::cout << CLR_MAG << "Dog copy constructor is called" << CLR_NON << '\n';
	*this = other;
}

Dog&	Dog::operator=(const Dog& other) {
	std::cout << CLR_MAG << "Dog assign operator is called" << CLR_NON << '\n';
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << CLR_MAG << "Dog default destructor is called" << CLR_NON << '\n';
}
auto Dog::makeSound(
	void
) -> void {
	std::cout << CLR_YEL << _type << ": " << CLR_NON << "Bark!"<< '\n';
}
