/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   A_Animal.hpp                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:19:12 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/31 18:04:14 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_HPP_
# define A_ANIMAL_HPP_

# ifndef CLR_NON
#  define	CLR_NON "\033[0m"
#  define	CLR_YEL "\033[93m"
#  define	CLR_CYA "\033[96m"
#  define	CLR_RED "\033[31m"
#  define	CLR_GRN "\033[92m"
#  define	CLR_MAG "\033[95m"
# endif // CLR_NON and other CLR defines

// Soirce for abstract classes explanation:
// https://learn.microsoft.com/en-us/cpp/cpp/abstract-classes-cpp?view=msvc-170

#include "Brain.hpp"
#include <string>

class	A_Animal {
public:
	A_Animal();
	A_Animal(const A_Animal& other);
	A_Animal&	operator=(const A_Animal& other);
	virtual ~A_Animal() = 0;

	virtual auto makeSound(
	) const -> void = 0;

	virtual auto	getType(
	) const -> std::string;

	virtual auto getBrainAddress(
	) const -> Brain* = 0;

	virtual auto thinkThoughtIndex(
		int	index
	) const -> void = 0;

protected:
	std::string	_type;
private:
};

#endif //A_ANIMAL_HPP_
