/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Cat.hpp                                                 :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:19:12 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/30 16:23:56 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
# define CAT_HPP_

# ifndef CLR_NON
#  define	CLR_NON "\033[0m"
#  define	CLR_YEL "\033[93m"
#  define	CLR_CYA "\033[96m"
#  define	CLR_RED "\033[31m"
#  define	CLR_GRN "\033[92m"
#  define	CLR_MAG "\033[95m"
# endif /* CLR_NON and other CLR defines */

#include "Animal.hpp"

class	Cat : public Animal {
public:
	using Animal::Animal;
	Cat();
	Cat(const Cat& other);
	Cat&	operator=(const Cat& other);
	~Cat();

	auto makeSound(
		void
	) -> void override;

protected:
private:
};

#endif //CAT_HPP_
