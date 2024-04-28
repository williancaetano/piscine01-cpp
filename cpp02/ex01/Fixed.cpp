#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int value)
{
	this->value = value << this->fraction;
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << this->fraction));
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = src.getRawBits();
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &rhs)
{
	double	result;
	
	result = (double)rhs.getRawBits() / (double)(1 << 8);
	os << result;
	return (os);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int Fixed::toInt() const
{
	return (this->value >> this->fraction);
}

float Fixed::toFloat() const
{
	return (float)getRawBits() / (1 << 8);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const value)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = value;
	return;
}

/* ************************************************************************** */