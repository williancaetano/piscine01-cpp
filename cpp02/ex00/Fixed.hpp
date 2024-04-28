#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{

public:
	Fixed();
	Fixed(Fixed const &src);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const value);

	Fixed &operator=(Fixed const &rhs);

private:
	int value;
	static const int fraction = 8;
};

#endif