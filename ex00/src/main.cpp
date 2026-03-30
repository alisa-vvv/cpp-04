/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   main.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:17:27 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/30 16:32:30 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

auto	main(
	void
) -> int {
	Animal*	example_animal = new Animal;
	Cat*	example_cat = new Cat;
	Dog*	example_dog = new Dog;

	std::cout << "Animal's type: " << example_animal->getType() << '\n';
	std::cout << "Cat's type: " << example_cat->getType() << '\n';
	std::cout << "Dog's type: " << example_dog->getType() << '\n';

	example_animal->makeSound();
	example_cat->makeSound();
	example_dog->makeSound();

	delete example_animal;
	delete example_dog;
	delete example_cat;

//	WrongAnimal*	example_wrong_animal = new WrongAnimal;
//	WrongCat*	example_wrong_cat = new WrongCat;
//
//	std::cout << "Animal's type: " << example_wrong_animal->getType() << '\n';
//	std::cout << "Cat's type: " << example_wrong_cat->getType() << '\n';
//
//	example_wrong_animal->makeSound();
//	example_wrong_cat->makeSound();
//
//	delete example_wrong_animal;
//	delete example_wrong_cat;
//
	return (0);
}
