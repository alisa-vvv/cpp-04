/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   MateriaSource.hpp                                       :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/04/02 18:59:21 by avaliull            #+#    #+#           */
/*   Updated: 2026/04/02 19:29:55 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

# ifndef MATERIA_SOURCE_HPP_
#  define	MATERIA_SOURCE_HPP_

# ifndef SLOT_COUNT
#  define SLOT_COUNT 4
# endif /* SLOT_COUNT */

#include "IMateriaSource.hpp"

class MateriaSource : IMateriaSource {
public:
	MateriaSource();
	MateriaSource(std::string const& type);
	MateriaSource(const MateriaSource& other);
	MateriaSource&	operator=(const MateriaSource& other);
	virtual ~MateriaSource() override;

	virtual auto learnMateria(
		AMateria* materia
	) -> void override;

	virtual auto createMateria(
		std::string const & type
	) -> AMateria* override;
private:
	AMateria*	_template_slots[SLOT_COUNT] { nullptr, nullptr, nullptr, nullptr };
};


# endif // MATERIA_SOURCE_HPP_
