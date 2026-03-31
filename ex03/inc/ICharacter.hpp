/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ICharacter.hpp                                          :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/31 20:40:18 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/31 20:41:05 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class ICharacter {
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};
