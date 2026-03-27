/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Animal.hpp                                              :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/27 19:19:12 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/27 19:23:05 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#define	CLR_NON "\033[0m"
#define	CLR_YEL "\033[93m"
#define	CLR_CYA "\033[96m"
#define	CLR_RED "\033[31m"
#define	CLR_GRN "\033[92m"
#define	CLR_MAG "\033[95m"

#include <string>

class	Animal {
public:
	Animal();
	Animal(const Animal& other);
	Animal&	operator=(const Animal& other);
	~Animal();

protected:
	std::string	type;
};
