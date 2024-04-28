#include "Animal.hpp"

Animal::Animal(void) : type("default")
{
	return;
}

Animal::Animal(const Animal &cpy)
{
	this->setType(cpy.getType());
	return;
}

Animal::~Animal(void)
{
	return;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::setType(std::string new_type)
{
	this->type = new_type;
	return;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal sound" << std::endl;
	return;
}

Animal &Animal::operator=(const Animal &rhs)
{
	this->setType(rhs.getType());
	return (*this);
}
