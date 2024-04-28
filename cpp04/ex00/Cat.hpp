#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat &cpy);
		~Cat(void);
		Cat	&operator=(const Cat &rhs);
		virtual void	makeSound(void) const;
};
#endif
