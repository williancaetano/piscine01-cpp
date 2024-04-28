#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("default")
{
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	this->setType(cpy.getType());
	return;
}

WrongAnimal::~WrongAnimal(void)
{
	return;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->setType(rhs.getType());
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

void WrongAnimal::setType(std::string new_type)
{
	this->_type = new_type;
	return;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong animal sound" << std::endl;
	return;
}
