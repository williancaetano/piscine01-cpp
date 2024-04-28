#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &cpy);
		WrongAnimal(std::string type);
		virtual ~WrongAnimal(void);
		WrongAnimal	&operator=(const WrongAnimal &rhs);
		std::string 	getType(void) const;
		void			setType(std::string new_type);
		virtual void	makeSound(void) const;
	protected:
		std::string	_type;
};
#endif
