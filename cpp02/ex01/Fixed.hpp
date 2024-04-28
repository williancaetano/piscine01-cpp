#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{

public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(Fixed const &src);
	~Fixed();

	int toInt() const;
	float toFloat() const;

	int getRawBits() const;
	void setRawBits(int const value);

	Fixed &operator=(Fixed const &rhs);

private:
	int value;
	static const int fraction = 8;
};

std::ostream &operator<<(std::ostream &os, Fixed const &rhs);

#endif