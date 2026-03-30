/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   main.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:17:27 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/30 18:39:11 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include <iostream>

auto	main(
	void
) -> int {
	std::cout << CLR_CYA << "\nCorrect example:" << CLR_NON << '\n';

	const Animal*	example_animal = new Animal;
	const Animal*	example_cat = new Cat;
	const Animal*	example_dog = new Dog;

	std::cout << CLR_YEL << "Animal's type: " << CLR_NON << example_animal->getType() <<'\n';
	std::cout << CLR_YEL << "Cat's type: " CLR_NON << example_cat->getType() << '\n';
	std::cout << CLR_YEL << "Dog's type: " << CLR_NON << example_dog->getType() << '\n';

	example_animal->makeSound();
	example_cat->makeSound();
	example_dog->makeSound();

	delete example_animal;
	delete example_dog;
	delete example_cat;

	std::cout << CLR_CYA << "\nWrong example:" << CLR_NON << '\n';

	// the way this works is if we create a new ANIMAL type and say it's a new
	// CAT type, ONLY THEN will we have a problem with not overwriting the
	// makeSound() function.
	// If we create a CAT type and say it's a NEW CAT, it will actually use
	// the CAT type's makeSound() regardless if it's marked as VIRTUAL in base
	// class.
	WrongAnimal*	example_wrong_animal = new WrongAnimal;
	WrongAnimal*	example_wrong_cat = new WrongCat;

	std::cout << CLR_YEL << "WrongAnimal's type: " << CLR_NON << example_wrong_animal->getType() <<'\n';
	std::cout << CLR_YEL << "WrongCat's type: " CLR_NON << example_wrong_cat->getType() << '\n';

	example_wrong_animal->makeSound();
	example_wrong_cat->makeSound();

	delete example_wrong_animal;
	delete example_wrong_cat;

	return (0);
}
