/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   main.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/31 19:59:44 by avaliull            #+#    #+#           */
/*   Updated: 2026/04/02 19:18:09 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include <iostream>

auto main(
	void
) -> int {

	Ice	new_ice;
	std::cout << CLR_YEL << "new_ice type: " << CLR_NON << new_ice.getType() << "\n";
	AMateria	*clone_ice = new_ice.clone();
	std::cout << CLR_YEL << "clone_ice type: " << CLR_NON << clone_ice->getType() << "\n";

	Cure	new_cure;
	std::cout << CLR_YEL << "new_cure type: " << CLR_NON << new_cure.getType() << "\n";
	AMateria	*clone_cure = new_cure.clone();
	std::cout << CLR_YEL << "clone_cure type: " << CLR_NON << clone_cure->getType() << "\n";

	Character	sonic("Sonic");
	Character	eggman("Eggman");

	std::cout << "sonic name: " << sonic.getName() << '\n';
	std::cout << "eggman name: " << eggman.getName() << '\n';
	sonic.equip(clone_ice);
	eggman.equip(clone_cure);
	sonic.use(0, eggman);
	Character	sonic_clone(sonic);
	sonic_clone.use(0, sonic);

	Character	sonic_assign;
	sonic_assign = sonic;
	sonic_assign.use(0, eggman);
//	eggman.use(0, eggman);
//	eggman.unequip(0);

	return 0;
}
