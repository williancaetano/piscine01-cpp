#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap()
{
	FragTrap::setHitPoints(100);
	FragTrap::setEnergyPoints(100);
	FragTrap::setAttackDamage(30);
	std::cout << "FragTrap: " << " Hello, I have no name" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	FragTrap::setHitPoints(100);
	FragTrap::setEnergyPoints(100);
	FragTrap::setAttackDamage(30);
	std::cout << "FragTrap: " << "Hello, my name is " << this->getName() << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap()
{
	FragTrap::setName(src.getName());
	FragTrap::setHitPoints(src.getHitPoints());
	FragTrap::setEnergyPoints(src.getEnergyPoints());
	FragTrap::setAttackDamage(src.getAttackDamage());
	std::cout << "Hello, I'm  a copy of " << this->getName() << std::endl;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " destroyed" << std::endl;
	return;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void FragTrap::attack(const std::string &target)
{
	if (this->getEnergyPoints() > 0)
	{
		std::cout << "< FragTrap > " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
		std::cout << this->getName() << ": No energy to attack" << std::endl;
	return;
}

void FragTrap::highFivesGuys()
{
	std::cout << this->getName() << ": High five guys!" << std::endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */