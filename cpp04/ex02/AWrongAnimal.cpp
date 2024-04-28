#include "AWrongAnimal.hpp"

AWrongAnimal::AWrongAnimal(void) : _type("default")
{
	std::cout << "A WrongAnimal is being constructed (?)" << std::endl;
	return ;
}

AWrongAnimal::AWrongAnimal(const AWrongAnimal &cpy) : _type(cpy.getType())
{
	std::cout << "A WrongAnimal is being constructed (?)" << std::endl;
	return ;
}

AWrongAnimal::AWrongAnimal(std::string type) : _type(type)
{
	std::cout << "A WrongAnimal is being constructed (?)" << std::endl;
	return ;
}

AWrongAnimal::~AWrongAnimal(void)
{
	std::cout << "A WrongAnimal is being destructed (?)" << std::endl;
	return ;
}

AWrongAnimal	&AWrongAnimal::operator=(const AWrongAnimal &rhs)
{
	this->setType(rhs.getType());
	return (*this);
}

std::string 	AWrongAnimal::getType(void) const
{
	return (this->_type);
}

void	AWrongAnimal::setType(std::string new_type)
{
	this->_type = new_type;
	return ;
}
