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

	bool operator<(Fixed const &rhs);
	bool operator>(Fixed const &rhs);
	bool operator>=(Fixed const &rhs);
	bool operator<=(Fixed const &rhs);
	bool operator==(Fixed const &rhs);
	bool operator!=(Fixed const &rhs);

	Fixed operator+(Fixed const &rhs) const;
	Fixed &operator++(void);
	Fixed operator++(int);
	Fixed operator-(Fixed const &rhs) const;
	Fixed &operator--(void);
	Fixed operator--(int);
	Fixed operator*(Fixed const &rhs) const;
	Fixed operator/(Fixed const &rhs) const;
	
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);

private:
private:
	int value;
	static const int fraction = 8;
};

std::ostream &operator<<(std::ostream &os, Fixed const &rhs);

#endif