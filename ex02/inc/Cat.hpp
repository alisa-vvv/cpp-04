/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Cat.hpp                                                 :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:19:12 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/31 18:05:26 by avaliull            ########   odam.nl   */
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

#include "A_Animal.hpp"
#include "Brain.hpp"

class	Cat : public A_Animal {
public:
	using A_Animal::A_Animal;
	Cat();
	Cat(const Cat& other);
	Cat&	operator=(const Cat& other);
	~Cat();

	auto makeSound(
	) const -> void override;

	auto getBrainAddress(
	) const -> Brain* override;

	auto thinkThoughtIndex(
		int	index
	) const -> void override;

protected:
private:
	Brain*	_brain;
};

#endif //CAT_HPP_
