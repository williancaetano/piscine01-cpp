#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat &cpy);
		~WrongCat(void);
		WrongCat	&operator=(const WrongCat &rhs);
		virtual void	makeSound(void) const;
};
#endif
