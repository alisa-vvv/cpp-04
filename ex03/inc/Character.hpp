/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Character.hpp                                           :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/31 20:41:26 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/31 20:43:57 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

class Character : public ICharacter {
public:
	virtual ~Character() {}
	virtual std::string const & getName() const override;
	virtual void equip(AMateria* m) override;
	virtual void unequip(int idx) override;
	virtual void use(int idx, ICharacter& target) override;

private:
	AMateria*	inventory;
};
