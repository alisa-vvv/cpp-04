/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Character.hpp                                           :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/31 20:41:26 by avaliull            #+#    #+#           */
/*   Updated: 2026/04/02 19:29:03 by avaliull            ########   odam.nl   */
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
	Character(const Character& other);
	Character&	operator=(const Character& other);
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
	AMateria*	_inventory[INVENTORY_SIZE] { nullptr, nullptr, nullptr, nullptr };
	std::string	_name { "unnamed character" };
};

#endif /* CHARACTER_HPP_ */
