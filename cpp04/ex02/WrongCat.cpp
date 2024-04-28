#include "AWrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

WrongCat::WrongCat(void) : AWrongAnimal("WrongCat")
{
	std::cout << "A WrongCat is being constructed (?)" << std::endl;
	this->_brain = new Brain();
	return ;
}

WrongCat::WrongCat(const WrongCat &cpy) : AWrongAnimal(cpy.getType())
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
