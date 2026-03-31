/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Ice.hpp                                                 :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/31 20:02:24 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/31 20:36:29 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP_
# define ICE_HPP_

# ifndef CLR_NON
#  define	CLR_NON "\033[0m"
#  define	CLR_YEL "\033[93m"
#  define	CLR_CYA "\033[96m"
#  define	CLR_RED "\033[31m"
#  define	CLR_GRN "\033[92m"
#  define	CLR_MAG "\033[95m"
# endif // CLR_NON and other CLR defines

#include "AMateria.hpp"
#include <string>

class Ice : public AMateria {
public:
	using AMateria::AMateria;
	Ice();
	Ice(std::string const& type);
	Ice(const Ice& other);
	Ice&	operator=(const Ice& other);
	virtual ~Ice() override;

	using AMateria::getType;

	virtual auto clone(
		void
	) const -> AMateria* override;

	//virtual void use(ICharacter& target);

protected:
private:
};

#endif /* ICE_HPP_ */
