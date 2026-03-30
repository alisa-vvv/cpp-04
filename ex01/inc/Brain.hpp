/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Brain.hpp                                               :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/30 19:13:23 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/30 19:35:52 by avaliull            ########   odam.nl   */
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

protected:
private:
	std::string	_thoughts[THOUGHT_COUNT] = {
		"Tail",
		"Persian",
		"Vet",
		"Hunt",
		"Catnip",
		"Sleep",
		"Birman",
		"Carrier",
		"Leash",
		"Abyssinian",
		"Pet",
		"Meow",
		"Domesticated",
		"Ocicat",
		"Water",
		"Maine Coon",
		"Declaw",
		"Litter Box",
		"Claw",
		"Kitten",
		"Collar",
		"Whiskers",
		"Javanese",
		"Scottish Fold",
		"Groom",
		"Egyptian Mau",
		"Breed",
		"Food",
		"Purr",	
		"Devon Rex",
		"Bed",
		"Feline",
		"Paws",
		"Burmese",
		"Scratching post",
		"Play",
		"Animal",
		"Scratch",
		"Spay",
		"Neuter",
		"Bengal",
		"Himalayan",
		"Furry",
		"British Shorthair",
		"Toy",
		"American Shorthair",
		"Exotic Shorthair",
		"Siamese",
		"Manx",	
		"Cuddle",
		"Maltese",
		"Yorkshire Terrier",
		"Bed",
		"Tricks",
		"Bark",
		"Greyhound",
		"Leash",
		"Bulldog",
		"Shelter",
		"Pomeranian",
		"Shih Tzu",
		"Water",
		"Vet",
		"Walk",
		"Boxer",
		"Siberian Husky",
		"Toy",
		"Wag",
		"Kennel",
		"Cuddle",
		"German Shepherd",
		"Animal",
		"Tail",
		"Dalmatian",
		"Rescue",
		"Puppy",
		"Poodle",
		"Run",
		"Play",
		"Dachshund",
		"Fetch",
		"Golden Retriever",
		"Beagle",
		"Collar",
		"Obedience",
		"Labrador Retriever",
		"Breed",
		"Chihuahua",
		"Canine",
		"Domesticated",
		"Furry",
		"Training",
		"Groom",
		"Pet",
		"Harness",
		"Rottweiler",
		"Food",
		"Paws",
		"Bichon Frise",
		"Crate"
	};
};

#endif /* BRAIN_HPP_ */
