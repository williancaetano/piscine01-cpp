#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->setType("WrongCat");
	return ;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal()
{
	this->setType(cpy.getType());
	return ;
}

WrongCat::~WrongCat(void)
{
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	this->setType(rhs.getType());
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->getType() << ": Wrong cat sound" << std::endl;
	return ;
}
