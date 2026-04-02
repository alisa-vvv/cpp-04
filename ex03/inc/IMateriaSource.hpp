/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   IMateriaSource.hpp                                      :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/04/02 18:59:21 by avaliull            #+#    #+#           */
/*   Updated: 2026/04/02 19:19:33 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

# ifndef IMATERIA_SOURCE_HPP_
#  define	IMATERIA_SOURCE_HPP_

#include "AMateria.hpp"

class IMateriaSource {
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

# endif // IMATERIA_SOURCE_HPP_
