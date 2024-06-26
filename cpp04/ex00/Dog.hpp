#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog &cpy);
		~Dog(void);

		virtual void	makeSound(void) const;

		Dog	&operator=(const Dog &rhs);
};
#endif
