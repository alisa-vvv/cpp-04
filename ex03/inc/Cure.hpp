/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Cure.hpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/31 20:02:24 by avaliull            #+#    #+#           */
/*   Updated: 2026/04/02 16:01:39 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP_
# define CURE_HPP_

# ifndef CLR_NON
#  define	CLR_NON "\033[0m"
#  define	CLR_YEL "\033[93m"
#  define	CLR_CYA "\033[96m"
#  define	CLR_RED "\033[31m"
#  define	CLR_GRN "\033[92m"
#  define	CLR_MAG "\033[95m"
# endif // CLR_NON and other CLR defines

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Cure : public AMateria {
public:
	using AMateria::AMateria;
	Cure();
	Cure(std::string const& type);
	Cure(const Cure& other);
	Cure&	operator=(const Cure& other);
	virtual ~Cure() override;

	using AMateria::getType;

	virtual auto clone(
		void
	) const -> AMateria* override;

	virtual void use(ICharacter& target) override;

protected:
private:
};

#endif /* CURE_HPP_ */
