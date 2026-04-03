/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   main.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/31 19:59:44 by avaliull            #+#    #+#           */
/*   Updated: 2026/04/03 14:20:10 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include <iostream>
#include "MateriaSource.hpp"

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

	MateriaSource source_of_ice;
	MateriaSource source_of_cure;

	source_of_ice.learnMateria(clone_ice);
	source_of_ice.learnMateria(clone_ice);

	source_of_cure.learnMateria(clone_cure);
	source_of_cure.learnMateria(clone_cure);

	std::cout << "sonic name: " << sonic.getName() << '\n';
	std::cout << "eggman name: " << eggman.getName() << '\n';

	sonic.equip(source_of_ice.createMateria("ice"));
	eggman.equip(source_of_cure.createMateria("cure"));
	eggman.equip(source_of_cure.createMateria("fake_mat"));

	delete clone_ice;
	delete clone_cure;


	try {
		eggman.equip(source_of_cure.createMateria(nullptr));
	}
	catch(...) {
		std::cout << CLR_RED << "please don't pass stupid values there" << CLR_NON << "\n";
	}

	std::cout << CLR_YEL << "sonic using ice on eggman:" << CLR_NON << "\n";
	sonic.use(0, eggman);

	std::cout << CLR_YEL << "sonic_clone using ice on sonic:" << CLR_NON << "\n";
	Character	sonic_clone(sonic);
	sonic_clone.use(0, sonic);

	Character	sonic_assign;
	sonic_assign = sonic;
	std::cout << CLR_YEL << "sonic_assign using ice:" << CLR_NON << "\n";
	sonic_assign.use(0, eggman);

	std::cout << CLR_YEL << "eggman using cure on eggman:" << CLR_NON << "\n";
	eggman.use(0, eggman);
	eggman.unequip(0);
	
	AMateria::cleanFloor();
	
	return 0;
}
