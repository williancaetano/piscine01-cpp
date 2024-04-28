#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->setType("Cat");
	return ;
}

Cat::~Cat(void)
{
	return ;
}

Cat::Cat(const Cat &cpy) : Animal()
{
	this->setType(cpy.getType());
	return ;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	this->setType(rhs.getType());
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << this->getType() << ": Cat sound" << std::endl;
	return ;
}
