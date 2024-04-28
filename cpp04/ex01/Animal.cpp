#include "Animal.hpp"

Animal::Animal(void) : _type("default")
{
	std::cout << "An Animal is being constructed" << std::endl;
	return ;
}

Animal::Animal(const Animal &cpy) : _type(cpy.getType())
{
	std::cout << "An Animal is being copy constructed" << std::endl;
	return ;
}

Animal::Animal(std::string type) : _type(type)
{
	return ;
}
Animal::~Animal(void)
{
	std::cout << "An Animal is being destructed" << std::endl;
	return ;
}

Animal	&Animal::operator=(const Animal &rhs)
{
	this->setType(rhs.getType());
	return (*this);
}

std::string 	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(std::string new_type)
{
	this->_type = new_type;
	return ;
}

void	Animal::makeSound(void) const
{
	std::cout << "I'm literally just a concept, come on..." << std::endl;
	return ;
}
