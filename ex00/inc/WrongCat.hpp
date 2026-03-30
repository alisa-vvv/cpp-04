/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   WrongCat.hpp                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:19:12 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/30 18:39:44 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP_
# define WRONG_CAT_HPP_

# ifndef CLR_NON
#  define	CLR_NON "\033[0m"
#  define	CLR_YEL "\033[93m"
#  define	CLR_CYA "\033[96m"
#  define	CLR_RED "\033[31m"
#  define	CLR_GRN "\033[92m"
#  define	CLR_MAG "\033[95m"
# endif /* CLR_NON and other CLR defines */

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {
public:
	using WrongAnimal::WrongAnimal;
	WrongCat();
	WrongCat(const WrongCat& other);
	WrongCat&	operator=(const WrongCat& other);
	~WrongCat();

	auto makeSound(
		void
	) const -> void;

protected:
private:
};

#endif //WRONG_CAT_HPP_
