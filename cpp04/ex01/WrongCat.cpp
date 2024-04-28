#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "A WrongCat is being constructed (?)" << std::endl;
	this->_brain = new Brain();
	return ;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy.getType())
{
	std::cout << "A WrongCat is being copy constructed (?)" << std::endl;
	this->_brain = new Brain(*cpy._brain);
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "A WrongCat is being destructed (?)" << std::endl;
	delete this->_brain;
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	this->setType(rhs.getType());
	*this->_brain = *rhs._brain;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->getType() << ": Am i supposed to meow??" << std::endl;
	return ;
}
