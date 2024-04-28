#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP
# include "AWrongAnimal.hpp"
# include "Brain.hpp"

class WrongDog : public AWrongAnimal
{
	public:
		WrongDog(void);
		WrongDog(const WrongDog &cpy);
		~WrongDog(void);
		WrongDog	&operator=(const WrongDog &rhs);
		virtual void	makeSound(void) const;
	private:
		Brain	*_brain;
};
#endif
