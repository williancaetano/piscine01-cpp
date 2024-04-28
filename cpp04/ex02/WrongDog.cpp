#include "AWrongAnimal.hpp"
#include "WrongDog.hpp"
#include "Brain.hpp"

WrongDog::WrongDog(void) : AWrongAnimal("WrongDog")
{
	std::cout << "A WrongDog is being constructed (?)" << std::endl;
	this->_brain = new Brain();
	return ;
}

WrongDog::WrongDog(const WrongDog &cpy) : AWrongAnimal(cpy.getType())
{
	std::cout << "A WrongDog is being copy constructed (?)" << std::endl;
	this->_brain = new Brain(*cpy._brain);
	return ;
}

WrongDog::~WrongDog(void)
{
	std::cout << "A WrongDog is being destructed (?)" << std::endl;
	delete this->_brain;
	return ;
}

WrongDog	&WrongDog::operator=(const WrongDog &rhs)
{
	this->setType(rhs.getType());
	*this->_brain = *rhs._brain;
	return (*this);
}

void	WrongDog::makeSound(void) const
{
	std::cout << this->getType() << ": Am I supposed to bark ??" << std::endl;
	return ;
}
