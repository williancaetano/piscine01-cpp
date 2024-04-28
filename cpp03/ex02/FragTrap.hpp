#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap();

	void attack(const std::string &target);
	void highFivesGuys(void);

	FragTrap &operator=(FragTrap const &rhs);

private:
};

#endif