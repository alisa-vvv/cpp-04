/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   AMateria.hpp                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/31 20:02:24 by avaliull            #+#    #+#           */
/*   Updated: 2026/04/02 16:10:12 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP_
# define AMATERIA_HPP_

# ifndef CLR_NON
#  define	CLR_NON "\033[0m"
#  define	CLR_YEL "\033[93m"
#  define	CLR_CYA "\033[96m"
#  define	CLR_RED "\033[31m"
#  define	CLR_GRN "\033[92m"
#  define	CLR_MAG "\033[95m"
# endif // CLR_NON and other CLR defines

#include <string>

# ifndef FLOOR_SIZE
#  define	FLOOR_SIZE 128
# endif // CLR_NON and other CLR defines

class ICharacter;

class AMateria {
public:
	AMateria();
	AMateria(std::string const& type);
	AMateria(const AMateria& other);
	AMateria&	operator=(const AMateria& other);
	virtual ~AMateria() = 0;

	auto 	getType(
		void
	) const -> const std::string&;

	virtual auto clone(
		void
	) const -> AMateria* = 0;

	virtual void use(
		ICharacter& target
	) = 0;

	static AMateria*	floor[FLOOR_SIZE];
	static int			free_floor_idx;

protected:
	std::string	_type;
private:
};

#endif /* AMATERIA_HPP_ */
