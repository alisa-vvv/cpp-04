/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Character.hpp                                           :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/31 20:41:26 by avaliull            #+#    #+#           */
/*   Updated: 2026/04/02 16:03:38 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP_
# define CHARACTER_HPP_

# ifndef INVENTORY_SIZE
#  define INVENTORY_SIZE 4
# endif /* INVENTORY_SIZE */

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
public:
	Character();
	Character(std::string name);
	virtual ~Character() override;

	virtual std::string const& getName(
		void
	) const override;

	virtual void equip(
		AMateria* m
	) override;

	virtual void unequip(
		int idx
	) override;

	virtual void use(
		int idx,
		ICharacter& target
	) override;

private:
	AMateria*	_inventory[4] { 0 };
	std::string	_name { "unnamed character" };

	//auto updateInventory(
	//	AMateria*	head
	//) -> void;
};

#endif /* CHARACTER_HPP_ */
