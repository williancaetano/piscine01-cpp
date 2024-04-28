#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>
# include <string>

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(const AAnimal &cpy);
		AAnimal(std::string type);
		virtual ~AAnimal(void);
		AAnimal	&operator=(const AAnimal &rhs);
		std::string 	getType(void) const;
		void			setType(std::string new_type);
		virtual void	makeSound(void) const = 0;
	protected:
		std::string	_type;
};
#endif
