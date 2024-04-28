#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
	public:
		Animal(void);
		Animal(const Animal &cpy);
		Animal(std::string type);
		virtual ~Animal(void);
		Animal	&operator=(const Animal &rhs);
		std::string 	getType(void) const;
		void			setType(std::string new_type);
		virtual void	makeSound(void) const;
	protected:
		std::string	_type;
};
#endif
