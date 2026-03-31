/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Brain.cpp                                               :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/30 19:13:33 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/31 15:32:49 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "WordList.hpp"
#include <iostream>
#include <random>

Brain::Brain() {
	std::cout << CLR_MAG << "Brain default constructor is called" << CLR_NON << '\n';
	_randomizeThoughts();
}

Brain::Brain(const Brain& other) {
	std::cout << CLR_MAG << "Brain copy constructor is called" << CLR_NON << '\n';
	*this = other;
	for (int i = 0; i < THOUGHT_COUNT; i++) {
		this->_thoughts[i] = other._thoughts[i];
	}
}

Brain&	Brain::operator=(const Brain& other) {
	std::cout << CLR_MAG << "Brain assign operator is called" << CLR_NON << '\n';
	if (this != &other) {
		for (int i = 0; i < THOUGHT_COUNT; i++) {
			this->_thoughts[i] = other._thoughts[i];
		}
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << CLR_MAG << "Brain default destructor is called" << CLR_NON << '\n';
}

auto	Brain::_randomizeThoughts(
	void
) -> void {
	std::random_device				rd; // seed source for random engine
	std::mt19937					gen(rd()); // seeded engine
	std::uniform_int_distribution<>	distrib(1, 500);

	for (int i = 0; i < THOUGHT_COUNT; i++) {
		_thoughts[i] = random_word_list[distrib(gen)];
	}
}

auto Brain::getThoughtIndex(
	int	index
) const -> std::string {
	return (_thoughts[index]);
}
