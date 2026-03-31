/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   main.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/31 19:59:44 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/31 20:38:27 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
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

}
