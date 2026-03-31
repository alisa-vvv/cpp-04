/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   main.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:17:27 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/31 15:45:17 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

auto	main(
	void
) -> int {
	const int	animal_count { 10 };
	Animal*		zoo[10];

{
	std::cout << CLR_CYA << "======== TEST1: Animal array ========" << CLR_NON << '\n';

	int	i { 0 };
	std::cout << CLR_YEL << "======== CONSTRUCTING 5 CATS ========" << CLR_NON << '\n';
	for (i = 0; i < animal_count / 2; i++) {
		std::cout << CLR_YEL << "zoo[" << i << "]:" << CLR_NON << '\n';
		zoo[i] = new Cat;
	}

	std::cout << CLR_YEL << "======== CONSTRUCTING 5 DOGS ========" << CLR_NON << '\n';
	for (i = animal_count / 2; i < animal_count; i++) {
		std::cout << CLR_YEL << "zoo[" << i << "]:" << CLR_NON << '\n';
		zoo[i] = new Dog;
	}
	std::cout << '\n';

	std::cout << CLR_YEL << "======== DELETING ZOO ========" << CLR_NON << '\n';
	for (i = 0; i < animal_count; i++) {
		std::cout << CLR_YEL << "zoo[" << i << "]:" << CLR_NON << '\n';
		delete zoo[i];
	}
	std::cout << '\n';
}


{
	std::cout << CLR_CYA << "======== TEST2: COPIES ========" << CLR_NON << '\n';

	std::cout << CLR_YEL << "======== DOG CONSTRUCTORS ========" << CLR_NON << '\n';

		/*
			* Dog
			*/
	std::cout << '\n';
	std::cout << CLR_YEL << "doggo:" << CLR_NON << '\n';
	const Dog*	doggo = new Dog();
	doggo->makeSound();
	std::cout << '\n';

	std::cout << CLR_YEL << "copy_doggo:" << CLR_NON << '\n';
	const Dog	copy_doggo(*doggo);
	copy_doggo.makeSound();
	std::cout << '\n';

	std::cout << CLR_YEL << "assign_doggo:" << CLR_NON << '\n';
	Dog	assign_doggo = *doggo;
	assign_doggo.makeSound();
	std::cout << '\n';

	std::cout << CLR_YEL << "animal_copy_doggo:" << CLR_NON << '\n';
	const Animal*	animal_copy_doggo = new Dog(*doggo);
	animal_copy_doggo->makeSound();
	std::cout << '\n';

	std::cout << CLR_YEL << "animal_ptr_equal_doggo:" << CLR_NON << '\n';
	const Animal*	animal_ptr_equal_doggo = doggo;
	animal_ptr_equal_doggo->makeSound();
	std::cout << '\n';

		// Checking doggo and its copies' addresses:
	std::cout << CLR_YEL << "doggo's _brain address: "<< CLR_NON;
	std::cout << doggo->getBrainAddress() << '\n';
	doggo->thinkThoughtIndex(50);
	std::cout << '\n';

	std::cout << CLR_YEL << "copy_doggo's _brain address: " << CLR_NON;
	std::cout << copy_doggo.getBrainAddress() << '\n';
	copy_doggo.thinkThoughtIndex(50);
	std::cout << '\n';

	std::cout << CLR_YEL << "assign_doggo's _brain address: ";
	std::cout << CLR_NON << assign_doggo.getBrainAddress() << '\n';
	assign_doggo.thinkThoughtIndex(50);
	std::cout << '\n';

	std::cout << CLR_YEL << "animal_copy_doggo's _brain address: "<< CLR_NON;
	std::cout << animal_copy_doggo->getBrainAddress() << '\n';
	animal_copy_doggo->thinkThoughtIndex(50);
	std::cout << '\n';

	std::cout << CLR_YEL << "animal_ptr_equal_doggo's _brain address: "<< CLR_NON;
	std::cout << animal_ptr_equal_doggo->getBrainAddress() << '\n';
	animal_ptr_equal_doggo->thinkThoughtIndex(50);
	std::cout << '\n';

	std::cout << '\n';
		/*
			* endof Dog
			*/

	std::cout << CLR_YEL << "======== CAT CONSTRUCTORS ========" << CLR_NON << '\n';
		/*
			* Cat
			*/
	std::cout << '\n';
	std::cout << CLR_YEL << "kitty:" << CLR_NON << '\n';
	const Cat*	kitty = new Cat();
	kitty->makeSound();
	std::cout << '\n';

	std::cout << CLR_YEL << "copy_kitty:" << CLR_NON << '\n';
	const Cat	copy_kitty(*kitty);
	copy_kitty.makeSound();
	std::cout << '\n';

	std::cout << CLR_YEL << "assign_kitty:" << CLR_NON << '\n';
	Cat	assign_kitty = *kitty;
	assign_kitty.makeSound();
	std::cout << '\n';

	std::cout << CLR_YEL << "animal_copy_kitty:" << CLR_NON << '\n';
	const Animal*	animal_copy_kitty = new Cat(*kitty);
	animal_copy_kitty->makeSound();
	std::cout << '\n';

	std::cout << CLR_YEL << "animal_ptr_equal_kitty:" << CLR_NON << '\n';
	const Animal*	animal_ptr_equal_kitty = kitty;
	animal_ptr_equal_kitty->makeSound();
	std::cout << '\n';

		// Checking kitty and its copies' addresses:
	std::cout << CLR_YEL << "kitty's _brain address: "<< CLR_NON;
	std::cout << kitty->getBrainAddress() << '\n';
	kitty->thinkThoughtIndex(50);
	std::cout << '\n';

	std::cout << CLR_YEL << "copy_kitty's _brain address: " << CLR_NON;
	std::cout << copy_kitty.getBrainAddress() << '\n';
	copy_kitty.thinkThoughtIndex(50);
	std::cout << '\n';

	std::cout << CLR_YEL << "assign_kitty's _brain address: ";
	std::cout << CLR_NON << assign_kitty.getBrainAddress() << '\n';
	assign_kitty.thinkThoughtIndex(50);
	std::cout << '\n';

	std::cout << CLR_YEL << "animal_copy_kitty's _brain address: "<< CLR_NON;
	std::cout << animal_copy_kitty->getBrainAddress() << '\n';
	animal_copy_kitty->thinkThoughtIndex(50);
	std::cout << '\n';

	std::cout << CLR_YEL << "animal_ptr_equal_kitty's _brain address: "<< CLR_NON;
	std::cout << animal_ptr_equal_kitty->getBrainAddress() << '\n';
	animal_ptr_equal_kitty->thinkThoughtIndex(50);
	std::cout << '\n';

	std::cout << '\n';

		/*
			* endof Cat
			*/


	std::cout << CLR_YEL << "\n======== DESTRUCTORS ========" << CLR_NON << '\n';

	std::cout << CLR_YEL << "doggo:" << CLR_NON << '\n';
	delete doggo;
	delete animal_copy_doggo;
	std::cout << CLR_YEL << "kitty:" << CLR_NON << '\n';
	delete kitty;
	delete animal_copy_kitty;

	std::cout << CLR_YEL << "doggo and kitty's static copies:" << CLR_NON << '\n';
}
	std::cout << '\n';


	std::cout << CLR_CYA << "======== TEST3: SUBJECT, LEAKS ========" << CLR_NON << '\n';
{

	std::cout << CLR_YEL << "======== CONSTRUCTORS ========" << CLR_NON << '\n';
	std::cout << CLR_YEL << "Dog:" << CLR_NON << '\n';
	const Animal*	doggo = new Dog();
	std::cout << CLR_YEL << "Cat:" << CLR_NON << '\n';
	const Animal*	kitty = new Cat();

	std::cout << CLR_YEL << "======== DESTRUCTORS ========" << CLR_NON << '\n';
	std::cout << CLR_YEL << "Dog:" << CLR_NON << '\n';
	delete doggo;
	std::cout << CLR_YEL << "Cat:" << CLR_NON << '\n';
	delete kitty;

}
	std::cout << '\n';


	return (0);
}
