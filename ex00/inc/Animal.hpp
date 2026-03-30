/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Animal.hpp                                              :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:19:12 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/30 18:22:29 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
# define ANIMAL_HPP_

# ifndef CLR_NON
#  define	CLR_NON "\033[0m"
#  define	CLR_YEL "\033[93m"
#  define	CLR_CYA "\033[96m"
#  define	CLR_RED "\033[31m"
#  define	CLR_GRN "\033[92m"
#  define	CLR_MAG "\033[95m"
# endif // CLR_NON and other CLR defines

#include <string>

class	Animal {
public:
	Animal();
	Animal(const Animal& other);
	Animal&	operator=(const Animal& other);
	virtual ~Animal();

	virtual auto makeSound(
	) const -> void;
	auto	getType(
	) const -> std::string;

protected:
	std::string	_type;
private:
};

#endif //ANIMAL_HPP_
