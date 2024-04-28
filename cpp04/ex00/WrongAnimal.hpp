#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal
{
public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &cpy);
	virtual ~WrongAnimal(void);

	virtual void makeSound(void) const;

	std::string getType(void) const;
	void setType(std::string new_type);
	
	WrongAnimal &operator=(const WrongAnimal &rhs);

protected:
	std::string _type;
};
#endif
