/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   WrongCat.cpp                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:23:14 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/30 18:39:40 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
	_type = "WrongCat";
	std::cout << CLR_MAG << "WrongCat default constructor is called" << CLR_NON << '\n';
}

WrongCat::WrongCat(const WrongCat& other) {
	_type = "WrongCat";
	std::cout << CLR_MAG << "WrongCat copy constructor is called" << CLR_NON << '\n';
	*this = other;
}

WrongCat&	WrongCat::operator=(const WrongCat& other) {
	std::cout << CLR_MAG << "WrongCat assign operator is called" << CLR_NON << '\n';
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << CLR_MAG << "WrongCat default destructor is called" << CLR_NON << '\n';
}

auto WrongCat::makeSound(
	void
) const -> void {
	std::cout << CLR_YEL << _type << ": " << CLR_NON << "Wrong meow!"<< '\n';
}
