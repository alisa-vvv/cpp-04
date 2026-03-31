/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   WrongAnimal.hpp                                         :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:19:12 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/30 18:39:58 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP_
# define WRONG_ANIMAL_HPP_

# ifndef CLR_NON
#  define	CLR_NON "\033[0m"
#  define	CLR_YEL "\033[93m"
#  define	CLR_CYA "\033[96m"
#  define	CLR_RED "\033[31m"
#  define	CLR_GRN "\033[92m"
#  define	CLR_MAG "\033[95m"
# endif // CLR_NON and other CLR defines

#include <string>

class	WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal&	operator=(const WrongAnimal& other);
	virtual ~WrongAnimal();

	auto makeSound(
	) const -> void;
	auto	getType(
	) const -> std::string;

protected:
	std::string	_type;
private:
};

#endif //WRONG_ANIMAL_HPP_
