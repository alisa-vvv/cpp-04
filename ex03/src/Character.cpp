/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Character.cpp                                           :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/04/02 14:11:11 by avaliull            #+#    #+#           */
/*   Updated: 2026/04/03 14:20:16 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include <iostream>

Character::Character() {
}

Character::Character(std::string name)
	: _name(name) {
}

Character::Character(const Character& other) {
	this->_name = other._name;
	for (int inv_idx = 0; inv_idx < INVENTORY_SIZE; inv_idx++) {
		delete this->_inventory[inv_idx];
		if (other._inventory[inv_idx]) {
			this->equip(other._inventory[inv_idx]->clone());
		}
	}
}

Character&	Character::operator=(const Character& other) {
	if (this != &other) {
		this->_name = other._name;
		for (int inv_idx = 0; inv_idx < INVENTORY_SIZE; inv_idx++) {
			delete this->_inventory[inv_idx];
			if (other._inventory[inv_idx]) {
				this->equip(other._inventory[inv_idx]->clone());
			}
		}
	}
	return (*this);
}

std::string const& Character::getName(
	void
) const {
	return (_name);
}

Character::~Character() {
	for (int inv_idx = 0; inv_idx < INVENTORY_SIZE; inv_idx++) {
		delete _inventory[inv_idx];
	}
}

void Character::equip(
	AMateria* m
) {
	int	first_free_slot;

	for (first_free_slot = 0; first_free_slot < INVENTORY_SIZE; first_free_slot++) {
		if (_inventory[first_free_slot] == nullptr) {
			break ;
		}
	}
	if (first_free_slot == INVENTORY_SIZE) {
		std::cout << CLR_YEL;
		std::cout << _name << CLR_NON;
		std::cout << " can't equip item: invenotry full!\n";
		return ;
	}
	_inventory[first_free_slot] = m;
}

void Character::unequip(
	int idx
) {
	if (AMateria::free_floor_idx == FLOOR_SIZE) {
		std::cout << CLR_YEL;
		std::cout << _name << CLR_NON;
		std::cout << " can't uneqip item: no space on the floor!\n";
	}
	AMateria::floor[AMateria::free_floor_idx] = _inventory[idx];
	AMateria::free_floor_idx++;
	_inventory[idx] = nullptr;
}

void Character::use(
	int idx,
	ICharacter& target
) {
	//std::cout << "TEST: address of AMateria* used: " << _inventory[idx] << '\n';
	if (_inventory[idx] == nullptr) {
		std::cout << CLR_RED;
		std::cout << _name << "'s inventory is empty at slot " << CLR_YEL << idx;
		std::cout << CLR_RED << ". Can't use materia!\n";
		return ;
	}
	_inventory[idx]->use(target);
}
