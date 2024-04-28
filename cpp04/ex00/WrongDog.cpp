#include "WrongAnimal.hpp"
#include "WrongDog.hpp"


WrongDog::WrongDog(void) : WrongAnimal()
{
	this->setType("WrongDog");
	return ;
}

WrongDog::WrongDog(const WrongDog &cpy) : WrongAnimal()
{
	this->setType(cpy.getType());
	return ;
}

WrongDog::~WrongDog(void)
{
	return ;
}

WrongDog	&WrongDog::operator=(const WrongDog &rhs)
{
	this->setType(rhs.getType());
	return (*this);
}

void	WrongDog::makeSound(void) const
{
	std::cout << this->getType() << ": Wrong dog sound" << std::endl;
	return ;
}
