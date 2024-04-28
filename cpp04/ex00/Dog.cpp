#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->setType("Dog");
	return ;
}

Dog::Dog(const Dog &cpy) : Animal()
{
	this->setType(cpy.getType());
	return ;
}

Dog::~Dog(void)
{
	return ;
}


Dog	&Dog::operator=(const Dog &rhs)
{
	this->setType(rhs.getType());
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << this->getType() << ": Dog sound" << std::endl;
	return ;
}
