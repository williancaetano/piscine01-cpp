#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() : name(), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << this->name << ": I have no name" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << this->name << ": My name is " << this->name << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &src) : name(src.getName()), hit_points(src.getHitPoints()), energy_points(src.getEnergyPoints()), attack_damage(src.getAttackDamage())
{
	std::cout << this->name << ": I'm a copy of " << src.getName() << std::endl;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << this->name << ": I'm dying" << std::endl;
	return;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
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
void ClapTrap::attack(const std::string &target)
{
	if (this->getEnergyPoints() > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
		std::cout << this->name << ": Not enough energy points to attack" << std::endl;

	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHitPoints() < 0)
		std::cout << this->name << ": No hit points left" << std::endl;
	else
		std::cout << this->name << ":" << amount << " points of damage to " << this->name << std::endl;
	this->setHitPoints(this->getHitPoints() - amount);
	return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergyPoints() > 0)
	{
		this->setHitPoints(this->getHitPoints() + amount);
		std::cout << this->name << ": Rpairing for " << amount << " of damage" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
		std::cout << this->name << ": Not enough energy points to repair" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ClapTrap::getName(void) const
{
	return (this->name);
}

void ClapTrap::setName(std::string name)
{
	this->name = name;
	return;
}

int ClapTrap::getHitPoints(void) const
{
	return (this->hit_points);
}

void ClapTrap::setHitPoints(long int amount)
{
	this->hit_points = amount;
	return;
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->energy_points);
}

void ClapTrap::setEnergyPoints(const int amount)
{
	this->energy_points = amount;
}

int ClapTrap::getAttackDamage(void) const
{
	return (this->attack_damage);
}

void ClapTrap::setAttackDamage(const int ammount)
{
	this->attack_damage = ammount;
	return;
}

/* ************************************************************************** */