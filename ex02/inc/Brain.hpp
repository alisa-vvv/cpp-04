/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Brain.hpp                                               :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/30 19:13:23 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/31 15:30:40 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP_
# define BRAIN_HPP_

#include <string>

# ifndef CLR_NON
#  define CLR_NON "\033[0m"
#  define CLR_YEL "\033[93m"
#  define CLR_CYA "\033[96m"
#  define CLR_RED "\033[31m"
#  define CLR_GRN "\033[92m"
#  define CLR_MAG "\033[95m"
# endif // CLR_NON and other CLR defines

# ifndef THOUGHT_COUNT
#  define THOUGHT_COUNT 100
# endif /* THOUGHT_COUNT */

class	Brain {
public:
	Brain();
	Brain(const Brain& other);
	Brain&	operator=(const Brain& other);
	~Brain();

	auto getThoughtIndex(
		int	index
	) const -> std::string;

protected:
private:
	std::string	_thoughts[THOUGHT_COUNT];
	auto	_randomizeThoughts(
		void
	) -> void;

};

#endif /* BRAIN_HPP_ */
