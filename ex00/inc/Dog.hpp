/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Dog.hpp                                                 :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:19:12 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/30 16:24:22 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
# define DOG_HPP_

# ifndef CLR_NON
#  define	CLR_NON "\033[0m"
#  define	CLR_YEL "\033[93m"
#  define	CLR_CYA "\033[96m"
#  define	CLR_RED "\033[31m"
#  define	CLR_GRN "\033[92m"
#  define	CLR_MAG "\033[95m"
# endif /* CLR_NON and other CLR defines */

#include "Animal.hpp"

class	Dog : public Animal {
public:
	using Animal::Animal;
	Dog();
	Dog(const Dog& other);
	Dog&	operator=(const Dog& other);
	~Dog();

	auto makeSound(
	) -> void override;

protected:
private:
};

#endif //DOG_HPP
