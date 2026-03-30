/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Brain.cpp                                               :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/30 19:13:33 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/30 19:30:26 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() : _thoughts() {
	std::cout << CLR_MAG << "Brain default constructor is called" << CLR_NON << '\n';
}

Brain::Brain(const Brain& other) {
	std::cout << CLR_MAG << "Brain copy constructor is called" << CLR_NON << '\n';
	*this = other;
}

Brain&	Brain::operator=(const Brain& other) {
	std::cout << CLR_MAG << "Brain assign operator is called" << CLR_NON << '\n';
	if (this != &other) {
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << CLR_MAG << "Brain default destructor is called" << CLR_NON << '\n';
}

void	init_thoughts() {
}
