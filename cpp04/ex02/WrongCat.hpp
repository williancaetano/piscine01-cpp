#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "AWrongAnimal.hpp"
# include "Brain.hpp"

class WrongCat : public AWrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat &cpy);
		~WrongCat(void);
		WrongCat	&operator=(const WrongCat &rhs);
		virtual void	makeSound(void) const;
	private:
		Brain	*_brain;
};
#endif
