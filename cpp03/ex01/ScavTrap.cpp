#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap()
{
	ScavTrap::setHitPoints(100);
	ScavTrap::setEnergyPoints(50);
	ScavTrap::setAttackDamage(20);
	std::cout << "Hello, I have no name" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	ScavTrap::setHitPoints(100);
	ScavTrap::setEnergyPoints(50);
	ScavTrap::setAttackDamage(20);
	std::cout << "Hello, my name is " << this->getName() << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap()
{
	ScavTrap::setName(src.getName());
	ScavTrap::setHitPoints(src.getHitPoints());
	ScavTrap::setEnergyPoints(src.getEnergyPoints());
	ScavTrap::setAttackDamage(src.getAttackDamage());
	std::cout << "Hello, I'm  a copy of " << this->getName() << std::endl;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " destroyed" << std::endl;
	return;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
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

void ScavTrap::attack(const std::string &target)
{
	if (this->getEnergyPoints() > 0)
	{
		std::cout << "< ScavTrap > " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
		std::cout << this->getName() << ": No energy to attack" << std::endl;
	return;
}

void ScavTrap::guardGate(void)
{
	std::cout << this->getName() << ": Guarding the gate..." << std::endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */